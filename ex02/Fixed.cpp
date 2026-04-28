/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:17:13 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/28 21:25:25 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	fpn = value << fract_bit;
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	fpn = roundf(value * 256.0f);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.fpn);
	return (*this);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->fpn == other.fpn);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->fpn != other.fpn);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->fpn > other.fpn);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->fpn < other.fpn);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->fpn >= other.fpn);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->fpn <= other.fpn);
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	float	value;

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

float	Fixed::toFloat(void) const
{
	return(this->fpn / 256.0f);
}

int	Fixed::toInt(void) const
{
	return (fpn >> fract_bit);
}

Fixed &Fixed::operator++(void)
{
	this->fpn++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->fpn--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
