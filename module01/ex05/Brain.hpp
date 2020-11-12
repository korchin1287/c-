/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:33:20 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 20:41:29 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

std::string inttohex(unsigned long a);

class Brain
{
	private:
		unsigned int addr;
	public:
		Brain();
		std::string identify();
};

#endif