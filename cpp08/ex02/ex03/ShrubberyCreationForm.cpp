//
// Created by esnowbal on 22.03.2021.
// With love and butthurt.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) \
: Form("Shruberry Creation Form", 145, 137), target(target), myTree("                                              .\n" \
"                                   .         ;\n" \
"      .              .              ;%     ;;\n" \
"        ,           ,                :;%  %;\n" \
"         :         ;                   :;%;'     .,\n" \
",.        %;     %;            ;        %;'    ,;\n" \
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n" \
"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n" \
"    ;%;      %;        ;%;        % ;%;  ,%;'\n" \
"     `%;.     ;%;     %;'         `;%%;.%;'\n" \
"      `:;%.    ;%%. %@;        %; ;@%;%'\n" \
"         `:%;.  :;bd%;          %;@%;'\n" \
"           `@%:.  :;%.         ;@@%;'\n" \
"             `@%.  `;@%.      ;@@%;\n" \
"               `@%%. `@%%    ;@@%;\n" \
"                 ;@%. :@%%  %@@%;\n" \
"                   %@bd%%%bd%%:;\n" \
"                     #@%%%%%:;;\n" \
"                     %@@%%%::;\n" \
"                     %@@@%(o);  . '\n" \
"                     %@@@o%;:(.,'\n" \
"                 `.. %@@@o%::;\n" \
"                    `)@@@o%::;\n" \
"                     %@@(o)::;\n" \
"                    .%@@@@%::;\n" \
"                    ;%@@@@%::;.\n" \
"                   ;%@@@@%%:;;;.\n" \
"               ...;%@@@@@%%:;;;;,..  \n") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) \
: Form(src.getName(), src.getGradeToSign(), src.getGradeToExec()), target(src.target) {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::string target;
	target += this->target;
	target += "_shrubbery";
	std::ofstream tree;
	tree.open(target.c_str(), std::ios_base::out | std::ios_base::trunc);
	tree << myTree;
	tree.close();
	(void)executor;
}
