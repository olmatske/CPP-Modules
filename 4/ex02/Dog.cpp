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

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	_brain = new Brain();
	std::cout << C << "Dog default constructor called" << R << std::endl;
}

Dog::Dog( const Dog &other ) :Animal(other) {
	this->type = other.type;
	this->_brain = new Brain();
	
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, other._brain->getIdea(i));

	std::cout << C << "Dog copy constructor called" << R << std::endl;
}

Dog &Dog::operator=( const Dog &other ) {
	std::cout << C << "Dog assignment operator called" << R << std::endl;
	if (this != &other) {
		Animal::operator=(other);				// good practice

		delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(other._brain);		// exact same thing as the for loop but cleaner
	}
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << C << "Dog Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	Dog::makeSound() const {
	std::cout << C << "BARK BARK AWOOO GRRRROUF" << R << std::endl;
}

Brain *Dog::getBrain() const {
	return (this->_brain);
}

