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
	std::cout << "Starting test..." << std::endl;
	std::cout << "... End of test." << std::endl;
	return (0);
}
