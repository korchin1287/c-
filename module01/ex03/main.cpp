/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:34:06 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 17:24:22 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string random_name()
{
    std::string names[10];

    names[0] = "Bob";
    names[1] = "Jon";
    names[2] = "Afonasiy";
    names[3] = "Smith";
    names[4] = "Bil";
    names[5] = "Donald";
    names[6] = "Sub-ziro";
    names[7] = "Shaukan";
    names[8] = "Andrey";
    names[9] = "Hatasha";

    srand(time(NULL));
    return (names[rand() % 10]);
}

int main()
{
	ZombieHorde *zombieHorde = new ZombieHorde(7);
	
    zombieHorde->announce();
	delete zombieHorde;
	return (0);
}
