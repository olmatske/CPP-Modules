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
#include "AForm.hpp"
#include "Colors.hpp"

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(75) {
	std::cout << pp << _name << ": Default constructor called" << R << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name), _grade(grade) {
	std::cout << pp << _name << ": Parameterizes constructor called" << R << std::endl;

	if (_grade < 1) {
		throw GradeTooHighException();
	}
	if (_grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ) : _name(other._name), _grade(other._grade) {
	std::cout << pp << _name << ": Copy constructor called" << R << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &other ) {
	std::cout << pp << _name << ": Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << pp << _name << ": Destructor called" << R << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
std::string Bureaucrat::getName() const {
	return(_name);
}


int			Bureaucrat::getGrade() const {
	return(_grade);
}


void		Bureaucrat::lowerGrade() {
	if ((this->_grade) >= 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void		Bureaucrat::increaseGrade() {
	if ((this->_grade) <= 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept {
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()
	<< ".";

	return (out);
}

void	Bureaucrat::signAForm(AForm &AForm) {
	try {
		AForm.beSigned(*this);
		std::cout << G << _name << " signed " << AForm.getName() << "." << R << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << _name << " could not sign " << AForm.getName() << " because " << e.what() << R << std::endl;
	}
}
