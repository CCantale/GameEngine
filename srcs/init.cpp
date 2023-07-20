/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   init.cpp                                              by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "init.h"

int	LEMME::init(char const *title, int _window_posX, int _window_posY,
		int width, int height, int fullscreen)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cerr << "SDL: Couldn't init" << std::endl;
		return (FATAL_ERROR);
	}
	_window = SDL_CreateWindow(title, _window_posX, _window_posY, width,
			height, fullscreen);
	if (!_window)
	{
		std::cerr << "SDL: Couldn't open window" << std::endl;
		SDL_Quit();
		return (FATAL_ERROR);
	}
	_renderer = SDL_CreateRenderer(_window, -1, 0);
	if (!_renderer)
	{
		std::cerr << "SDL: Couldn't init renderer" << std::endl;
	}
	_init = true;
	SDL_RenderClear(_renderer);
	SDL_RenderPresent(_renderer);
	return (SUCCESS);
}

void	LEMME::doThis(std::function<void()> newFunction)
{
	userDefinedFunction = newFunction;
}

int	LEMME::start(void)
{
	if (_init != true)
		return (FATAL_ERROR);
	_running = true;
	while (_running)
	{
		calculateDelta();
		handleEvents();
		if (userDefinedFunction)
			userDefinedFunction();
		//update();
		SDL_Delay(1);
	}
	return (SUCCESS);
}

void	LEMME::handleEvents(void)
{
	SDL_Event	event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				quit();
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						quit();
						break ;
					default:
						break ;
				}
				break ;
			default:
				break ;
		}
	}
}

void LEMME::stop(void)
{
	_running = false;
}

void	LEMME::quit(void)
{
	if (_init != true)
		return ;
	//if (_SDL2_image_init)
		//IMG_Quit();
	if (_renderer)
		SDL_DestroyRenderer(_renderer);
	if (_window)
	{
		SDL_DestroyWindow(_window);
		SDL_Quit();
	}
	_init = false;
	stop();
}
