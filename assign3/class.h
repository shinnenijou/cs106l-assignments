#ifndef CLASS_H
#define CLASS_H

#include <string>

class Pig{
public:
  Pig() = default;
  explicit Pig(std::string name);
  Pig(std::string name, int age);

  std::string get_name() const;
  void set_name(std::string name);

  int get_age() const;
  void grow_up();

private:
  void set_age(int age);

private:
  std::string name;
  int age;
};



#endif
