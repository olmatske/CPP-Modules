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
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

int	main() {

	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << G << "	      The intern takes over.		  " << R << std::endl;
	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. The forms still exist." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		ShrubberyCreationForm Shrubbery("home");
		RobotomyRequestForm Robot("Bender");
		PresidentialPardonForm Pardon("Arthur Dent");

		std::cout << Shrubbery << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pardon << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "2. The intern creates and delivers the forms." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Intern Intern;
		Bureaucrat Kim("Kim", 1);

		std::cout << Kim << std::endl << std::endl;

		AForm *Shrubbery = Intern.makeForm("shrubbery creation", "home");
		AForm *Robot = Intern.makeForm("robotomy request", "Bender");
		AForm *Pardon = Intern.makeForm("presidential pardon", "Arthur Dent");

		std::cout << *Shrubbery << std::endl;
		std::cout << *Robot << std::endl;
		std::cout << *Pardon << std::endl << std::endl;

		Kim.signForm(*Shrubbery);
		Kim.signForm(*Robot);
		Kim.signForm(*Pardon);
		std::cout << std::endl;

		Kim.executeForm(*Shrubbery);
		Kim.executeForm(*Robot);
		Kim.executeForm(*Pardon);

		delete Shrubbery;
		delete Robot;
		delete Pardon;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "3. The intern rejects an unknown form." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Intern Intern;
		AForm *Unknown = Intern.makeForm("form 28C", "nobody");

		delete Unknown;	// unknown names return nullptr
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
