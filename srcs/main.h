/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   main.h                                                by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef MAIN_H
# define MAIN_H

# include <SDL2/SDL.h>

# define FATAL_ERROR	1
# define SUCCESS	0

namespace LEMME
{
	bool		_running;
	SDL_Window	*_window = NULL;
	SDL_Renderer	*_renderer = NULL;

	int	init(char const *title, int _window_posX, int _window_posY,
			int width, int height, int fullscreen);
	void	quit(void);
};

#endif

