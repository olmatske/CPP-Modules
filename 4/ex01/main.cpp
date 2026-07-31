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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

///////////////////////////////////////////////////////////////////////////////////////
// This program does not leak unless you want to see it for yourself:                //
// 		1. Uncomment everything marked with ">>> ONLY UNCOMMENT FOR LEAK CHECK <<<"  //
// 		2. run "valgrind --leak-check=full ./Animal" after running "make"            //
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	std::cout << P << " W E L C O M E   T O   T H E   A N I M A L   P R O G R A M\n" << R << std::endl;
	std::cout << P << "====== Initializing animals ======" << R << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << P << "\n====== Getting types ======" << R << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << P << "\n====== Making sounds ======" << R << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << P << "\n====== Testing Deep Copy ======" << R << std::endl;
	Cat original;
	original.getBrain()->setIdea(0, "My poop seems to be very important if humans collect it immediately after defacating...");
	Cat copy(original);							// create a copy using the copy constructor
	original.getBrain()->setIdea(0, "I love pissing on your bed and then pretending like I'm disgusted and surprised how it got there in the first place");	// changing the original dog's idea
	std::cout << "Original's idea: " << original.getBrain()->getIdea(0) << std::endl;	// proving the copy has its own separate brain
	std::cout << "Copy's idea: " << copy.getBrain()->getIdea(0) << std::endl;

	std::cout << P << "\n====== Calling destructors ======" << R << std::endl;
	delete i;
	delete j;
	delete meta;

	std::cout << P << "\n====== Testing Wrong Animal and Cat implementation ======" << R << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* bark = new WrongCat();

	std::cout << P << "\n====== Getting Wrong Cat's type ======" << R << std::endl;
	std::cout << bark->getType() << " " << std::endl;

	std::cout << P << "\n====== Making Wrong Cat sounds ======" << R << std::endl;
	bark->makeSound();

	std::cout << P << "\n====== Calling Wrong Cat's and Wrong Animal's destructor ======" << R << std::endl;
	delete bark;
	delete wrong;


	return 0;
}

