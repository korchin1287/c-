/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:47:51 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 21:46:15 by nofloren         ###   ########.fr       */
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

void	Zombie::announce()
{
	std::cout << name << " " << type << " Braiiiiiiiinnnsssss....\n";
}