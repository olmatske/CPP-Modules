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

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << M << "Cat default constructor called" << R << std::endl;
}

Cat::Cat( const Cat &other ) :Animal(other) {
	this->type = other.type;
	std::cout << M << "Cat copy constructor called" << R << std::endl;
}

Cat &Cat::operator=( const Cat &other ) {
	std::cout << M << "Cat assignment operator called" << R << std::endl;
	if (this != &other) {
		Animal::operator=(other); // good practice
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << M << "Cat Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	Cat::makeSound() const {
	std::cout << M << "MEOOOOW MARWWWW HISSSSSS" << R << std::endl;
}

