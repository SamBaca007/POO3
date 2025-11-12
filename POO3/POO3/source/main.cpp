#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsibility/ManejadorConcretoA.h"
#include "ProgrammingPatterns/ChainOfResponsibility/ManejadorConcretoB.h"
#include "ProgrammingPatterns/ChainOfResponsibility/ManejadorConcretoC.h"

int
main() {
  /*ImplementacionConcretaA impA;
  ImplementacionConcretaB impB;

  AbstraccionRefinada abstraccionA(&impA);
  AbstraccionRefinada abstraccionB(&impB);

  abstraccionA.operacion();
  abstraccionB.operacion();


  TV tv;
  Radio radio;

  ControlTV controlTV(&tv);
  ControlRadio controlRadio(&radio);

  controlTV.encender();
  controlTV.apagar();

  controlRadio.encender();
  controlRadio.apagar();*/

  ManejadorConcretoC manejadorC(nullptr, "None");
  ManejadorConcretoB manejadorB(&manejadorC, "Manejador C");
  ManejadorConcretoA manejadorA(&manejadorB, "Manejador B");

  int peticiones[] = { 5, 9, 15, 25, 35 };
  for (int peticion : peticiones) {
    manejadorA.manejarPeticion(peticion);
  }

  return 0;
}