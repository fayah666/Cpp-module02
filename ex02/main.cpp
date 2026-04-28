/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:22:18 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/28 21:14:08 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( 10 );
	Fixed c( 11 );

	if (b == c)
		std::cout << "b and c are equal" << std::endl;
	else
		std::cout << "b and c are not equal" << std::endl;
	if (b != c)
		std::cout << "b and c are not equal" << std::endl;
	else
		std::cout << "b and c are equal" << std::endl;
	if (b > c)
		std::cout << "b is greater than c" << std::endl;
	else
		std::cout << "b is not greater than c" << std::endl;
	if (b < c)
		std::cout << "b is less than c" << std::endl;
	else
		std::cout << "b is not less than c" << std::endl;
	if (b >= c)
		std::cout << "b is greater than or equal to c" << std::endl;
	else
		std::cout << "b is not greater than or equal to c" << std::endl;
	if (b <= c)
		std::cout << "b is less than or equal to c" << std::endl;
	else
		std::cout << "b is not less than or equal to c" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
}
