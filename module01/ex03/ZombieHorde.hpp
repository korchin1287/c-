/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:34:52 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 18:34:10 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIHORDE_HPP
# define ZOMBIHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
    private:
        Zombie  *horde;
        int     count;
        
    public:
        ZombieHorde(int n);
        void announce();
        ~ZombieHorde();
};

#endif