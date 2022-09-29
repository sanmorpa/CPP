/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoreno <samoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:17:01 by samoreno          #+#    #+#             */
/*   Updated: 2022/09/22 10:16:49 by samoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
	private:
		void 	debug(void);
		void 	info(void);
		void 	warning(void);
		void 	error(void);
	public:
		void complain(std::string level);
};

#endif
