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

int	main() {

	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << G << "	 Mom, I want to be a Bureaucrat!		  " << R << std::endl;
	std::cout << G << "═══════════════════════════════════════════════" << R << std::endl;


	std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. Meet Peter! A very average guy with a family." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
	
	try {
		Bureaucrat Peter("Peter", 75);
		std::cout << Peter << std::endl;
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Peter.lowerGrade();
		std::cout << Peter << std::endl;
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Peter.increaseGrade();
		std::cout << Peter << std::endl << std::endl;

		Bureaucrat Bill( Peter );
		std::cout << Bill << std::endl;
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Bill.lowerGrade();
		std::cout << Bill << std::endl;
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Bill.increaseGrade();
		std::cout << Bill << std::endl << std::endl;
		Bill.lowerGrade();

		Bureaucrat Lois;
		std::cout << Lois << std::endl;
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Lois.lowerGrade();
		std::cout << Lois << std::endl;
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Lois.increaseGrade();
		std::cout << Lois << std::endl << std::endl;

		Lois = Bill;
		std::cout << Lois << std::endl;
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Lois.lowerGrade();
		std::cout << Lois << std::endl;
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Lois.increaseGrade();
		std::cout << Lois << std::endl << std::endl;

	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}
	

	try {
		std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "2. Meet Kim! The best Bureaucrat out there." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Kim("Kim", 1);
		std::cout << Kim << std::endl;
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Kim.increaseGrade();
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}

	try {
		std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "3. Meet Saul! The worst Bureaucrat out there." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Saul("Saul", 150);
		std::cout << Saul << std::endl;
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Saul.lowerGrade();
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}

	try {
		std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "4. Meet Brian! An impossibly bad Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Brian("Brian", 151);
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Brian.increaseGrade();
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Brian.lowerGrade();
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}

	try {
		std::cout << M << "\n═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "5. Meet Stewie! An impossibly good Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Stewie("Stewie", 0);
		std::cout << p << "Incrementing Grade by 1." << R << std::endl;
		Stewie.increaseGrade();
		std::cout << g << "Decrementing Grade by 1." << R << std::endl;
		Stewie.lowerGrade();
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}

}

