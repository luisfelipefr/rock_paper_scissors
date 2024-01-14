#include <iostream>
#include <stdlib.h>

int main() {
  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  // choice
  switch(user){
    case 1:
      std::cout << "Usuário escolheu ✊\n";
      break;
    case 2:
      std::cout << "Usuário escolheu ✋\n";
      break;
    case 3:
      std::cout << "Usuário escolheu ✌️\n";
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  switch(computer){
    case 1:
      std::cout << "Computador escolheu ✊\n";
      break;
    case 2:
      std::cout << "Computador escolheu ✋\n";
      break;
    case 3:
      std::cout << "Computador escolheu ✌️\n";
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }
  //results
  if(user == computer){
    std::cout << "Temos um empate\n";
  } 
  // user rock
  else if(user == 1){
    if(computer == 3){
      std::cout << "O jogador é o vencedor\n";
    }
    else
    {
      std::cout << "O computador é o vencedor\n";
    }
  }

  //user paper
  else if(user == 2){
    if(computer == 1){
      std::cout << "O jogador é o vencedor\n";
    }
    else
    {
      std::cout << "O computador é o vencedor\n";
    }
  }

  //user scissors
  else if(user == 3){
    if(computer == 2){
      std::cout << "O jogador é o vencedor\n";
    }
    else
    {
      std::cout << "O computador é o vencedor\n";
    }
  }
}