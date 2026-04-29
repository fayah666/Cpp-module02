/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:45:33 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/29 10:48:23 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpn(0) {
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}
Fixed	&Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.fpn);
	return (*this);
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fpn = raw;
}
