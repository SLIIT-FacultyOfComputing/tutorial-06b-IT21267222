#include "Student.h"
#include <iostream>
#include <cstring>  
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char pname[]) {
  
  strcpy(name, pname);
  studentId = id;
  
}

// Display StudentId and Name
void Student::display() {
  cout<< "Name : " << name << "\n ID : " << studentId << endl;
}
