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

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include <fstream>
#include <sstream>

int	main() {

	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << G << "	 No, you need form 28B, not 28C!	  " << R << std::endl;
	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. Meet the forms!" << R << std::endl;
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
	std::cout << M << "2. Saul cannot sign. Kim can." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Saul("Saul", 150);
		Bureaucrat Kim("Kim", 1);
		ShrubberyCreationForm Shrubbery("home");
		RobotomyRequestForm Robot("Bender");
		PresidentialPardonForm Pardon("Arthur Dent");

		std::cout << Saul << std::endl;
		std::cout << Kim << std::endl << std::endl;

		Saul.signForm(Shrubbery);
		Saul.signForm(Robot);
		Saul.signForm(Pardon);
		std::cout << "All still unsigned: "
					<< (!Shrubbery.getStatus() && !Robot.getStatus()
						&& !Pardon.getStatus() ? "PASS" : "FAIL")
					<< std::endl << std::endl;

		Kim.signForm(Shrubbery);
		Kim.signForm(Robot);
		Kim.signForm(Pardon);
		std::cout << "All signed: "
					<< (Shrubbery.getStatus() && Robot.getStatus()
						&& Pardon.getStatus() ? "PASS" : "FAIL")
					<< std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "3. Execution needs a signature and a good grade." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Kim("Kim", 1);
		ShrubberyCreationForm Shrubbery("home");

		Shrubbery.execute(Kim);
		std::cout << "FAIL: unsigned form executed." << std::endl;
	}
	catch (const AForm::FormNotSignedException &e) {
		std::cout << "PASS: " << e.what() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "FAIL: " << e.what() << std::endl;
	}

	try {
		Bureaucrat Peter("Peter", 140);	// can sign 145, cannot execute 137
		ShrubberyCreationForm Shrubbery("home");

		Peter.signForm(Shrubbery);
		Shrubbery.execute(Peter);
		std::cout << "FAIL: grade 140 executed a form requiring 137." << std::endl;
	}
	catch (const AForm::GradeTooLowException &e) {
		std::cout << "PASS: " << e.what() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "FAIL: " << e.what() << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "4. Each form executes at its required grade." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Gardener("Gardener", 137);
		Bureaucrat Engineer("Engineer", 45);
		Bureaucrat President("President", 5);
		ShrubberyCreationForm Shrubbery("home");
		RobotomyRequestForm Robot("Bender");
		PresidentialPardonForm Pardon("Arthur Dent");

		Gardener.signForm(Shrubbery);
		Engineer.signForm(Robot);
		President.signForm(Pardon);
		std::cout << std::endl;

		Shrubbery.execute(Gardener);
		std::ifstream Tree("home_shrubbery");
		std::cout << "home_shrubbery created: "
					<< (Tree.good() ? "PASS" : "FAIL") << std::endl << std::endl;

		std::cout << "Robotomy: 10 executions, expected about 5 successes." << std::endl << std::endl;
		int successes = 0;
		for (int i = 0; i < 10; ++i) {
			std::ostringstream output;
			std::streambuf *old = std::cout.rdbuf(output.rdbuf());

			Robot.execute(Engineer);
			std::cout.rdbuf(old);

			// Keep only the result line, not the drilling noise.
			std::istringstream captured(output.str());
			std::string noise;
			std::string result;
			std::getline(captured, noise);
			std::getline(captured, result);

			bool success = result.find("successfully") != std::string::npos;
			successes += success;
			std::cout << i + 1 << ". " << (success ? G : RED) << result << R
						<< std::endl << std::endl;
		}
		std::cout << "Successes: " << successes << ", failures: "
					<< 10 - successes << std::endl << std::endl;

		Pardon.execute(President);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "5. executeForm reports success and failure." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Kim("Kim", 1);
		Bureaucrat Saul("Saul", 150);
		ShrubberyCreationForm Shrubbery("home");
		PresidentialPardonForm Pardon("Ford Prefect");

		Kim.signForm(Pardon);
		std::cout << "Kim executes a signed form:" << std::endl;
		Kim.executeForm(Pardon);
		std::cout << "Saul executes it: grade too low." << std::endl;
		Saul.executeForm(Pardon);
		std::cout << "Kim executes an unsigned form." << std::endl;
		Kim.executeForm(Shrubbery);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
