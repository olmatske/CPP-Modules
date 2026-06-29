/* ************************************************************************** */
/*              ／＞　 フ                        ˚★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*             | 　_　_|                             ˖ ࣪　⊹ ࣪ ★⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ ⋆.˚  ⊹ ࣪*/
/*            ／` ミ＿xノ                                    ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*           /　　　　 |                                    ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖　*/
/*          /　 ヽ　　 ﾉ           へ   ╱|、 ♡  ╱|、        ☆⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ .˚  ⊹ */
/*          │　　|　|　|       ૮ - ՛ ) (˚ˎ 。7  (` -  7           ˚★ ₊ ⊹　  ࣪˖ ࣪ ₊ */
/*      ／￣ 　　 |　|　|       /  ⁻៸|  |、 ˜(    |、⁻(           ★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆ */
/*      ( ( ヽ＿_ヽ_)__)   乀 (ˍ, ل ل  じしˍ,)ノ じしˍ,)ノ         　⊹ ࣪ ★ ⋆.˚    */
/*      ＼__二)                                               ࣪˖ ࣪ ₊  ★⊹ ࣪ ┆  ★ ⋆.*/
/* ********************************************************** github/olmatske */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

const std::string M = "\033[1;35m";
const std::string G = "\033[1;32m";
const std::string C = "\033[1;36m";
const std::string RED = "\033[1;31m";
const std::string P = "\033[1;38;5;216m";
const std::string R = "\033[0m";

class Fixed {
	private:
		int					_raw; // fixed point number value
		static const int	_bits = 8; // storage of the number of fractional bits

	public:
		Fixed();											// Default Constructor: sets up default object and ensures object
		 													// is valid even when no argument gets passed

		Fixed( int const value );
		Fixed( float const value );

		Fixed( const Fixed &other );						// Copy Constructor: Creates new objects independent of the source
															// and prevents a shallow copy

		Fixed& operator=( const Fixed &other );				// Assignment Operator: Takes already existing object and safely
															// deletes old data replacing it with a deep copy of the new data

		~Fixed();											// Destructor: Cleans up everything including dynamic memory,
															// closes files etc, preventing memory leaks

		int		getRawBits( ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator>(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;

		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		Fixed	&operator++();		// Pre increment
		Fixed	operator++(int);	// Post increment (dummy int)
		Fixed	&operator--();		// Post decrement
		Fixed	operator--(int);	// Post decrement (dummy int)

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
