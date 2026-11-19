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

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form {

	private:
		std::string const	_name = "Paperwork";
		bool				_signed = false;
		const int			_reqSign = 100;
		const int			_reqExec = 50;

	public:
		Form();
		Form(const std::string &name, int reqSign, int reqExec);
		Form( const Form &other );
		Form& operator=( const Form &other );
		~Form();

		std::string	getName() const;
		bool		getStatus() const;
		int			getReqSigned() const;
		int			getReqExec() const;
		void		beSigned(const Bureaucrat &bureaucrat);	// changes form's status to signed

	class	GradeTooHighException : public std::exception {
		public:
			const char *what() const noexcept override;
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char *what() const noexcept override;
	};

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif

