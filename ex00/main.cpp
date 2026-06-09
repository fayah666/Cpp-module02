/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:59:14 by hfandres          #+#    #+#             */
/*   Updated: 2026/06/09 09:59:39 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed b(a);
		Fixed c;

		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{
		std::cout << "\n+++++++++++++++++++++++++++++++++++++++++" << std::endl;
		std::cout << "+++++++++++++++++++++++++++++++++++++++++\n" << std::endl;
		Fixed c;
		std::cout << "c = " << c.getRawBits() << std::endl;
		c.setRawBits(42);
		std::cout << "c = " << c.getRawBits() << std::endl;
	}
	return (0);
}
