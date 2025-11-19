#include "Prerequisites.h"
#include "ProgrammingPatterns/Command/ComandosConcretos/ComandoEncender.h"
#include "ProgrammingPatterns/Command/ComandosConcretos/ComandoApagar.h"
#include "ProgrammingPatterns/Command/Invoker/ControlRemoto.h"
#include "ProgrammingPatterns/Command/Luz.h"

int
main() {
  Luz luz;
  ComandoEncender comandoEncender(luz);
  ComandoApagar comandoApagar(luz);

  ControlRemoto controlRemoto;
  controlRemoto.EjecutarComando(&comandoEncender); // Luz encendida
  controlRemoto.EjecutarComando(&comandoApagar);  // Luz apagada
  controlRemoto.DeshacerUltimoComando();         // Luz encendida



  return 0;
}