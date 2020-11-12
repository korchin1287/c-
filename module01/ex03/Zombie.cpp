/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:47:51 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 18:34:19 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " dead!!!\n";
}

Zombie::Zombie(std::string name_g, std::string type_g)
{
	name = name_g;
	type = type_g;
}

Zombie::Zombie()
{
	name = "zorrg";
	type = "horde";
}

void Zombie::change_name(std::string name_g)
{
	name = name_g;
}


void	Zombie::announce()
{
	std::cout << name << " " << type << " Braiiiiiiiinnnsssss....\n";
}