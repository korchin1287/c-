/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:53:50 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 18:51:35 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string.h>

class Pony
{
	private:
		std::string	name;
		int			age;
			
	public:
		Pony(std::string name_g, int age_g);
		std::string get_name();
		void		pony_run();
		int			get_age();
		~Pony();
};

#endif