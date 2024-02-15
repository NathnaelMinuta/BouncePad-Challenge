/******************************************************************************

EE245 – Project 1  	Nathnael Minuta and Omar Elkenawy        02/07/2024

BouncePad Challenge
A simple C++ program simulating a ball's movement within a console grid. Users can observe the ball's trajectory and interact with the simulation by advancing frames. The code demonstrates basic console graphics and user input handling
*******************************************************************************/

#include <iostream>
using namespace std;

class Grid {
private:
    int width, height; // Ensure declaration order matches initialization order
    int ballX, ballY;
    int velocityX, velocityY;

public:
    // Constructor initialization list now matches the member declaration order
    Grid(int n, int m) : width(m), height(n), ballX(m / 2), ballY(n / 2), velocityX(1), velocityY(1) {}

    void updateBallPosition() {
        // Check for collisions with walls and change direction if needed
        if (ballX == 1 || ballX == width - 2) velocityX = -velocityX;
        if (ballY == 1 || ballY == height - 2) velocityY = -velocityY;

        // Update ball position based on velocity
        ballX += velocityX;
        ballY += velocityY;
    }

    void display() {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                // Corners
                if ((i == 0 || i == height - 1) && (j == 0 || j == width - 1)) {
                    cout << "+ ";
                } else if (i == 0 || i == height - 1) {
                    // Top and Bottom edges
                    cout << "- ";
                } else if (j == 0 || j == width - 1) {
                    // Left and Right edges
                    cout << "| ";
                } else if (i == ballY && j == ballX) {
                    // Ball
                    cout << "o ";
                } else {
                    // Inside the grid is empty
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int N = 25, M = 30;
    Grid grid(N, M);
    char input;
    cout << "Press 'n' and enter for the next move, 'q' to quit:" << endl;

    // Initial display of the grid
    grid.display();
    // Run the ball simulation
    while (true) {
        cin >> input;
        if (input == 'q') break;
        grid.updateBallPosition();
        grid.display();
    }
    return 0;
}
