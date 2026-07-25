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

#include "WrongCat.hpp"
#include "Animal.hpp" // only used for colors!!!

WrongCat::WrongCat() {
	this->type = "WrongCat";
	// this->_memory = new int[100]; // >>> ONLY UNCOMMENT FOR LEAK CHECK <<<
	std::cout << RED << "WrongCat default constructor called" << R << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) :WrongAnimal(other) {
	this->type = other.type;
	std::cout << RED << "WrongCat copy constructor called" << R << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &other ) {
	std::cout << RED << "WrongCat assignment operator called" << R << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other); // good practice
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	// delete[] this->_memory; // >>> ONLY UNCOMMENT FOR LEAK CHECK <<<
	std::cout << RED << "WrongCat Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	WrongCat::makeSound() const {
	std::cout << RED << "I HAVE AN EXISTENTIAL CRISIS" << R << std::endl;
}
