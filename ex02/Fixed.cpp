/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:17:13 by hfandres          #+#    #+#             */
/*   Updated: 2026/06/05 20:38:34 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <climits>

static int clampRaw(long raw) {
	if (raw > INT_MAX)
		return (INT_MAX);
	if (raw < INT_MIN)
		return (INT_MIN);
	return (int)raw;
}

Fixed::Fixed(void) : fpn(0 << fract_bit) {}
Fixed::Fixed(const int value) : fpn(clampRaw(static_cast<long>(value) << fract_bit)) {}
Fixed::Fixed(const float value) {
	fpn = clampRaw(static_cast<long>(roundf(value * 256.0f)));
}
Fixed::Fixed(const Fixed &other) {
	if (this != &other)
		*this = other;
}
Fixed::~Fixed(void) {}
Fixed	&Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->setRawBits(other.fpn);
	return (*this);
}
Fixed	Fixed::operator*(const Fixed &other) const {
	return (Fixed(toFloat() * other.toFloat()));
}
Fixed	Fixed::operator/(const Fixed &other) const {
	if (other.fpn == 0)
		return (Fixed());
	return (Fixed(toFloat() / other.toFloat()));
}
Fixed	Fixed::operator+(const Fixed &other) const {
	return (Fixed(toFloat() + other.toFloat()));
}
Fixed	Fixed::operator-(const Fixed &other) const {
	return (Fixed(toFloat() - other.toFloat()));
}
Fixed	&Fixed::operator++(void) {
	this->fpn++;
	return (*this);
}
Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}
Fixed	&Fixed::operator--(void) {
	this->fpn--;
	return (*this);
}
Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}
const	Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (b);
	return (a);
}
const	Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}
bool	Fixed::operator==(const Fixed& other) const {
	return (this->fpn == other.fpn);
}
bool	Fixed::operator!=(const Fixed& other) const {
	return (this->fpn != other.fpn);
}
bool	Fixed::operator>(const Fixed& other) const {
	return (this->fpn > other.fpn);
}
bool	Fixed::operator<(const Fixed& other) const {
	return (this->fpn < other.fpn);
}
bool	Fixed::operator>=(const Fixed& other) const {
	return (this->fpn >= other.fpn);
}
bool	Fixed::operator<=(const Fixed& other) const {
	return (this->fpn <= other.fpn);
}
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed) {
	float	value;

	value = fixed.toFloat();

	if (fixed.toInt() == value)
		os << fixed.toInt();
	else
		os << value;
	return (os);
}
int	Fixed::getRawBits(void) const {
	return (this->fpn);
}
void	Fixed::setRawBits(int const raw) {
	this->fpn = raw;
}

float	Fixed::toFloat(void) const {
	return(this->fpn / 256.0f);
}
int	Fixed::toInt(void) const {
	return (fpn >> fract_bit);
}
