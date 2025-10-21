# Kabaddi Tracker - Project Description for Portfolio

## Project Overview

**Project Name:** Kabaddi Tracker  
**Language:** C++  
**Type:** Console Application  
**Development Period:** Self-learning project during gap year 
**Purpose:** Apply fundamental C++ concepts to create a practical sports statistics tracker

## Motivation

After reconnecting with programming following my 10th-grade website project, I wanted to create something that combined my interest in sports with my newly acquired C++ skills. Kabaddi, being a popular sport in India, provided an excellent opportunity to build a meaningful application while demonstrating my understanding of programming fundamentals.

## Technical Implementation

### Core Concepts Demonstrated

1. **Functions (Modular Programming)**
   - Created 10+ specialized functions for different features
   - Each function handles a specific responsibility (setup, recording, display)
   - Demonstrates understanding of code organization and reusability
   - Examples: `setupTeams()`, `recordRaid()`, `displayScores()`

2. **Arrays (Data Storage)**
   - Used arrays to store multiple players per team (up to 7 players)
   - Implemented player statistics tracking using array indexing
   - Demonstrates understanding of fixed-size data structures
   - Example: `Player players[MAX_PLAYERS]`

3. **Loops (Iteration)**
   - For loops: Iterating through player arrays for setup and display
   - While loops: Main game loop for continuous operation
   - Demonstrates understanding of repetitive operations
   - Used in: player setup, statistics display, menu navigation

4. **Structures (Data Organization)**
   - Created `Player` structure to group related player data
   - Created `Team` structure to organize team information
   - Demonstrates understanding of custom data types
   - Shows ability to model real-world entities in code

5. **Input Validation**
   - Implemented `getValidInput()` function to ensure data integrity
   - Handles invalid inputs gracefully
   - Prevents program crashes from unexpected user input
   - Demonstrates defensive programming practices

## Features Implemented

### User Interface
- Welcome screen with program information
- Menu-driven interface for easy navigation
- Clear prompts and instructions
- Formatted output for readability

### Team Management
- Support for two teams with custom names
- Configurable player count (1-7 players per team)
- Individual player tracking
- Team score aggregation

### Statistics Tracking
- **Per Player:**
  - Total raids attempted
  - Successful raids
  - Bonus points earned
  - Tackle points
  - Total points scored

- **Per Team:**
  - Real-time score updates
  - Team-wise statistics
  - Match summary with winner declaration

### Game Operations
- Record raids with touch points and bonus points
- Automatic score calculation
- Live score display
- Comprehensive match summary

## Code Quality

### Documentation
- Comprehensive comments explaining code logic
- Function descriptions with purpose statements
- Clear variable naming conventions
- Structured code organization

### Best Practices
- Modular design with single-responsibility functions
- Consistent coding style
- Error handling and input validation
- Use of constants for configuration values

## Learning Outcomes

Through this project, I learned:

1. **Problem Solving:** Breaking down a complex problem (tracking a Kabaddi match) into smaller, manageable components
2. **Data Modeling:** Representing real-world entities (players, teams) using programming constructs
3. **User Experience:** Creating an intuitive interface for non-technical users
4. **Code Organization:** Structuring code for maintainability and readability
5. **Testing:** Verifying functionality through systematic testing

## Challenges Overcome

1. **Input Validation:** Ensuring the program handles invalid inputs without crashing
2. **Data Persistence:** Maintaining player and team statistics throughout the match
3. **Score Calculation:** Implementing correct Kabaddi scoring rules
4. **User Interface:** Creating a clear and intuitive menu system

## Future Enhancements

If I were to expand this project, I would add:
- File I/O to save and load match data
- Support for multiple matches and tournaments
- More detailed statistics (success rates, averages)
- Implementation of "All Out" bonus points
- Graphical user interface (GUI)

## Relevance to College Application

This project demonstrates:
- **Self-motivation:** Took initiative to learn and apply programming concepts
- **Practical Application:** Applied theoretical knowledge to solve real problems
- **Cultural Connection:** Created something relevant to my background and interests
- **Technical Foundation:** Built a solid understanding of programming fundamentals
- **Growth Mindset:** Continuously learning and improving coding skills

## How to Use This Project

1. **Compilation:** `g++ kabaddi_tracker.cpp -o kabaddi_tracker`
2. **Execution:** `./kabaddi_tracker`
3. **Follow prompts:** Set up teams and record match events
4. **View statistics:** Check scores and player performance anytime
5. **End match:** View comprehensive match summary

## Technical Specifications

- **Language:** C++ (C++11 standard)
- **Compiler:** g++ or any C++11 compatible compiler
- **Platform:** Cross-platform (Linux, macOS, Windows)
- **Dependencies:** Standard C++ library only
- **Lines of Code:** ~400 lines
- **Functions:** 10+ specialized functions
- **Data Structures:** 2 custom structures (Player, Team)

## Conclusion

The Kabaddi Tracker represents my journey from learning basic C++ concepts to applying them in a practical, meaningful project. It showcases my ability to think programmatically, solve problems systematically, and create functional software that serves a real purpose. This project is a testament to my commitment to learning programming and my readiness to tackle more complex challenges in computer science.