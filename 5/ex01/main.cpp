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
	std::cout << G << "	 Form up, maggots!		  " << R << std::endl;
	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;

	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. Meet the forms! Constructors and getters." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		std::cout << g << "Creating a default form." << R << std::endl;
		Form Default;
		std::cout << Default << std::endl << std::endl;

		std::cout << g << "Creating a finance form." << R << std::endl;
		const Form Finances("Finances", 100, 50);
		std::cout << Finances << std::endl << std::endl;

		std::cout << p << "Reading all attributes through getters."
					<< R << std::endl;
		std::cout << "Name: " << Finances.getName() << std::endl;
		std::cout << "Signed: "
					<< (Finances.getStatus() ? "yes" : "no") << std::endl;
		std::cout << "Required signing grade: "
					<< Finances.getReqSigned() << std::endl;
		std::cout << "Required execution grade: "
					<< Finances.getReqExec() << std::endl << std::endl;

		std::cout << g << "Copying the finance form." << R << std::endl;
		Form Copy(Finances);
		std::cout << Copy << std::endl;
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

		std::cout << g << "Saul tries first. Expected: failure."
					<< R << std::endl;
		Saul.signForm(Finances);
		std::cout << Finances << std::endl;
		std::cout << "Still unsigned: "
					<< (!Finances.getStatus() ? "PASS" : "FAIL")
					<< std::endl << std::endl;

		std::cout << p << "Peter tries next. Expected: success."
					<< R << std::endl;
		Peter.signForm(Finances);
		std::cout << Finances << std::endl;
		std::cout << "Now signed: "
					<< (Finances.getStatus() ? "PASS" : "FAIL")
					<< std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "5. Copying and assigning signed forms." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Peter("Peter", 75);
		Form Original("Finances", 100, 50);

		Peter.signForm(Original);
		std::cout << "Original: " << Original << std::endl << std::endl;

		std::cout << g << "Copy construction preserves all attributes."
					<< R << std::endl;
		Form Copy(Original);
		std::cout << "Copy: " << Copy << std::endl << std::endl;

		Form Assigned("Travel request", 120, 80);
		std::cout << "Before assignment: " << Assigned << std::endl;

		std::cout << p << "Assignment copies signed status only."
					<< R << std::endl;
		Assigned = Original;
		std::cout << "After assignment: " << Assigned << std::endl;
		// Travel request keeps its name and required grades.
		// Its signed status changes from false to true.

		Form Unsigned("Unsigned source", 140, 130);

		std::cout << g << "\nAssigning an unsigned source to the copy."
					<< R << std::endl;
		Copy = Unsigned;

		std::cout << "Copy: " << Copy << std::endl;
		std::cout << "Original remains signed: " << Original << std::endl;
		// Copy keeps the Finances name and grades, but becomes unsigned.
		// Original is unaffected.
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "6. The boundaries: grade 1 and grade 150." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Kim("Kim", 1);
		Bureaucrat Saul("Saul", 150);

		Form TopSecret("Top secret", 1, 1);
		Form QueueTicket("Queue ticket", 150, 150);

		std::cout << TopSecret << std::endl;
		std::cout << QueueTicket << std::endl << std::endl;

		std::cout << p << "Kim signs the strictest form."
					<< R << std::endl;
		Kim.signForm(TopSecret);

		std::cout << p << "Saul signs the easiest form."
					<< R << std::endl;
		Saul.signForm(QueueTicket);

		std::cout << TopSecret << std::endl;
		std::cout << QueueTicket << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "7. Signing grade 0. Impossibly demanding." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Impossible signature", 0, 50);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "8. Signing grade 151. Below the bottom." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Invalid signature", 151, 50);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "9. Execution grade 0. Nobody is qualified." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Impossible execution", 100, 0);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "10. Execution grade 151. Still invalid." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Invalid execution", 100, 151);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}

	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "3. Exactly qualified. Not a grade to spare." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Lois("Lois", 100);
		Form Application("Application", 100, 50);

		std::cout << Lois << std::endl;
		std::cout << Application << std::endl;

		std::cout << p << "Equal signing grade. Expected: success."
					<< R << std::endl;
		Lois.signForm(Application);
		std::cout << Application << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "4. One grade short. Direct exception test." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Brian("Brian", 101);
		Form Application("Application", 100, 50);

		std::cout << Brian << std::endl;
		std::cout << Application << std::endl;

		try {
			Application.beSigned(Brian);
			std::cout << RED << "FAIL: no exception thrown."
						<< R << std::endl;
		}
		catch (const Form::GradeTooLowException &e) {
			std::cout << p << "PASS: expected exception: "
						<< e.what() << R << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << RED << "FAIL: wrong exception: "
						<< e.what() << R << std::endl;
		}

		std::cout << Application << std::endl;
		std::cout << "Still unsigned: "
					<< (!Application.getStatus() ? "PASS" : "FAIL")
					<< std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "5. Copying and assigning signed forms." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Peter("Peter", 75);
		Form Original("Finances", 100, 50);

		Peter.signForm(Original);
		std::cout << "Original: " << Original << std::endl << std::endl;

		std::cout << g << "Copy construction preserves all attributes."
					<< R << std::endl;
		Form Copy(Original);
		std::cout << "Copy: " << Copy << std::endl << std::endl;

		Form Assigned("Travel request", 120, 80);
		std::cout << "Before assignment: " << Assigned << std::endl;

		std::cout << p << "Assignment copies signed status only."
					<< R << std::endl;
		Assigned = Original;
		std::cout << "After assignment: " << Assigned << std::endl;
		// Travel request keeps its name and required grades.
		// Its signed status changes from false to true.

		Form Unsigned("Unsigned source", 140, 130);

		std::cout << g << "\nAssigning an unsigned source to the copy."
					<< R << std::endl;
		Copy = Unsigned;

		std::cout << "Copy: " << Copy << std::endl;
		std::cout << "Original remains signed: " << Original << std::endl;
		// Copy keeps the Finances name and grades, but becomes unsigned.
		// Original is unaffected.
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "6. The boundaries: grade 1 and grade 150." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Bureaucrat Kim("Kim", 1);
		Bureaucrat Saul("Saul", 150);

		Form TopSecret("Top secret", 1, 1);
		Form QueueTicket("Queue ticket", 150, 150);

		std::cout << TopSecret << std::endl;
		std::cout << QueueTicket << std::endl << std::endl;

		std::cout << p << "Kim signs the strictest form."
					<< R << std::endl;
		Kim.signForm(TopSecret);

		std::cout << p << "Saul signs the easiest form."
					<< R << std::endl;
		Saul.signForm(QueueTicket);

		std::cout << TopSecret << std::endl;
		std::cout << QueueTicket << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "7. Signing grade 0. Impossibly demanding." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Impossible signature", 0, 50);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "8. Signing grade 151. Below the bottom." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Invalid signature", 151, 50);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "9. Execution grade 0. Nobody is qualified." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Impossible execution", 100, 0);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooHighException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "10. Execution grade 151. Still invalid." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;

	try {
		Form Impossible("Invalid execution", 100, 151);
		std::cout << RED << "FAIL: invalid grade accepted."
					<< R << std::endl;
	}
	catch (const Form::GradeTooLowException &e) {
		std::cout << p << "PASS: expected exception: "
					<< e.what() << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << "FAIL: wrong exception: "
					<< e.what() << R << std::endl;
	}

}

