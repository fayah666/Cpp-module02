/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:11:56 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/29 10:53:28 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private :
		int					fpn;
		static const int	fract_bit = 8;
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(const int value);
		Fixed(const Fixed& other);
		Fixed(const float value);

		Fixed&					operator=(const Fixed &other);
		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt( void ) const;
		Fixed					operator*(const Fixed &other) const;
		Fixed					operator/(const Fixed &other) const;
		Fixed					operator+(const Fixed &other) const;
		Fixed					operator-(const Fixed &other) const;
		Fixed&					operator++(void);
		Fixed					operator++(int);
		Fixed&					operator--(void);
		Fixed					operator--(int);
		bool					operator==(const Fixed& other) const;
		bool					operator!=(const Fixed& other) const;
		bool					operator>(const Fixed& other) const;
		bool					operator<(const Fixed& other) const;
		bool					operator>=(const Fixed& other) const;
		bool					operator<=(const Fixed& other) const;
		static	const Fixed	&max(const Fixed &a, const Fixed &b);
		friend std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
};

#endif //FIXED_HPP
