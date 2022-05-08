#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "snake.cpp"
#include "fruit.cpp"

bool gameOver = false;
const int height = 20;
const int width = 20;
int score = 0;

enum eDir{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDir dir;

// we will begin with only one fruit, we can make a vector of fruits for multiple
void Draw(const Snake& s, const Fruit& f){
    system("clear");
    // drawing the top of the graph
    for (int i = 0; i <= width; i++){
        std::cout << "#";
    }
    std::cout << std::endl;

    // drawing the middle
    for (int i = 0; i < height; i++){
        for (int j = 0; j <= width; j++){
            if (j == 0 || j == width) std::cout << "#"; // borders
            else if (s.Match(i, j)) std::cout << "O";
            else if (f.Match(i, j)) std::cout << "F"; // fruit locations
            else std::cout << " "; // standard spaces
        }
        std::cout << std::endl;
    }

    // drawing the bottom
    for (int i = 0; i <= width; i++){
        std::cout << "#";
    }
    std::cout << std::endl;
}

void Input(const Snake& s){
    
}

int main(){
    Snake s(width / 2, height / 2);
    Fruit f(rand() % width, rand() % height);
    while (!gameOver){
        Draw(s, f);
        Input(s);
        gameOver = true;
    }

    return 0;
}