#include <iostream>
using namespace std;

int main() {
              int i,b,p,s,n,vm;
              string nome;  
              i=0;
              p=0;
              b=0;
              s=0;
              do
              {
                  cout<<"quanti studenti ci sono in classe?"<<endl;
                  cin>> n;
                  }
               while(n<0)

               while(i<n)
               {
                  cout<<"qual'è il tuo nome?"<<endl;
                  cin>> nome;
                  cout<< "quale è il tuo voto medio in informatica?"<<endl;
                  cin>> vm;
                  if(vm>=6)
                  {
                     p=p+1;
                     }
                  {
                     b=b+1;
                     }
                     s=s+vm;
                     i=i+1 ;
                     }
                  {
                      vm=s/n;
                      cout<<"prenderanno il debito" <<b << "saranno promossi" <<p <<endl;
                      cout<<"il voto medio è" <<vm;
                      }



                      
                    }





//LEGGERE LE ISTRUZIONI NEL FILE README.md
