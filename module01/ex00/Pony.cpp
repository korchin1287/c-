/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:15:13 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 18:51:22 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name_g, int age_g)
{
	name = name_g;
	age = age_g;
}

Pony::~Pony()
{
	std::cout << ("Pony is dead\n");
}

std::string Pony::get_name()
{
	return (name);
}

void		 Pony::pony_run()
{
	std::cout << "Pony is run, puny is run!!!\n";
}

int			Pony::get_age()
{
	return (age);
}