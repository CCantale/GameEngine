/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   test.cpp                                              by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include "test.hpp"

void	muteFlagError(int argc, char **argv)
{
	(void)argc;
	(void)argv;
}

int	main(int argc, char **argv)
{
	muteFlagError(argc, argv);
	Log::init();
	std::cout << "Starting test..." << std::endl;




	GameEngine::init("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
				800, 600, 0);
	Log::lout << timestamp << "SDL up and running" << std::endl;
	sleep(2);
	GameEngine::quit();
	Log::lout << timestamp << "SDL shut down" << std::endl;





	std::cout << "... End of test." << std::endl;
	Log::quit();
	return (0);
}
