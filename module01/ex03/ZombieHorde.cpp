/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:38:12 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 17:41:13 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    count = n;
    horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        horde[i].change_name(random_name());
        usleep(1000000);
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] horde;
    std::cout << "ZombieHorde dead!\n";   
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < count; i++)
        horde[i].announce();
}
