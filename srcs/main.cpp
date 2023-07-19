/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   main.cpp                                              by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "main.h"
											#include <iostream>

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
		quit();
		return (FATAL_ERROR);
	}
	SDL_RenderClear(_renderer);
	SDL_RenderPresent(_renderer);
	_running = true;
	return (SUCCESS);
}

void	LEMME::quit(void)
{
	//if (_SDL2_image_init)
		//IMG_Quit();
	if (_renderer)
		SDL_DestroyRenderer(_renderer);
	if (_window)
	{
		SDL_DestroyWindow(_window);
		SDL_Quit();
	}
}
