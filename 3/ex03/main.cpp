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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	FragTrap	Stewie("Stewie");
	FragTrap	Teddy( Stewie );
	FragTrap	Mew;

	DiamondTrap	Wither("Wither");
	DiamondTrap	Golem(Wither);
	DiamondTrap	Warden;

	Kevin = Travis;
	Jennifer = Hannah;
	Mew = Teddy;
	Warden = Golem;

	std::cout << C << "\nInitiaing Actions..." << R << std::endl;

	Peter.attack("Travis");
	Peter.beRepaired(4);
	Peter.takeDamage(14);
	Peter.beRepaired(4);

	Serena.attack("Hannah");
	Serena.takeDamage(80);
	Serena.beRepaired(69);
	Serena.guardGate();

	Stewie.attack("Teddy");
	Stewie.beRepaired(100);
	Stewie.takeDamage(199);
	Stewie.highFivesGuys();

	Wither.attack("Golem");
	Wither.beRepaired(4);
	Wither.takeDamage(14);
	Wither.beRepaired(4);
	Wither.guardGate();
	Wither.highFivesGuys();
	Wither.whoAmI();

	std::cout << M << "\n               End of Program!" << R << std::endl;
	std::cout << G << "=========================================================\n" << R << std::endl;

	std::cout << M << "Cleaning up..." << R << std::endl;
	return (0);
}