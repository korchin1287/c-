/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:37:00 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 17:40:26 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>
# include <unistd.h>
# include <ranlib.h>

std::string random_name();

class Zombie
{
    private:
        std::string type;
        std::string name;
        
    public:
        Zombie(std::string name_g, std::string type_g);
        void change_name(std::string name_g);
        Zombie();
        ~Zombie();
        void announce();
};

#endif