#include <windows.h> 
#include <iostream> 
#include <stdlib.h> 
using namespace std;
int main()
{
  float JablkoGrammy;
  float GruszaTonny;
  float CenaJablko;
  float CenaGrusza;



  cout << "Podaj wage jablek w gramach: " << endl;
  cin >> JablkoGrammy;
  cout << "Podaj wage grusz w tonnach: " << endl;
  cin >> GruszaTonny;

  float JablkoKilo = JablkoGrammy / 1000;
  float GruszaKilo = GruszaTonny * 1000;


  cout << "Podaj cene jablek w kilogramach:" << endl;
  cin >> CenaJablko;
  cout << "Podaj cene grusz w kilogramach:" << endl;
  cin >> CenaGrusza;

  float KoncowaCenaJablek = JablkoKilo * CenaJablko;
  float KoncowaCenaGrusz = GruszaKilo * CenaGrusza;
  float sum = KoncowaCenaJablek + KoncowaCenaGrusz;

  cout << "Cena wrzystkych jablek =   " << JablkoKilo << "kg *" << CenaJablko << "zl     = " << KoncowaCenaJablek << endl;
  cout << "Cena wrzystkych grusz  =   " << GruszaKilo << "  kg *" << CenaGrusza << "zl     = " << KoncowaCenaGrusz << endl;
  cout << "                                      suma                = " << sum << endl;
  system("pause");
}
