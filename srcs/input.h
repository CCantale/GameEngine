/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   input.h                                               by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef INPUT_H
# define INPUT_H

# include <SDL2/SDL.h>
# include <functional>

namespace LEMME
{
	void	mapKey(SDL_Keycode key, std::function<void()> userDefinedFunction);
	void	handleInput(void);
	void	quit();
};

#endif
