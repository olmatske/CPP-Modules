/* ************************************************************************** */
/*              ／＞　 フ                        ˚★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*             | 　_　_|                             ˖ ࣪　⊹ ࣪ ★⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ ⋆.˚  ⊹ ࣪*/
/*            ／` ミ＿xノ                                    ࣪ ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖*/
/*           /　　　　 |                                    ˖⋆˚★ ₊ ⊹　  ࣪˖ ࣪ ₊  ࣪ ˖　*/
/*          /　 ヽ　　 ﾉ           へ   ╱|、 ♡  ╱|、        ☆⊹ ࣪ ┆ ˖ ࣪　⊹ ࣪ ★ .˚  ⊹ */
/*          │　　|　|　|       ૮ - ՛ ) (˚ˎ 。7  (` -  7           ˚★ ₊ ⊹　  ࣪˖ ࣪ ₊ */
/*      ／￣ 　　 |　|　|       /  ⁻៸|  |、 ˜(    |、⁻(           ★ ₊ ⊹　  ࣪˖ ࣪ ࣪ ˖⋆ */
/*      ( ( ヽ＿_ヽ_)__)   乀 (ˍ, ل ل  じしˍ,)ノ じしˍ,)ノ         　⊹ ࣪ ★ ⋆.˚    */
/*      ＼__二)                                               ࣪˖ ࣪ ₊  ★⊹ ࣪ ┆  ★ ⋆.*/
/* ********************************************************** github/olmatske */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	std::cout << G << "=========================================================" << R << std::endl;
	std::cout << M << "        Welcome to the ScavTrap Program!" << R << std::endl;

	std::cout << C << "\nBuilding Classes..." << R << std::endl;
	
	ClapTrap	Peter("Peter");
	ClapTrap	Travis( Peter );
	ClapTrap	Kevin;

	ScavTrap	Serena;
	ScavTrap	Hannah( Serena );
	ScavTrap	Jennifer;

	Kevin = Travis;
	Jennifer = Hannah;

	std::cout << C << "\nInitiaing Actions..." << R << std::endl;

	Peter.attack("Travis");
	Peter.beRepaired(4);
	Peter.takeDamage(14);
	Peter.beRepaired(4);

	Serena.attack("Hannah");
	Serena.takeDamage(3);
	Serena.beRepaired(4);
	Serena.guardGate();

	std::cout << M << "\n               End of Program!" << R << std::endl;
	std::cout << G << "=========================================================\n" << R << std::endl;

	std::cout << M << "Cleaning up..." << R << std::endl;
	return (0);
}