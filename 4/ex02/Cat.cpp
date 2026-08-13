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
	_brain = new Brain();
	std::cout << C << "Cat default constructor called" << R << std::endl;
}

Cat::Cat( const Cat &other ) :Animal(other) {
	this->type = other.type;
	this->_brain = new Brain();
	
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, other._brain->getIdea(i));

	std::cout << C << "Cat copy constructor called" << R << std::endl;
}

Cat &Cat::operator=( const Cat &other ) {
	std::cout << C << "Cat assignment operator called" << R << std::endl;
	if (this != &other) {
		Animal::operator=(other);				// good practice

		delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(other._brain);		// exact same thing as the for loop but cleaner
	}
	return (*this);
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << C << "Cat Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	Cat::makeSound() const {
	std::cout << M << "MEOOOOW MARWWWW HISSSSSS" << R << std::endl;
}

Brain *Cat::getBrain() const {
	return (this->_brain);
}
