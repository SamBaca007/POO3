#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/Player.h"
#include "GameProgrammingPatterns/State/NormalState.h"
#include "GameProgrammingPatterns/State/HurtState.h"
#include "GameProgrammingPatterns/State/RageState.h"
#include "GameProgrammingPatterns/State/Car.h"
#include "GameProgrammingPatterns/State/ParkedState.h"
#include "GameProgrammingPatterns/State/ForwardState.h"
#include "GameProgrammingPatterns/State/ReverseState.h"
int
main() {
  Player* player = new Player();
  player->Attack();
  player->Defend();
  player->Move();
  std::cout << "Player gets hurt!" << std::endl;
  player->setState(new HurtState());
  player->Attack();
  player->Defend();
  player->Move();
  std::cout << "Player gets enraged!" << std::endl;
  player->setState(new RageState());
  player->Attack();
  player->Defend();
  player->Move();
  std::cout << "Player calms down to normal state." << std::endl;
  player->setState(new NormalState());
  player->Attack();
  player->Defend();
  player->Move();
  delete player;

  Car* carro = new Car();
  carro->Acelerar();
  carro->Frenar();
  std::cout << "El carro ahora avanza." << std::endl;
  carro->SetState(new ForwardState());
  carro->Acelerar();
  carro->Frenar();
  std::cout << "El carro ahora va en reversa." << std::endl;
  carro->SetState(new ReverseState());
  carro->Acelerar();
  carro->Frenar();
  std::cout << "El carro ahora esta estacionado." << std::endl;
  carro->SetState(new ParkedState());
  carro->Acelerar();
  carro->Frenar();
  delete carro;

  return 0;
}