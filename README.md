# Kabaddi Tracker - C++ Console Application

## Project Overview

The Kabaddi Tracker is a console-based application written in C++ that allows users to track statistics for Kabaddi matches. This project demonstrates fundamental programming concepts including loops, functions, arrays, and structures.

## About This Project

This project was developed as part of my self-learning journey in C++ programming. After learning the basics of C++ through online tutorials, I wanted to create something that combined my interest in sports with programming. The Kabaddi Tracker showcases my understanding of:

- **Functions**: Modular code organization with multiple functions for different features
- **Arrays**: Storing multiple players and their statistics
- **Loops**: Iterating through players, processing game events, and menu navigation
- **Structures**: Organizing related data (Player and Team structures)
- **Input Validation**: Ensuring user inputs are valid and within expected ranges
- **Control Flow**: Using switch statements and conditional logic for game rules

## Features

### Core Functionality
- **Team Setup**: Create two teams with customizable names and player rosters (up to 7 players each)
- **Raid Tracking**: Record raid attempts with touch points and bonus points
- **Score Management**: Real-time score updates for both teams
- **Player Statistics**: Track individual player performance including:
  - Total raids attempted
  - Successful raids
  - Bonus points earned
  - Tackle points
  - Total points scored
- **Match Summary**: Comprehensive end-of-match statistics and winner declaration

### Menu Options
1. Record Raid for Team 1
2. Record Raid for Team 2
3. Display Current Scores
4. Display Player Statistics
5. Display Match Summary
6. End Match

## How Kabaddi Scoring Works

For those unfamiliar with Kabaddi:
- **Raid Points**: A raider scores 1 point for each defender they touch
- **Bonus Points**: Awarded when a raider crosses the bonus line (1 point)
- **Tackle Points**: Defending team scores 1 point if they successfully tackle the raider
- **All Out**: When all players of a team are out, the opposing team gets 2 bonus points (simplified in this version)

## Technical Requirements

### Prerequisites
- C++ compiler (g++, MinGW, or any C++11 compatible compiler)
- Basic understanding of command-line operations

### Compilation Instructions

#### On Linux/Mac:
```bash
g++ kabaddi_tracker.cpp -o kabaddi_tracker
./kabaddi_tracker
```

#### On Windows (with MinGW):
```bash
g++ kabaddi_tracker.cpp -o kabaddi_tracker.exe
kabaddi_tracker.exe
```

#### On Windows (with Visual Studio):
1. Open Visual Studio
2. Create a new C++ Console Application project
3. Replace the default code with the contents of `kabaddi_tracker.cpp`
4. Press F5 to build and run

## Usage Guide

### Starting a Match

1. Run the compiled program
2. Enter Team 1 name and number of players (1-7)
3. Enter names for each player on Team 1
4. Enter Team 2 name and number of players (1-7)
5. Enter names for each player on Team 2
6. The match begins!

### Recording a Raid

1. Select option 1 or 2 from the main menu (depending on which team is raiding)
2. Choose which player is performing the raid
3. Enter the number of defenders touched (0-7)
4. Indicate if a bonus point was earned (y/n)
5. The program automatically updates scores and statistics

### Viewing Statistics

- **Option 3**: View current scores and which team is leading
- **Option 4**: View detailed player statistics for both teams
- **Option 5**: View complete match summary with all statistics

### Ending the Match

- Select option 6 to end the match
- The program will display a final match summary including:
  - Final scores
  - Winner declaration
  - Complete player statistics for both teams

## Sample Output

```
========================================
     KABADDI MATCH TRACKER v1.0        
========================================
Track your Kabaddi match statistics!
Record raids, tackles, and bonus points
========================================

Enter Team 1 name: Warriors
Enter number of players for Warriors (1-7): 3
Enter name for Player 1: Rahul
Enter name for Player 2: Amit
Enter name for Player 3: Vijay

Enter Team 2 name: Champions
Enter number of players for Champions (1-7): 3
Enter name for Player 1: Suresh
Enter name for Player 2: Ravi
Enter name for Player 3: Kiran

=== MATCH STARTED ===
Warriors vs Champions

========================================
              MAIN MENU                 
========================================
1. Record Raid (Team 1)
2. Record Raid (Team 2)
3. Display Current Scores
4. Display Player Statistics
5. Display Match Summary
6. End Match
========================================
```

## Code Structure

### Main Components

1. **Structures**:
   - `Player`: Stores individual player statistics
   - `Team`: Stores team information and array of players

2. **Key Functions**:
   - `setupTeams()`: Initialize teams and players
   - `recordRaid()`: Process raid attempts and update scores
   - `displayScores()`: Show current match scores
   - `displayPlayerStats()`: Show detailed player statistics
   - `displayMatchSummary()`: Show complete match summary
   - `getValidInput()`: Validate user input

3. **Main Loop**:
   - Menu-driven interface
   - Continuous operation until user chooses to end match
   - Real-time score and statistics updates

## Learning Outcomes

Through building this project, I learned:

1. **Problem Decomposition**: Breaking down a complex problem (tracking a Kabaddi match) into smaller, manageable functions
2. **Data Organization**: Using structures to organize related data efficiently
3. **User Input Handling**: Implementing robust input validation to prevent errors
4. **Array Manipulation**: Working with arrays to store and process multiple players' data
5. **Control Flow**: Using loops and conditional statements to implement game logic
6. **Code Documentation**: Writing clear comments to explain code functionality

## Future Enhancements

Potential improvements for future versions:
- Save match data to files for later review
- Support for multiple matches and tournament tracking
- More detailed statistics (raid success rate, defensive efficiency)
- Implement "All Out" bonus points
- Add time tracking for raids
- Create a graphical user interface (GUI)

## About the Developer

This project was created as part of my self-learning journey in C++ programming. After completing online tutorials covering loops, functions, and arrays, I wanted to apply these concepts to create something practical and meaningful. As someone interested in sports, creating a Kabaddi tracker allowed me to combine my passion with programming.

## License

This project is created for educational purposes as part of a college application portfolio.

## Contact

For questions or feedback about this project, please feel free to reach out.

---

**Note**: This is a console-based application designed to demonstrate fundamental C++ programming concepts. It serves as a practical example of applying programming basics to solve real-world problems.