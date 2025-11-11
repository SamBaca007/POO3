#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaA.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaB.h"
#include "ProgrammingPatterns/Bridge/AbstraccionRefinada.h"
#include "ProgrammingPatterns/Bridge/TV.h"
#include "ProgrammingPatterns/Bridge/Radio.h"
#include "ProgrammingPatterns/Bridge/ControlTV.h"
#include "ProgrammingPatterns/Bridge/ControlRadio.h"

int
main() {
  ImplementacionConcretaA impA;
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
  controlRadio.apagar();

  return 0;
}