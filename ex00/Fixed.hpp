/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandres <hfandres@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 12:23:40 by hfandres          #+#    #+#             */
/*   Updated: 2026/04/29 10:53:35 by hfandres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private :
		int					fpn;
		static const int	fractional_bits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);

		Fixed	&operator=(const Fixed& other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif //FIXED_HPP
