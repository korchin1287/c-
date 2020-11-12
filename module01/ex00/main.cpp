/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:49:58 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 18:52:07 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *pony = new Pony("Doraty", 5);
    
    std::cout << "Pony is name - " << pony->get_name() << '\n';
    std::cout << "Pony is age - " << pony->get_age() << '\n';
    pony->pony_run();
    delete pony;
}

void ponyOnTheStack()
{
    Pony pony = Pony("Jane", 4);
    
    std::cout << "Pony is name - " << pony.get_name() << '\n';
    std::cout << "Pony is age - " << pony.get_age() << '\n';
    pony.pony_run();
}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}