/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:32:38 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 20:32:49 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	addr = (unsigned long)this;
}

std::string Brain::identify()
{
	std::string res = "0x";
	
	res += inttohex(addr);
	return (res);
}