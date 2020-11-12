/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:33:17 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 20:40:04 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	brain = new Brain();
}

Brain       Human::getBrain()
{
    return (*brain);
}

std::string Human::identify()
{	
	return (brain->identify());
}