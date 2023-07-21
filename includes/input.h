/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   input.h                                               by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef INPUT_H
# define INPUT_H

# include <functional>

namespace LEMME
{
	void			mapKey(char key, std::function<void()> userDefinedFunction);
};

#endif
