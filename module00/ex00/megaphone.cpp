/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nofloren <nofloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:43:25 by nofloren          #+#    #+#             */
/*   Updated: 2020/11/09 21:39:39 by nofloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int			i;
	std::string	str; 

	if (argc == 1)
	{
		std::cout << "Error: arguments not found\n";
		return (1);
	}
	i = 1;
	while (argv[i])
		str += argv[i++];
	str = str + "\n";
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	std::cout << str;
	return (0);
}
