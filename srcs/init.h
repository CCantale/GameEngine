/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   init.h                                                by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef INIT_H
# define INIT_H

# include <SDL2/SDL.h>
# include <iostream>
# include <functional>
# include "deltatime/delta.h"

# define FATAL_ERROR	-1
# define SUCCESS	0

namespace LEMME
{
	bool			_init;
	bool			_running;
	SDL_Window		*_window = NULL;
	SDL_Renderer		*_renderer = NULL;
	std::function<void()>	userDefinedFunction = NULL;

	int	init(char const *title, int _window_posX, int _window_posY,
			int width, int height, int fullscreen);
	int	start(void);
	void	handleInput(void);
	void	stop(void);
	void	quit(void);
	void	update(std::function<void()> newFunction);
};

#endif




