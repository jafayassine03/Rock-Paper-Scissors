Rock Paper Scissors – Yassine Challenge 👑

A terminal-based Rock Paper Scissors game written in C, featuring custom dialogue, score tracking, and dynamic rounds.

This version includes 3 minimum rounds, handles draws, and ensures that a crown is always awarded to the final winner.

Perfect for beginners to practice C programming concepts in a fun and interactive way.

🧠 Game Rules

Rock beats Scissors

Scissors beats Paper

Paper beats Rock

Minimum 3 rounds are played

Draws do not count as wins but are allowed

If after 3 rounds both players have equal wins, extra rounds are played until someone is ahead

The winner takes the crown 👑

🎮 Gameplay Overview

The game starts with Yassine introducing himself:

"Hello! My name is Yassine and I wanna beat you at Rock Paper Scissors."

The player enters their name. Yassine explains the rules and sets up the challenge.

Each round:

Player chooses Rock, Paper, or Scissors

Yassine randomly chooses

The round result is displayed

Scores are updated

Draws are announced but do not count toward the 3-round total, allowing for extra rounds if necessary.

After 3 rounds (or more if needed), the winner is declared and awarded the crown:

Player wins → "CONGRATS <name>! You beat Yassine and take the crown 👑"

Yassine wins → "Yassine dominates the game and takes the crown 👑. Better luck next time, <name>!"

🛠️ Concepts Used

Loops (while)

Conditional statements (if / else)

Random number generation (rand())

User input handling (scanf)

Score tracking

Terminal-based interaction

▶️ How to Compile and Run

Compile the code:

gcc rps_yassine.c -o rps


Run the game:

./rps

License

Totally free to use! Play around with it and make it your own 😄


