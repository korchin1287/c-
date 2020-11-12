/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:38:12 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 22:04:44 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type_g)
{
    type = type_g;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, type);
    
    return (zombie);
}

void  ZombieEvent::randomChump()
{
    Zombie *zombie = new Zombie(random_name(), type);
    
    zombie->announce();
    delete zombie;
}