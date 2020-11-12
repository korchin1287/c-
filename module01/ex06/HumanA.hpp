/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:13:46 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 21:57:26 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanA();
		HumanA(std::string name_g, Weapon &weapon_g);
		void attack();
};

#endif