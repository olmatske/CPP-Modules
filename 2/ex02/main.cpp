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

#include "Fixed.hpp"

int main( void ) {
	Fixed a = 5;
	Fixed const b( Fixed( 2.0412f ) * Fixed( 7 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}


// int main(void) {
// 	Fixed a;

// 	// Test 1: Multiplication
// 	Fixed const b1( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << "5.05 * 2 = " << b1 << std::endl;  // ~10.1016

// 	// Test 2: Different values
// 	Fixed const b2( Fixed( 3.14f ) * Fixed( 3 ) );
// 	std::cout << "3.14 * 3 = " << b2 << std::endl;  // ~9.42188

// 	// Test 3: Integer multiplication
// 	Fixed const b3( Fixed( 10 ) * Fixed( 5 ) );
// 	std::cout << "10 * 5 = " << b3 << std::endl;    // 50

// 	// Test 4: Division
// 	Fixed const b4( Fixed( 10.5f ) / Fixed( 2 ) );
// 	std::cout << "10.5 / 2 = " << b4 << std::endl;  // ~5.25

// 	// Test 5: Addition
// 	Fixed const b5( Fixed( 1.5f ) + Fixed( 2.25f ) );
// 	std::cout << "1.5 + 2.25 = " << b5 << std::endl; // ~3.75

// 	return 0;
// }
