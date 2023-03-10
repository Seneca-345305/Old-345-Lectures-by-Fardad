#include <string>
#ifndef VALIDATION_H__
#define VALIDATION_H__

class Validation {
protected:
   int noOfValidations = 0;
public:
   virtual bool operator()(int val, std::string& messageOut) = 0;
};

class ValidAge :public Validation {
   int m_minAge;
   int m_maxAge;
public:
   ValidAge(int min = 19, int max = 100);
   bool operator()(int val, std::string& messageout);
};

class ValidMark :public Validation {
public:
   bool operator()(int val, std::string& messageout);
};
#endif