/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:05:20 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 21:49:07 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type_g)
{
	type = type_g;
}

void Weapon::setType(std::string type_g)
{
	type = type_g;
}

std::string Weapon::getType()
{
	std::string &dst = type; 
	return (dst);
}