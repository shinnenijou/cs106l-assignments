#include "class.h"

inline Pig::Pig(std::string name): name(name), age(0)
{
}

inline Pig::Pig(std::string name, int age): name(name), age(age)
{
}

std::string Pig::get_name() const
{
  return name;
}

void Pig::set_name(std::string name)
{
  this->name = std::move(name);
}

int Pig::get_age() const
{
  return age;
}

void Pig::grow_up()
{
  set_age(get_age() + 1);
}

void Pig::set_age(int age)
{
  this->age = age;
}