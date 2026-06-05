/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:17:13 by hfandres          #+#    #+#             */
/*   Updated: 2026/06/05 20:44:13 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <climits>

static int clampRaw(long raw)
{
	if (raw > INT_MAX)
		return (INT_MAX);
	if (raw < INT_MIN)
		return (INT_MIN);
	return (int)raw;
}

Fixed::Fixed(void) : fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	fpn = clampRaw(static_cast<long>(value) << fract_bit);
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	long raw = static_cast<long>(roundf(value * 256.0f));
	fpn = clampRaw(raw);
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.fpn);
	return (*this);
}
std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	float value;

	value = fixed.toFloat();

	if (fixed.toInt() == value)
		os << fixed.toInt();
	else
		os << value;
	return (os);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}
void Fixed::setRawBits(int const raw)
{
	this->fpn = raw;
}
float Fixed::toFloat(void) const
{
	return (this->fpn / 256.0f);
}
int Fixed::toInt(void) const
{
	return (fpn >> fract_bit);
}
