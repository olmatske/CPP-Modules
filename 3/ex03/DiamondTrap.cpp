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

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("EnderDragon_clap_name"), ScavTrap(), FragTrap() {
	this->_name = "EnderDragon";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energy = 50;
	FragTrap::_damage = 30;

	ClapTrap::_name = "EnderDragon_clap_name";
	std::cout << c << "Default constructor called" << R << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	FragTrap::_hitpoints = 100;
	ScavTrap::_energy = 50;
	FragTrap::_damage = 30;

	std::cout << c << "Parameterizes constructor called" << R << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
	std::cout << c << "Copy constructor called" << R << std::endl;
	this->_name = other._name;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other ) {
	std::cout << c << "Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << c << "DiamondTrap Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
void	DiamondTrap::whoAmI() {
	// this->_name is DiamondTrap's name - ClpapTrap::_name is the inherited name
	std::cout << c << "Am I " << this->_name << " or am I " << ClapTrap::_name << "?" << R << std::endl;
}

