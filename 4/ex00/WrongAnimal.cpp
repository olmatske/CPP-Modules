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

#include "WrongAnimal.hpp"
#include "Animal.hpp" // only used for colors!!!

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << RED << "WrongAnimal default constructor called" << R << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {
	std::cout << RED << "WrongAnimal parametarized constructor called" << R << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ) : type(other.type) {
	std::cout << RED << "WrongAnimal copy constructor called" << R << std::endl;
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other ) {
	std::cout << RED << "WrongAnimal assignment operator called" << R << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	WrongAnimal::makeSound() const {
	std::cout << RED << "*WrongAnimal sounds...*" << R << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}