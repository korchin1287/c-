/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:20:34 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 21:57:35 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name_g, Weapon &weapon_g)
{
    name = name_g;
    weapon = &weapon_g;
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
