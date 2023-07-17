/******************************************************************************/
/*                                                                            */
/*                                                                            */
/*   log.h                                                 by CanTale_Games   */
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

namespace Log
{
	static std::ofstream	logbook;

	void			init(void);
	std::string		getTimeAndDate(void);
	std::ofstream		&print(std::string color);
	void			quit(void);
}

# define lout		print(GREEN)
# define lerr		print(RED)
# define lwar		print(YELLOW)
# define timestamp	Log::getTimeAndDate()

#endif
