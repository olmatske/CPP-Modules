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
	_name("Louis"),
	_hitpoints(100),
	_energy(50),
	_damage(20)
{
	std::cout << P << "Default Scav constructor called" << R << std::endl;
}
ScavTrap::ScavTrap( std::string name ) :
	_name(name),
	_hitpoints(100),
	_energy(50),
	_damage(20)
{
	std::cout << P << "Parameterizes Scav constructor called" << R << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy(other._energy),
	_damage(other._damage)
{
	std::cout << P << "Copy Scav constructor called" << R << std::endl;
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
	std::cout << P << "ScavTrap Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
void	ScavTrap::attack( const std::string &target ) {
	if (_energy <= 0) {
		std::cout << P << "ScavTrap " << _name << " can't attack. More energy required." << R << std::endl;
		return;
	}
	else if (_hitpoints <= 0) {
		std::cout << P << "ScavTrap " << _name << " can't attack. More hitpoints required." << R << std::endl;
		return;
	}
	else {
		_energy--;
		std::cout << P << "ScavTrap " << _name << " attacks " << target << " with their Bazooka, causing " << _damage << " points of damage! Current energy: " << _energy << "." << R << std::endl;
	}
	return;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	if (_energy <= 0) {
		std::cout << P << "ScavTrap " << _name << " can't repair itself. More energy required." << R << std::endl;
		return;
	}
	else if (_hitpoints <= 0) {
		std::cout << P << "ScavTrap " << _name << " can't repair. More hitpoints required." << R << std::endl;
		return;
	}
	else {
		_energy--;
		_hitpoints += amount;
		std::cout << P << "ScavTrap " << _name << " gained " << amount << " amount of hitpoints through repair. Current health: " << _hitpoints << "." << R << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void	ScavTrap::takeDamage( unsigned int amount ) {
	_hitpoints -= amount;
	std::cout << P << "ScavTrap " << _name << " took " << amount << " points of damage! Current health: " << R << _hitpoints << "." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << P << "ScavTrap " << _name << " is now in Gatekeeping mode." << R << std::endl;
}

