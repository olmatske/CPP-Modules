/* ************************************************************************** */
/*              ／＞　 フ                        ˚★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*             | 　_　_|                             ˖ ࣪　⊹ ࣪ ★⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ ⋆.˚  ⊹ ࣪*/
/*            ／` ミ＿xノ                                   ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*           /　　　　 |                                   ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖　*/
/*          /　 ヽ　　 ﾉ           へ   ╱|、 ♡   ╱|、       ☆⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ .˚  ⊹ */
/*          │　　|　|　|       ૮ - ՛ ) (˚ˎ 。7  (` -  7          ˚★ ₊ ⊹　  ࣪˖ ࣪ ₊ */
/*      ／￣ 　　 |　|　|       /  ⁻៸|  |、 ˜(    |、⁻(           ★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆ */
/*      ( ( ヽ＿_ヽ_)__)   乀 (ˍ, ل ل  じしˍ,)ノ じしˍ,)ノ         　⊹ ࣪ ★ ⋆.˚    */
/*      ＼__二)                                               ࣪˖ ࣪ ₊  ★⊹ ࣪ ┆  ★ ⋆.*/
/* ********************************************************** github/olmatske */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << M << "Default constructor called" << R << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : _name(name) {
	std::cout << M << "Parameterizes constructor called" << R << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) : _name(other._name) {
	std::cout << M << "Copy constructor called" << R << std::endl;
	this->_name = other._name;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other ) {
	std::cout << M << "Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << M << "Destructor called" << R << std::endl;
}


