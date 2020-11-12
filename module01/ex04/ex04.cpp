/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:05:29 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/12 18:31:45 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string &link = str;
	std::string *ptr = &str;

	std::cout << "Link: " << link << '\n';
	std::cout << "Address: " << *ptr << '\n';
	return (0);
}