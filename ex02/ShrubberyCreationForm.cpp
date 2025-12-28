/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 12:13:54 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 12:14:26 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
void  ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
  if (this->getSign() == false) {
    throw AForm::FormNotSignedException();
  }

  else if (executor.getGrade() > this->getGradeExec()) {
    throw AForm::GradeTooLowException();
  }
    
  std::string FileName = this->_target + "_shrubbery";
  std::ofstream OutFile(FileName.c_str());
  OutFile << "           /\\        " << std::endl;
  OutFile << "          /^^\\       " << std::endl;
  OutFile << "        //    \\\\        " << std::endl;
  OutFile << "      ///      \\\\\\ " << std::endl;
  OutFile << "     ///////\\\\\\\\\\\\\\ " << std::endl;
  OutFile << "          /^^\\    " << std::endl;
  OutFile << "          /^^\\    " << std::endl;
}

/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */
ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : AForm("Shrubbery Creation", 145, 137) {
  this->_target = str;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137) {
  this->_target = "Inkonnu";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {
  this->_target = other._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  this->_target = other._target;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}
