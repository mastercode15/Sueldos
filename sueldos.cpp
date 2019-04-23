#include <iostream>
using namespace std;
int main() {
  /*categorias de sueldos 
    primera categoria > $1950  incremento de 15%
    segunda categoria > $1430  incremento de 10%
    tercera categoria > $1430  incremento de 8%
    cuarta categoria  < $ 910  incremento de 7%
  */

  float ns, as;
  int cat;
  cout<<"Ingrese el sueldo del empleado"<<endl;
  cin>>as;

  if(as>1950){
    ns=(as*0.15)+as;
    cat=1;
  }
  else if(as>1430){
    ns=(as*0.10)+as;
    cat=2;
  }
  else if(as>910){
    ns=(as*0.08)+as;
    cat=3;
  }

  else if(as>380){
    ns=(as*0.07)+as;
    cat=4;
  }

  else{
    cout<<"El sueldo es menor al salario basico"<<endl;
  }
  

  cout<<"El sueldo pertenece a la categoria "<<cat<<endl;
  cout<<"Antiguo sueldo = $ "<<as<<endl;
  cout<<"Nuevo sueldo = $ "<<ns;
  
}