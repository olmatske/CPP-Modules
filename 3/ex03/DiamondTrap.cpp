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

DiamondTrap::DiamondTrap() : ClapTrap("EnderDragon_clap_name"), FragTrap(), ScavTrap() {
	this->_name = "EnderDragon";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 30;

	ClapTrap::_name = "EnderDragon_clap_name";
	std::cout << pp << "Default constructor called" << R << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 30;


	std::cout << pp << "Parameterizes constructor called" << R << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other), FragTrap(other), ScavTrap(other)
	_name(other._name)
{
	std::cout << pp << "Copy constructor called" << R << std::endl;
	this->_name = other._name;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other ) {
	std::cout << pp << "Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << pp << "DiamondTrap Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
void	DiamondTrap::whoAmI() {
	std::cout << pp << "Am I " << this->_name << " or am I " << ClapTrap::_name << "?" << R << std::endl;
}