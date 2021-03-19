#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form):Form(form)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & form)
{
	Form::operator=(form);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::ofstream file;
	file.open(target().c_str());
	file << "      /\\\n     /\\*\\\n    /\\O\\*\\\n   /*/\\/\\/\\\n  /\\O\\/\\*\\/\\\n /\\*\\/\\*\\/\\/\\\n/\\O\\/\\/*/\\/O/\\\n      ||\n      ||\n      ||      " << std::endl;
	  file.close();
}
ShrubberyCreationForm *ShrubberyCreationForm::create(std::string target) {
	return (new ShrubberyCreationForm(target));
}
