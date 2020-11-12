/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:37:00 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 17:05:27 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>
# include <unistd.h>

class Zombie
{
    private:
        std::string type;
        std::string name;
        
    public:
        Zombie(std::string name_g, std::string type_g);
        ~Zombie();
        void announce();
};

#endif