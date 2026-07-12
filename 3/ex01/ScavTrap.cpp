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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	_name("default"),
	_hitpoints(100),
	_energy(50),
	_damage(20)
{
	std::cout << M << "Default Scav constructor called" << R << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy(other._energy),
	_damage(other._damage)
{
	std::cout << P << "Copy Scapv instructor called" << R << std::endl; // instructor???
	this->_name = other._name;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other ) {
	std::cout << P << "Copy Scav assignment operator called" << R << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	ScavTrap::attack( const std::string &target ) {
	std::cout << P << "ScavTrap " << _name << " attacks " << target << "with their bazookas, causing " << _damage << " points of damage!" << R << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount ) {
	std::cout << P << "ScavTrap " << _name << " took " << amount << "points of damage!" << R << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	std::cout << P << "ScavTrap " << _name << " gained " << amount << " amount of hitpoints" << R << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << P << "ScavTrap " << _name << " is now in Gatekeeping mode." << R << std::endl;
}
