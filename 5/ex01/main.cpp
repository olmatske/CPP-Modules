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
#include "Form.hpp"
#include "Colors.hpp"


int	main() {

	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << G << "	      Form up, maggots!		  " << R << std::endl;
	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. Meet the forms! Constructors and getters." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Default;
		const Form Finances("Finances", 100, 50);
		Form Copy(Finances);

		std::cout << Default << std::endl;
		std::cout << Finances << std::endl;
		std::cout << Copy << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "2. Peter signs a form. Saul cannot." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Peter("Peter", 75);
		Bureaucrat Saul("Saul", 150);
		Form Finances("Finances", 100, 50);

		std::cout << Peter << std::endl;
		std::cout << Saul << std::endl;
		std::cout << Finances << std::endl << std::endl;

		std::cout << g << "Saul tries first. Expected: failure." << R << std::endl;
		Saul.signForm(Finances);
		std::cout << "Still unsigned: "
					<< (!Finances.getStatus() ? "PASS" : "FAIL") << std::endl << std::endl;

		std::cout << p << "Peter tries next. Expected: success." << R << std::endl;
		Peter.signForm(Finances);
		std::cout << "Now signed: "
					<< (Finances.getStatus() ? "PASS" : "FAIL") << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "3. Copying and assigning forms." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Peter("Peter", 75);
		Form Original("Finances", 100, 50);
		Form Assigned("Travel request", 120, 80);

		Peter.signForm(Original);
		Form Copy(Original);

		std::cout << "Original: " << Original << std::endl;
		std::cout << "Copy: " << Copy << std::endl << std::endl;

		std::cout << p << "Assignment keeps name and grades, copies signed status."
					<< R << std::endl;
		Assigned = Original;
		std::cout << "Assigned: " << Assigned << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "4. The boundaries: grade 1 and grade 150." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Kim("Kim", 1);
		Bureaucrat Saul("Saul", 150);
		Form TopSecret("Top secret", 1, 1);
		Form QueueTicket("Queue ticket", 150, 150);

		Kim.signForm(TopSecret);
		Saul.signForm(QueueTicket);
		std::cout << TopSecret << std::endl;
		std::cout << QueueTicket << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "5. Invalid grades are rejected." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Bad("Signing grade 0", 0, 50);
		std::cout << RED << "FAIL: grade 0 accepted." << R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: " << e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: " << e.what() << R << std::endl;
	}

	try {
		Form Bad("Signing grade 151", 151, 50);
		std::cout << RED << "FAIL: grade 151 accepted." << R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: " << e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: " << e.what() << R << std::endl;
	}

	try {
		Form Bad("Execution grade 0", 100, 0);
		std::cout << RED << "FAIL: grade 0 accepted." << R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: " << e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: " << e.what() << R << std::endl;
	}

	try {
		Form Bad("Execution grade 151", 100, 151);
		std::cout << RED << "FAIL: grade 151 accepted." << R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: " << e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: " << e.what() << R << std::endl;
	}

}
