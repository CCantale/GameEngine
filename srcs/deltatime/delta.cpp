/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   delta.cpp                                             by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "delta.h"

namespace LEMME
{
	Uint32	_lastTime = 0;
	Uint32	_deltaTime;
};

void	LEMME::calculateDelta(void)
{
	_deltaTime = SDL_GetTicks() - _lastTime;
	_lastTime = SDL_GetTicks();
}

Uint32	LEMME::getDelta(void)
{
	return (_deltaTime);
}


