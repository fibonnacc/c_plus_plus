/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:41:29 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/22 18:41:29 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

using namespace  std;

struct  AgeProvider {

  int _Age;
  string _Name;

  
  AgeProvider() {
    _Name = "Inkonnu";
    _Age = 0;
  }

  AgeProvider(string name, int age)
  {
    _Age = age;
    _Name = name;
  }
  void  Compare_Age()
  {
    if (_Age == 0)
      throw ("Please Mr Inkonnu set the Age, it can't be 0");
    else if (_Age < 0)
      throw (-1);
  }
};


int main (int argc, char *argv[])
{
  AgeProvider age1("Hicham", -90);
  try {
    age1.Compare_Age();
  }

  catch (const char *exception) {
    cout << exception << endl;
  }

  catch (const int exCode) {
    cout << "Please {" << age1._Name << "} you can't set the age as negative value" << endl;
  }
  return 0;
}
