/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:11:56 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/28 21:25:25 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int	fpn;
		static const int fract_bit = 8;
	public :
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed &other);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		// friend const Fixed operator+(const Fixed& fixed);
		// friend const Fixed operator-(const Fixed& fixed);
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		float toFloat(void) const;
		int toInt( void ) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

#endif //FIXED_HPP
