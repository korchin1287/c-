/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:34:06 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 17:03:52 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

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

void    this_one()
{
	Zombie *z1 = new Zombie("Vasya", "faster");
	z1->announce();
	delete z1;
}

void    this_two()
{
	ZombieEvent z2;
	Zombie *dst;
	ZombieEvent z3[5];

	z2.setZombieType("slowly");
	dst = z2.newZombie("Oleg");
	dst->announce();
	delete dst;
	
	for (int i = 0; i < 5; i++)
	{
		usleep(1000000);
		z3[i].randomChump();
	}
}

int main()
{
	this_one();
	this_two();    

	return (0);
}
