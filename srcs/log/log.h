/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   log.h                                                 by CanTale_Games   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   First call login(), then use LEMME::lout, LEMME::lwar and LEMME::lerr    */
/*   instead of std::cout, std::cwar and std::cerr.                           */
/*   The macro "timestamp" can be inserted in the stream to have a nice       */
/*   timestamp in the entry.                                                  */
/*   Remember to call logout() at the end of your program.                    */
/*   LEMME will create a new directory named "Logbook" with a log file        */
/*   inside. cat it to see the log in colors. The file is overwritten         */
/*   everytime the program runs.                                              */
/*                                                                            */
/*                                                                            */
/*   Example:                                                                 */
/*                                                                            */
/*   LEMME::login()                                                           */
/*                                                                            */
/*   ...                                                                      */
/*                                                                            */
/*   if (LEMME::init("test", LM_WINDOWPOS_CENTERED, LM_WINDOWPOS_CENTERED,    */
/*                    	800, 600, LM_NO_FULLSCREEN) == 0)                     */
/*   {                                                                        */
/*       LEMME::lout << timestamp << "Everything up and running!\n";          */
/*   }                                                                        */
/*   else                                                                     */
/*   {                                                                        */
/*       LEMME::lerr << timestamp << "Fuck. Why...\n";                        */
/*   }                                                                        */
/*                                                                            */
/*   ...                                                                      */
/*                                                                            */
/*   LEMME::logout();                                                         */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   If you use Vim, you can add something like this to your .vimrc to        */
/*   display the log file by just typing "log" while in normal mode:          */
/*                                                                            */
/*   nmap log :!cat Logbook/log                                               */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef LOG_H
# define LOG_H

# define LOGPATH	"Logbook/log"
# define FOLDERPATH	"./Logbook"

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"

# include <fstream>
# include <sys/stat.h>
# include <ctime>
# include <cstdio>
# include <sstream>
# include <sys/time.h>
# include <string>

namespace LEMME
{
	static std::ofstream	logbook;

	void			login(void);
	std::string		getTimeAndDate(void);
	std::ofstream		&print(std::string color);
	void			logout(void);
}

# define lout		print(GREEN)
# define lerr		print(RED)
# define lwar		print(YELLOW)
# define timestamp	LEMME::getTimeAndDate()

#endif
