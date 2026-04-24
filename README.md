Harry Jon: The Escape Game

A choice-based C++ console application where players must guess the correct key to escape Harry Jon's game.

Background
Harry Jon is a character who plays a high-stakes game with his captives every mid-month Sunday. He flips a coin to decide your chances. If you guess correctly, you are released; if not, there are no second tries in his world.

Features
Multiple Difficulty Levels**: 
 **Hard**: 1 attempt to escape.
 **Medium**: 2 attempts to escape.
 **Easy**: 3 attempts to escape.
 **Dynamic Menu**: Options to start the game, view high scores, and access simulated settings for graphics and audio.
 **Classic Gameplay**: A numeric choice-based system that tests your luck across 5 different options.

 Technical Details
 **Language**: C++
 **Core Logic**:
  - `switch-case` structures for handling menu navigation and game choices.
  - `if-else` statements for difficulty logic.
  - `for` loops to manage the number of "keys" (attempts) based on difficulty.
  - `goto` labels for the restart mechanism.

 How to Run
1. Ensure you have a C++ compiler installed (e.g., G++, MSVC).
2. Copy the code into a file named `game.cpp`.
3. Compile the file:
   ```bash
   g++ game.cpp -o HarryJonGame
