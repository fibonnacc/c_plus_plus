/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:46:50 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 17:11:32 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
void  PresidentialPardonForm::execute(const Bureaucrat& executor) const {
  (void)executor;
  if (this->getSign() == false) {
    throw AForm::FormNotSignedException();
  }

  else if (executor.getGrade() > this->getGradeExec()) {
    throw AForm::GradeTooLowException();
  }
}


/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */
PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 23, 5) {
  _target = "Iknkonnu";
}

PresidentialPardonForm::PresidentialPardonForm(std::string str) : AForm("Presidential Pardon", 23, 5), _target(str) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
  this->_target = other._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  this->_target = other._target;
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}
