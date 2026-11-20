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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << M << "Default constructor called" << R << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : _name(name) {
	std::cout << M << "Parameterizes constructor called" << R << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ) : _name(other._name) {
	std::cout << M << "Copy constructor called" << R << std::endl;
	this->_name = other._name;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other ) {
	std::cout << M << "Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << M << "Destructor called" << R << std::endl;
}


