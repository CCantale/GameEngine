/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   input.cpp                                             by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                 keymap.h   */
/*                                                                            */
/*   LEMME::actions is a keymap, i.e. a vector of pairs. Each pair has a      */
/*   char as first element and an std::function<void()> as second element.    */
/*   It is used to link key inputs to uder-defined functions.                 */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "input.h"
#include "keymap.h"


void	LEMME::mapKey(char key, std::function<void()> userDefinedFunction)
{
	action	newAction;

	for (action a : actions)
	{
		if (a.first == key)
		{
			a.second = userDefinedFunction;
			return ;
		}
	}
	newAction.first = key;
	newAction.second = userDefinedFunction;
	actions.push_back(newAction);
}

static keymap::iterator	is_mappedKey(char key)
{
	for (keymap::iterator it = LEMME::actions.begin();
		it != LEMME::actions.end(); ++it)
	{
		if ((*it).first == key)
			return (it);
	}
	return (LEMME::actions.end());
}

void	LEMME::handleInput(void)
{
	SDL_Event	event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				quit();
				break ;
			case SDL_KEYDOWN:
			{
				keymap::iterator	it;

				it = is_mappedKey(event.key.keysym.sym);
				if (it != actions.end())
					(*it).second();
			}
				break ;
			default:
				break ;
		}
	}
}
