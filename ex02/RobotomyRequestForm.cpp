/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:11:21 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 14:11:21 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
  this->_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  this->_target = other._target;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str) : AForm("Robotomy Request", 72, 45), _target(str) {
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45) {
  _target = "Inkonnu";
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

