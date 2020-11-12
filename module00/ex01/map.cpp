/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:16:36 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/10 18:37:42 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.hpp"

Contact::Contact()
{
	init = false;
}

int		Contact::add_command(Contact *map, int count)
{
	if (map->init == false)
	{
		std::cout << "first name: ";
		std::cin >> map->first_name;
		std::cout << "last name: ";
		std::cin >> map->last_name;
		std::cout << "nickname: ";
		std::cin >> map->nickname;
		std::cout << "login: ";
		std::cin >> map->login;
		std::cout << "postal addres: ";
		std::cin >> map->postal_address;
		std::cout << "email address: ";
		std::cin >> map->email_address;
		std::cout << "phone number: ";
		std::cin >> map->phone_number;
		std::cout << "birthday date: ";
		std::cin >> map->birthday_date;
		std::cout << "favorite meal: ";
		std::cin >> map->favorite_meal;
		std::cout << "darkest secret: ";
		std::cin >> map->darkest_secret;
		map->index = count + 1;
		map->init = true;
		return (1);
	}	
	return (0);
}

void	Contact::ft_search_index(Contact *map, int id)
{
	for (int i = 0; i < 8; i++)
	{
		if (map[i].init && map[i].index == id)
		{
			std::cout << "first name: " << map[i].first_name << '\n';
			std::cout << "last name: " << map[i].last_name << '\n';
			std::cout << "nickname: " << map[i].nickname << '\n';
			std::cout << "login: " << map[i].login << '\n';
			std::cout << "postal addres: " << map[i].postal_address << '\n';
			std::cout << "email address: " << map[i].email_address << '\n';
			std::cout << "phone number: " << map[i].phone_number << '\n';
			std::cout << "birthday date: " << map[i].birthday_date << '\n';
			std::cout << "favorite meal: " << map[i].favorite_meal << '\n';
			std::cout << "darkest secret: " << map[i].darkest_secret << '\n';
		}
	}
}

int		Contact::search_command(Contact *map)
{
	int flag;
	int yes;
	
	flag = 0;
	yes = 0;
	for (int i = 0; i < 8; i++)
	{
		if (map[i].init)
		{
			if (flag == 0)
			{
				std::cout << std::setw(10) << "index" << '|' << std::setw(10)
				<< "first name" << '|' << std::setw(10) << "last name" <<
				'|' << std::setw(10) << "nickname" << '\n';
				flag = 1;
			}
			std::cout << std::setw(10) << map[i].index;
			if (map[i].first_name.length() > 10) 
				std::cout << '|' << std::setw(9) << map[i].first_name.substr(0, 9) << '.';
			else
				std::cout << '|' << std::setw(10) << map[i].first_name;
			if (map[i].last_name.length() > 10)
				std::cout << '|' << std::setw(9) << map[i].last_name.substr(0, 9) << '.';
			else
				std::cout << '|' << std::setw(10) << map[i].last_name;
			if (map[i].nickname.length() > 10)
				std::cout << '|' << std::setw(9) << map[i].nickname.substr(0, 9) << '.' <<'\n';
			else
				std::cout << '|' << std::setw(10) << map[i].nickname << '\n';
			yes = 1;
		}
	}
	if (yes == 0)
	{
		std::cout << "Phonebook is void.\n";
		return (1);
	}
	return (0);
}

std::string		strtrim(std::string command)
{
    size_t startPos = command.find_first_not_of(" ");
    if (startPos == std::string::npos)
        return ("");
    size_t endPos = command.find_last_not_of(" ");
    return (command.substr(startPos, endPos - startPos + 1));
}

int main()
{
	int		count;
	Contact map[8];
	std::string command;
	std::string	index;
	int		id;
	
	count = 0;
	std::cout << "Hello this is awesome phonebook\n";
	while (1)
	{
		std::cout << "\nYou should accept the ADD command, the SEARCH command or the EXIT command:\n";
		std::cin >> command;
		command = strtrim(command);
		if (command == "ADD")
		{
			if (count < 8 && (map->add_command(&map[count], count)) == 1)
				count++;
			else
				std::cout << "You phonebook is full, thank you\n";
		}
		else if (command == "SEARCH")
		{
			if (!(map->search_command(map)))
			{
				std::cout << "Enter some index: \n";
				std::cin >> index;
				id = atoi(index.c_str());
				if (id && id > 0 && id < 9)
					map->ft_search_index(map, id);
				else
					std::cout << "Index not found. \n";
			}
		}
		else if (command == "EXIT")
			break;
	}  
	return (0);
}