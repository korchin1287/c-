/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:33:10 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 20:40:55 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

std::string inttohex(unsigned long a)
{
    unsigned long r;
    std::string tmp("");
    
    while (a > 0)
    {
        r = (a % 16);
        if (r > 9)
            r += (unsigned long)'A' - 10;
        else
            r += (unsigned long)'0';
        tmp = (char)r + tmp;
        a /= 16;
    } 
    return tmp;
}

int main()
{
    Human brain;
    
    std::cout << brain.identify() << std::endl; 
    std::cout << brain.getBrain().identify() << std::endl;
    return (0);
}