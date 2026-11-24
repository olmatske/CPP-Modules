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

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ostream>
#include <string>

Intern::Intern() {
	std::cout << pp << "Default constructor called" << R << std::endl;
}

Intern::Intern( const Intern &other ) {
	(void)other;

	std::cout << pp << "Copy constructor called" << R << std::endl;
}

Intern &Intern::operator=( const Intern &other ) {
	(void)other;

	std::cout << pp << "Copy assignment operator called" << R << std::endl;
	return (*this);
}

Intern::~Intern() {
	std::cout << pp << "Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

AForm	*Intern::makeForm(std::string name, std::string target) {
	const std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	// Creator is an alias for what comes after -> using = alias (kind of)
	using Creator = AForm *(*)(const std::string &);

	const Creator creators[] = {
		[](const std::string &target) -> AForm * {
			return new ShrubberyCreationForm(target);
		},
		[](const std::string &target) -> AForm * {
			return new RobotomyRequestForm(target);
		},
		[](const std::string &target) -> AForm * {
			return new PresidentialPardonForm(target);
		}
	};

	for (int i = 0; i < 3; i++) {
		if (name == names[i]) {
			AForm *form = creators[i](target);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
	}
	std::cerr << RED << "Intern cannot create form: " << name << R << std::endl;

	return nullptr;
}

