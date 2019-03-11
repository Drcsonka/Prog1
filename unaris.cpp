#include <iostream>

using namespace std;

int main ()
{
  int x;
  cout << "Adjon meg egy decimalis szamot:\n";
  cin >> x;
  cout << "A szam unaris alakban:\n";
  for (int i = 0; i < x; i++)
    {
      cout << ".";
    }
  return 0;
}
