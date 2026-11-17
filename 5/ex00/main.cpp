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

#include "Colors.hpp"
#include "Bureaucrat.hpp"

int	main() {

	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "			Mom, I want to be a Bureaucrat!		  " << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;


	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
	std::cout << M << "1. Meet Peter! A very average guy." << R << std::endl;
	std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
	
	Bureaucrat Peter("Peter", 100);
	std::cout << Peter << std::endl;
	Peter.lowerGrade();
	std::cout << Peter << std::endl;
	Peter.increaseGrade();
	std::cout << Peter << std::endl;

	try {
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "1. Meet Kim! The best Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Kim("Kim", 1);
		std::cout << Kim << std::endl;
		Kim.increaseGrade();

		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "1. Meet Saul! The worst Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Saul("Saul", 150);
		std::cout << Saul << std::endl;
		Saul.lowerGrade();

		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "1. Meet Brian! An impossibly bad Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Brian("Brian", 150);
		Brian.increaseGrade();
		Brian.lowerGrade();

		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		std::cout << M << "1. Meet Stewie! An impossibly good Bureaucrat." << R << std::endl;
		std::cout << M << "═══════════════════════════════════════════════" << R << std::endl;
		Bureaucrat Stewie("Stewie", 0);
		Stewie.increaseGrade();
		Stewie.lowerGrade();
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << R << std::endl;
	}




}