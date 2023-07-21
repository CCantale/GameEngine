/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   keymap.h                                              by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef KEYMAP_H
# define KEYMAP_H

# include <vector>
# include <utility>

using action = std::pair<SDL_Keycode, std::function<void()> >;
using keymap = std::vector<action>;

namespace LEMME
{
	keymap	actions;
};

#endif
