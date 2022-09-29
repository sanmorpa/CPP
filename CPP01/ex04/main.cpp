/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:51:01 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/23 16:15:42 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	error_msg(std::string str, int code)
{
	std::cout << str << std::endl;
	return (code);
}

int	check_errors(int argc, char **argv)
{
	if (argc != 4)
		return (error_msg("Error, replace only accepts a file name and two strings", 1));
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
		return (error_msg("Error, at least one of the arguments is empty", 1));
	return (0);
}

static int	replace(int argc, char **argv, std::string name, std::string replaced)
{
	std::ifstream	readfile;
	std::ofstream	writefile;
	std::string		line;
	size_t			startpos = 0;
	size_t 			endpos;

	readfile.open(argv[1]);
	if (!readfile.is_open())
		return (error_msg("Error, unnable to open read file", 1));
	writefile.open(name);
	if (!writefile.is_open())
	{
		readfile.close();
		return (error_msg("Error, unnable to open write file", 1));
	}
	while (std::getline(readfile, line))
	{
		do
		{
			endpos = line.find(replaced, startpos);
			if (endpos == std::string::npos)
				writefile << line.substr(startpos, endpos) << std::endl;
			else
			{
				writefile << line.substr(startpos, endpos - startpos);
				writefile << argv[3];
				startpos = endpos + replaced.length();
			}
		} while (endpos != std::string::npos);
		startpos = 0;
	}
	writefile.close();
	readfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (check_errors(argc, argv) == 1)
		return (1);
	std::string		replaced(argv[2]);
	std::string		name(argv[1]);
	name.append(".replace");
	if (replace(argc, argv, name, replaced) == 1)
		return (1);
	return (0);
}
