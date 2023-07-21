/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   input.h                                               by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   Use mapKey to link a custom function to a specific key.                  */
/*   Enter the relative char as first element. Macros can be used for non     */
/*   printable keys.                                                          */
/*                                                                            */
/*   MACROS:                                                                  */
/*              LMK_ESC             escape                                    */
/*              LMK_RETURN          return                                    */
/*              LMK_SPACE           spacebar                                  */
/*              LMK_UP              up arrow                                  */
/*              LMK_DOWN            down arrow                                */
/*              LMK_LEFT            left arrow                                */
/*              LMK_RIGHT           right arrow                               */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef INPUT_H
# define INPUT_H

# include <functional>
# include "keyflags.h"

namespace LEMME
{
	void	mapKey(LM_Keycode key, std::function<void()> userDefinedFunction);
};

#endif
