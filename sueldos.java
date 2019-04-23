import java.util.Scanner;
class Main {
  public static void main(String[] args) {
  double ns=0,as=0;
  int cat=0;
  Scanner s=new Scanner(System.in);
   System.out.println("Ingrese el sueldo del empleado");
    as=s.nextFloat();

    if(as>1950){
    ns=as*0.15+as;
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
    System.out.println("El sueldo es menor al salario basico");
  }
  
  System.out.println("El sueldo pertenece a la categoria "+cat);
  System.out.println("Antiguo sueldo = $ "+as);
  System.out.println("Nuevo sueldo = $ "+ns);
  
  }
}