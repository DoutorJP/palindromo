#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

int main(int argc, char** argv)
{
  std::string a = argv[1];
  std::string b(a);
  std::reverse(b.begin(), b.end());
  int cmp = b.compare(a);
  if(cmp == 0) std::cout << "É um palindromo!\n";
  if(cmp != 0) std::cout << "Não é um palindromo!\n";
  return 0;

}
