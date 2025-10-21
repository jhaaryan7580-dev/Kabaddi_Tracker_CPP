# Kabaddi Tracker

A console-based statistics tracker for Kabaddi matches, demonstrating fundamental C++ programming concepts.

## 🏏 About This Project

The Kabaddi Tracker is a console-based application written in C++ that allows users to track statistics for Kabaddi matches. This project demonstrates fundamental programming concepts including loops, functions, arrays, and structures.

This project was developed as part of my self-learning journey in C++ programming. After learning the basics of C++ through online tutorials, I wanted to create something that combined my interest in sports with programming. The Kabaddi Tracker showcases my understanding of:

### Programming Concepts Applied
- **Functions**: Modular code organization with multiple functions for different features
- **Arrays**: Storing multiple players and their statistics
- **Loops**: Iterating through players, processing game events, and menu navigation
- **Structures**: Organizing related data (Player and Team structures)
- **Input Validation**: Ensuring user inputs are valid and within expected ranges
- **Control Flow**: Using switch statements and conditional logic for game rules

## ✨ Features

### Current Functionality (v1.0)
- ✅ **Team Setup**: Create two teams with customizable names and player rosters (up to 7 players each)
- ✅ **Raid Tracking**: Record raid attempts with touch points and bonus points
- ✅ **Score Management**: Real-time score updates for both teams
- ✅ **Player Statistics**: Track individual player performance including:
  - Total raids attempted
  - Successful raids
  - Touch points (defenders tagged)
  - Bonus points earned
  - Total points scored
- ✅ **Match Summary**: Comprehensive end-of-match statistics and winner declaration

### Menu Options
1. Record Raid for Team 1
2. Record Raid for Team 2
3. Display Current Scores
4. Display Player Statistics
5. Display Match Summary
6. End Match

## 🎯 Kabaddi Scoring (Current Implementation)

For those unfamiliar with Kabaddi, this version tracks:
- **Raid Points**: A raider scores 1 point for each defender they touch
- **Bonus Points**: Awarded when a raider crosses the bonus line (1 point)
- **Empty Raid**: If the raider doesn't score, the defending team gets 1 point

**Note**: This version focuses on raid tracking (offensive side). Tackle tracking for the defensive side is planned for future versions.

## 🛠️ Technologies Used

- **Language**: C++ (C++11 standard)
- **Compiler**: g++, MinGW, or any C++11 compatible compiler
- **Platform**: Cross-platform (Windows, Linux, macOS)

## 📦 Installation & Usage

### Prerequisites
- C++ compiler (g++, MinGW, or any C++11 compatible compiler)
- Basic understanding of command-line operations

### Compilation

**On Linux/macOS:**
```bash
g++ kabaddi_tracker.cpp -o kabaddi_tracker
./kabaddi_tracker
```

**On Windows (MinGW):**
```bash
g++ kabaddi_tracker.cpp -o kabaddi_tracker.exe
kabaddi_tracker.exe
```

**Using Visual Studio:**
1. Open Visual Studio
2. Create a new C++ Console Application project
3. Replace the default code with the contents of `kabaddi_tracker.cpp`
4. Press F5 to build and run

### How to Use

#### 1. Setup Phase
- Run the compiled program
- Enter Team 1 name and number of players (1-7)
- Enter names for each player on Team 1
- Enter Team 2 name and number of players (1-7)
- Enter names for each player on Team 2
- The match begins!

#### 2. Recording Raids
- Select option 1 or 2 from the main menu (depending on which team is raiding)
- Choose which player is performing the raid
- Enter the number of defenders touched (0-7)
- Indicate if a bonus point was earned (y/n)
- The program automatically updates scores and statistics

#### 3. Viewing Statistics
- **Option 3**: View current scores and which team is leading
- **Option 4**: View detailed player statistics for both teams
- **Option 5**: View complete match summary with all statistics

#### 4. Ending the Match
- Select option 6 to end the match
- The program will display a final match summary including:
  - Final scores
  - Winner declaration
  - Complete player statistics for both teams

## 📊 Sample Output

```
========================================
     KABADDI MATCH TRACKER v1.0        
========================================
Track your Kabaddi match statistics!
Record raids and bonus points
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

## 🏗️ Code Structure

```
kabaddi_tracker.cpp
├── Structures
│   ├── Player (stores individual player data)
│   └── Team (stores team data and array of players)
├── Setup Functions
│   ├── displayWelcome()
│   └── setupTeams()
├── Game Functions
│   ├── recordRaid()
│   ├── updatePlayerPoints()
│   └── displayScores()
├── Display Functions
│   ├── displayMenu()
│   ├── displayPlayerStats()
│   └── displayMatchSummary()
└── Utility Functions
    ├── getValidInput()
    └── getYesNo()
```

### Key Functions:
- `setupTeams()`: Initialize teams and players
- `recordRaid()`: Process raid attempts and update scores
- `updatePlayerPoints()`: Calculate player total points
- `displayScores()`: Show current match scores
- `displayPlayerStats()`: Show detailed player statistics
- `displayMatchSummary()`: Show complete match summary
- `getValidInput()`: Validate numeric user input
- `getYesNo()`: Validate yes/no user input

### Main Loop:
- Menu-driven interface
- Continuous operation until user chooses to end match
- Real-time score and statistics updates

## 📚 What I Learned

Through building this project, I learned:

- **Problem Decomposition**: Breaking down a complex problem (tracking a Kabaddi match) into smaller, manageable functions
- **Data Organization**: Using structures to organize related data efficiently
- **User Input Handling**: Implementing robust input validation to prevent errors and crashes
- **Array Manipulation**: Working with arrays to store and process multiple players' data
- **Control Flow**: Using loops and conditional statements to implement game logic
- **Code Documentation**: Writing clear comments to explain code functionality
- **Incremental Development**: Starting with core functionality before adding advanced features

## 📌 Current Version Scope

**Version 1.0 focuses on the offensive (raiding) side of Kabaddi:**
- ✅ Raid tracking with touch points and bonus points
- ✅ Real-time score management
- ✅ Player statistics and match summaries

**Planned for Version 2.0:**
- ⏳ Tackle tracking system (defensive side)
- ⏳ Player IN/OUT status management
- ⏳ ALL OUT bonus implementation
- ⏳ File I/O for saving match data

**Why this approach?**
I started with raid tracking to solidify my understanding of functions, structures, and data management. This incremental approach allowed me to master the core concepts before expanding to more complex features. The code structure is designed to easily accommodate defensive tracking in future versions.

## 🔮 Future Improvements

Potential enhancements for future versions:

- **Add tackle tracking system** (defensive side of Kabaddi)
- Save match data to files for later review
- Support for multiple matches and tournament tracking
- More detailed statistics (raid success rate, points per raid average)
- Implement "All Out" bonus points
- Add player IN/OUT status tracking
- Add time tracking for raids
- Create a graphical user interface (GUI)

## 🎓 Learning Journey

This project was created as part of my self-learning journey in C++ programming. After completing online tutorials covering loops, functions, and arrays, I wanted to apply these concepts to create something practical and meaningful. As someone interested in sports, creating a Kabaddi tracker allowed me to combine my passion with programming.

I chose to start with raid tracking because it's the aspect of Kabaddi I understand best from watching matches, and it provided a solid foundation for learning core programming concepts. The project taught me how to structure code modularly, validate user input, and manage data using structures and arrays.

## 🤖 AI Assistance Disclosure

While preparing the documentation and descriptions for this Kabaddi Tracker project, I used AI-based tools to help draft, organize, and refine the textual content. These tools assisted in improving clarity, technical explanations, and presentation.

**However, all the programming, project design, coding, and technical decisions are my own original work.** I have reviewed and understood every part of this project and am prepared to discuss it in detail during interviews or further evaluations.

## 📋 Project Purpose

This project is created for educational purposes as part of a college application portfolio. It demonstrates my ability to:
- Apply fundamental programming concepts to solve real-world problems
- Write clean, well-documented code
- Design user-friendly interfaces
- Think critically about software design and implementation
- Plan for future development and scalability

## ✅ Verification

I have personally tested this application and verified:
- ✅ Code compiles without errors using g++
- ✅ All 6 menu options work as described
- ✅ Input validation prevents crashes from invalid input
- ✅ Score calculations are accurate
- ✅ Statistics display correctly for all players
- ✅ Match summary generates properly at the end

## 📧 Contact

For questions or feedback about this project, please feel free to reach out.

---

**Note**: This is a console-based application designed to demonstrate fundamental C++ programming concepts. It serves as a practical example of applying programming basics to solve real-world problems. Version 1.0 focuses on raid tracking, with defensive features planned for future releases.

---

*Created with passion for both programming and Kabaddi* 🏏
