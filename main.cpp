#include <iostream>
#include <ctime>
#include <map>

using namespace std;

int main() {
  srand(time(0));
  
  map <int, string> moves;
  moves.emplace(0, "paper");
  moves.emplace(1, "rock");
  moves.emplace(0, "scissors");

  int userPoints = 0;
  int cpuPoints = 0;

  while (userPoints < 3 && cpuPoints < 3) {
    int cpuMove = rand() % 3;
    string userMove;
    cout << "Your move (paper, rock, scissors): ";
    cin >> userMove;

    cout << "Cpu move " << moves.at(cpuMove) << ", your move "<< userMove << "." << endl;

    if (moves.at(cpuMove) == "paper" && userMove == "rock") { 
      cpuPoints++;
    } else if (moves.at(cpuMove) == "paper" && userMove == "scissors") {
      userPoints++;
    } else if (moves.at(cpuMove) == "rock" && userMove == "paper") {
      userPoints++;
    } else if (moves.at(cpuMove) == "rock" && userMove == "scissors") {
      cpuPoints++;
    } else if (moves.at(cpuMove) == "scissors" && userMove == "paper") {
      cpuPoints++;
    } else if (moves.at(cpuMove) == "scissors" && userMove == "rock") {
      userPoints++;
    }
    
  cout << "Computer points: " << cpuPoints << ", your points: " << userPoints << "." <<  endl; 
  }

  if (userPoints > cpuPoints) {
    cout << "You won!" << endl; 
  } else {
    cout << "You lose!" << endl; 
  }
  
  
}