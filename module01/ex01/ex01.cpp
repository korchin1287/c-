/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:15:59 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/11 19:29:00 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
    std::string *panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}

int main()
{
    memoryLeak();
    return (0);
}