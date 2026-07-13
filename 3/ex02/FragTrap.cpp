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

#include "FragTrap.hpp"

FragTrap::FragTrap() :
	_name("Steven"),
	_hitpoints(100),
	_energy(100),
	_damage(30)
{
	std::cout << g << "Default constructor called" << R << std::endl;
}
FragTrap::FragTrap( std::string name ) :
	_name(name),
	_hitpoints(100),
	_energy(100),
	_damage(30)
{
	std::cout << g <<  "Parameterizes constructor called" << R << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy(other._energy),
	_damage(other._damage)
{
	std::cout << g <<  "Copy constructor called" << R << std::endl;
	this->_name = other._name;
}

FragTrap &FragTrap::operator=( const FragTrap &other ) {
	std::cout << g <<  "Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << g <<  "FragTrap Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	FragTrap::attack( const std::string &target ) {
	if (_energy <= 0) {
		std::cout << g <<  "FragTrap " << _name << " can't attack. More energy required." << R << std::endl;
		return;
	}
	else if (_hitpoints <= 0) {
		std::cout << g <<  "FragTrap " << _name << " can't attack. More hitpoints required." << R << std::endl;
		return;
	}
	else {
		_energy--;
		std::cout << g <<  "FragTrap " << _name << " attacks " << target << " with their Hugs and Kisses, causing " << _damage << " points of damage! Current energy: " << _energy << "." << R << std::endl;
	}
	return;
}

void	FragTrap::beRepaired( unsigned int amount ) {
	if (_energy <= 0) {
		std::cout << g <<  "FragTrap " << _name << " can't repair itself. More energy required." << R << std::endl;
		return;
	}
	else if (_hitpoints <= 0) {
		std::cout << g <<  "FragTrap " << _name << " can't repair. More hitpoints required." << R << std::endl;
		return;
	}
	else {
		_energy--;
		_hitpoints += amount;
		std::cout << g <<  "FragTrap " << _name << " gained " << amount << " amount of hitpoints through repair. Current health: " << _hitpoints << "." << R << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void	FragTrap::takeDamage( unsigned int amount ) {
	_hitpoints -= amount;
	std::cout << g <<  "FragTrap " << _name << " took " << amount << " points of damage! Current health: " << _hitpoints << "." << R << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << g << "FragTrap " << _name << " requests a high Five! Please give him one, he's very lonely." << R << std::endl;
}

