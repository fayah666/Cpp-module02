/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:22:18 by hfandres          #+#    #+#             */
/*   Updated: 2026/06/08 11:50:54 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max " << a << "" << b << " = "<< Fixed::max(a, b) << std::endl;
	std::cout << "min " << a << "" << b << " = "<< Fixed::min(a, b) << std::endl;
	std::cout << "comparison operators:" << std::endl;
	std::cout << a << " > " << b << " : " << (a > b) << std::endl;
	std::cout << a << " < " << b << " : " << (a < b) << std::endl;
	std::cout << a << " >= " << b << " : " << (a >= b) << std::endl;
	std::cout << a << " <= " << b << " : " << (a <= b) << std::endl;
	std::cout << a << " == " << a << " : " << (a == a) << std::endl;
	std::cout << a << " != " << b << " : " << (a != b) << std::endl;
	std::cout << "arithmetic operators:" << std::endl;
	std::cout << a << " + " << b << " = "<< (a + b) << std::endl;
	std::cout << a << " - " << b << " = "<< (a - b) << std::endl;
	std::cout << a << " * " << b << " = "<< (a * b) << std::endl;
	std::cout << a << " / " << b << " = "<< (a / b) << std::endl;
	return (0);
}
