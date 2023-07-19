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

void	waitAndExit(void)
{
	/*static int	atEachLoop = 0;

	++atEachLoop;
	std::cout << "Loop nbr " << atEachLoop << std::endl;
	if (atEachLoop > 9)
		LEMME::quit();*/
}

void	tmp(void)
{
	std::cout << "LEMME." << std::endl;
}

int	main(int argc, char **argv)
{
	int	res;

	muteFlagError(argc, argv);
	LEMME::login();
	std::cout << "Starting test..." << std::endl;



	LEMME::init("test", LM_WINDOWPOS_CENTERED, LM_WINDOWPOS_CENTERED,
				800, 600, 0);
	LEMME::lout << timestamp << "LEMME up and running" << std::endl;
	LEMME::doThis(waitAndExit);
	res = LEMME::start();
	std::cout << "LEMME::start() returned: " << res << std::endl;
	LEMME::doThis(tmp);
	LEMME::start();
	LEMME::lout << timestamp << "LEMME shut down" << std::endl;



	std::cout << "... End of test." << std::endl;
	LEMME::quit();
	LEMME::logout();
	return (0);
}
