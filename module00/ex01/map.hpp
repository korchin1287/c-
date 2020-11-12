/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:00:12 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/10 18:38:10 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <iostream>
# include <iomanip>
# include <string>

std::string		strtrim(std::string command);

class Contact
{
	private:
		bool		init;
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		Contact();
		int		add_command(Contact *map, int count);
		int		search_command(Contact *map);
		void	ft_search_index(Contact *map, int id);
};

#endif