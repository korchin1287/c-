/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:34:52 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 22:01:07 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <ranlib.h>

std::string random_name();

class ZombieEvent
{
    private:
        std::string type;
        
    public:
        void setZombieType(std::string type_g);
        Zombie *newZombie(std::string name);
        void    randomChump();
};

#endif