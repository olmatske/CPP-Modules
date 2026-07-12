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

ClapTrap::ClapTrap() :
	_name("default"),
	_hitpoints(100),
	_energy(50),
	_damage(20)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy(other._energy),
	_damage(other._damage)
{
	std::cout << "Copy instructor called" << std::endl;
	this->_name = other._name;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	ClapTrap::attack( const std::string &target ) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << _name << " took " << amount << "points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrap " << _name << " gained " << amount << " amount of hitpoints" << std::endl;
}
