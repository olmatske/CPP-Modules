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

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class AForm {

	private:
		std::string const	_name = "Paperwork";
		bool				_signed = false;
		const int			_reqSign = 100;
		const int			_reqExec = 50;

		virtual void executeAction() const = 0;

	public:
		AForm();
		AForm(const std::string &name, int reqSign, int reqExec);
		AForm( const AForm &other );
		AForm& operator=( const AForm &other );
		virtual ~AForm();

		std::string	getName() const;
		bool		getStatus() const;
		int			getReqSigned() const;
		int			getReqExec() const;

		void		beSigned(const Bureaucrat &bureaucrat);	// changes form's status to signed
		void		execute(const Bureaucrat &bureaucrat);

	class	GradeTooHighException : public std::exception {
		public:
			const char *what() const noexcept override;
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char *what() const noexcept override;
	};

	class	FormNotSignedException : public std::exception {
		public:
			const char *what() const noexcept override;
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif

