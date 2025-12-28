/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:25:18 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 20:25:18 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {
  try {
    const Bureaucrat obj("Hicham", 100);
    std::string name("Khalid");
    ShrubberyCreationForm thing(name);

    thing.beSigned(obj);

    thing.execute(obj);
    
    std::cout << "Success execution ! check for the file " << name + "_shrubbery" << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
}
