/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:22:18 by hfandres          #+#    #+#             */
/*   Updated: 2026/06/08 20:21:04 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << "Basic test" << std::endl;
		Fixed		a(0);
		Fixed const	b(Fixed(5.05f) * Fixed(2));
		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
	}
	{
		std::cout << "min max test" << std::endl;
		Fixed a(100);
		Fixed b(101);
		std::cout << "max " << a << " vs " << b << " = "<< Fixed::max(a, b) << std::endl;
		std::cout << "min " << a << " vs " << b << " = "<< Fixed::min(a, b) << std::endl;
	}
	{

		Fixed a(0.0f);
		Fixed b(1);
		std::cout << "comparison operators:" << std::endl;
		std::cout << a << " > " << b << " : " << (a > b) << std::endl;
		std::cout << a << " < " << b << " : " << (a < b) << std::endl;
		std::cout << a << " >= " << b << " : " << (a >= b) << std::endl;
		std::cout << a << " <= " << b << " : " << (a <= b) << std::endl;
		std::cout << a << " == " << a << " : " << (a == a) << std::endl;
		std::cout << a << " != " << b << " : " << (a != b) << std::endl;
	}
	{
		std::cout << "arithmetic operators:" << std::endl;

		Fixed		a(10.5f);
		Fixed const	b(Fixed(5.05f) * Fixed(2));
		std::cout << a << " + " << b << " = "<< (a + b) << std::endl;
		std::cout << a << " - " << b << " = "<< (a - b) << std::endl;
		std::cout << a << " * " << b << " = "<< (a * b) << std::endl;
		std::cout << a << " / " << b << " = "<< a / b << std::endl;
	}
	return (0);
}
