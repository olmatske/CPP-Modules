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

#include "Form.hpp"
#include "Colors.hpp"

Form::Form() : _name("Paperwork"), _signed(false), _reqSign(70), _reqExec(50) {
	std::cout << pp << _name << ": Default constructor called" << R << std::endl;
}

Form::Form( const std::string &name, int reqSign, int reqExec)
	:	_name(name),
		_signed(false),
		_reqSign(reqSign),
		_reqExec(reqExec) {
	std::cout << pp << _name << ": Parameterizes constructor called" << R << std::endl;

	if (_reqSign < 1 || _reqExec < 1) {
		throw GradeTooHighException();
	}
	if (_reqSign > 150 || _reqExec > 150) {
		throw GradeTooLowException();
	}
}

Form::Form( const Form &other ) : _name(other._name), _signed(other._signed), _reqSign(other._reqSign), _reqExec(other._reqExec) {
	std::cout << pp << _name << ": Copy constructor called" << R << std::endl;
}

Form &Form::operator=( const Form &other ) {
	std::cout << pp << _name << ": Copy assignment operator called" << R << std::endl;
	if (this != &other) {
		_signed = other._signed;
	}
	return (*this);
}

Form::~Form(){
	std::cout << pp << _name << ": Destructor called" << R << std::endl;
}


////////////////////////////////////////////////////////////////////////////////

std::string	Form::getName() const {
	return (_name);
}

bool	Form::getStatus() const {
	return (_signed);
}

int	Form::getReqSigned() const {
	return (_reqSign);
}

int	Form::getReqExec() const {
	return (_reqExec);
}

const char *Form::GradeTooHighException::what() const noexcept {
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const noexcept {
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form: " << form.getName()
	<< ", signature status: " << form.getStatus()
	<< ", required grade to sign: " << form.getReqSigned()
	<< ", required grade to execute: " << form.getReqExec();

	return (out);
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	int	grade = bureaucrat.getGrade();

	if (grade <= _reqSign)
		_signed = true;
	else
		throw GradeTooLowException();
}
