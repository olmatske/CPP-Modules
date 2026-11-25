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

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target )
	: AForm("ShrubberyCreationForm", 145, 137),
	  _target(target)
	{
	// std::cout << M << "Default constructor called" << R << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other )
	: AForm(other),
	  _target(other._target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other ) {
	if (this != &other) {
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void	ShrubberyCreationForm::executeAction() const {
	std::ofstream file(_target + "_shrubbery");

	if (!file.is_open())
		throw std::runtime_error("Could not create shrubbery file");
	else {
		file << R"(
		      *             ,
                  _/^\_
                 <     >
*                 /.-.\         *
         *        `/&\`                   *
                 ,@.*;@,
                /_o.I %_\    *
   *           (`'--:o(_@;
              /`;--.,__ `')             *
             ;@`o % O,*`'`&\
       *    (`'--)_@ ;o %'()\      *
            /`;--._`''--._O'@;
           /&*,()~o`;-.,_ `""`)
*          /`,@ ;+& () o*`;-';\
          (`""--.,_0 +% @' &()\
          /-.,_    ``''--....-'`)  *
     *    /@%;o`:;'--,.__   __.'\
         ;*,&(); @ % &^;~`"`o;@();         *
         /(); o^~; & ().o@*&`;&%O\
         `"="==""==,,,.,="=="==="`
      __.----.(\-''#####---...___...-----._
    '`         \)_`"""""`
            .--' ')
          o(  )_-\
            `"""` `
		)";
	}
}



