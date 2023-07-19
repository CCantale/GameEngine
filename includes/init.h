/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   init.h                                                by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                         int    init()                                      */
/*                                                                            */
/*   LEMME creates the game window as soon as it initializes. Therefore, the  */
/*   init() function takes the required info as arguments.                    */
/*   Returns 0 on success, otherwise it returns -1 and prints an error on     */
/*   standard output.                                                         */
/*                                                                            */
/*                                                                            */
/*                         int    start()                                     */
/*                                                                            */
/*   Starts the game loop. Returns 0 if the loop ends naturally.              */
/*                                                                            */
/*                                                                            */
/*                         void    doThis()                                   */
/*                                                                            */
/*   In the game loop, LEMME calls a user-defined function.                   */
/*   Use doThis() to set such function.                                       */
/*                                                                            */
/*                                                                            */
/*                          void    quit()                                    */
/*                                                                            */
/*   Ends the game loop.                                                      */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef INIT_H
# define INIT_H

# include <functional>

# define LM_WINDOWPOS_CENTERED	SDL_WINDOWPOS_CENTERED

namespace LEMME
{
	int	init(char const *title, int _window_posX, int _window_posY,
			int width, int height, int fullscreen);
	int	start(void);
	void	doThis(std::function<void()> newFunction);
	void	quit(void);
	void	stop(void);
};

#endif
