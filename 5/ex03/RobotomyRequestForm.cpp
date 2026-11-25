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
#include <random>

RobotomyRequestForm::RobotomyRequestForm( const std::string &target )
	: AForm("RobotomyRequestForm", 72, 45),
	  _target(target)
	{
	// std::cout << M << "Default constructor called" << R << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other )
	: AForm(other),
	  _target(other._target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other ) {
	if (this != &other) {
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void	RobotomyRequestForm::executeAction() const {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	static std::bernoulli_distribution coin(0.5);

	std::cout << "VRRRRRRRRR - GRGRGRGRGRGRGRGRGR - VRR VRRR " << std::endl;

	if (coin(gen)) {
		std::cout << _target << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << "The robotomy on " << _target << " failed" << std::endl; 
	}
}


