/*
 * KABADDI TRACKER - A C++ Console Application
 * Author: Self-taught project for learning C++
 * Description: This program tracks Kabaddi match statistics including scores,
 *              raids, and player performance.
 * 
 * Features:
 * - Track two teams with multiple players
 * - Record raid points and bonus points
 * - Display live scores and match statistics
 * - Show player-wise performance
 * 
 * Current Version: 1.0
 * Focus: Raid tracking (offensive side of Kabaddi)
 * 
 * Future Enhancements:
 * - Add tackle tracking system (defensive side)
 * - Implement ALL OUT bonus
 * - Add file I/O for saving match data
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Maximum number of players per team
const int MAX_PLAYERS = 7;

// Structure to store player information
struct Player {
    string name;
    int raidsAttempted;
    int successfulRaids;
    int touchPoints;        // Total touch points earned
    int bonusPoints;
    int tacklePoints;       // Reserved for future implementation
    int totalPoints;
};

// Structure to store team information
struct Team {
    string teamName;
    Player players[MAX_PLAYERS];
    int playerCount;
    int totalScore;
};

// Function declarations
void displayWelcome();
void setupTeams(Team &team1, Team &team2);
void displayMenu();
void recordRaid(Team &attackingTeam, Team &defendingTeam);
void displayScores(Team team1, Team team2);
void displayPlayerStats(Team team);
void displayMatchSummary(Team team1, Team team2);
void updatePlayerPoints(Player &player);
int getValidInput(int min, int max);
char getYesNo();

// Main function
int main() {
    Team team1, team2;
    int choice;
    bool matchInProgress = true;
    
    displayWelcome();
    setupTeams(team1, team2);
    
    cout << "\n=== MATCH STARTED ===\n";
    cout << team1.teamName << " vs " << team2.teamName << "\n\n";
    
    // Main game loop
    while (matchInProgress) {
        displayMenu();
        choice = getValidInput(1, 6);
        
        switch (choice) {
            case 1:
                recordRaid(team1, team2);
                break;
            case 2:
                recordRaid(team2, team1);
                break;
            case 3:
                displayScores(team1, team2);
                break;
            case 4:
                cout << "\n--- " << team1.teamName << " Player Statistics ---\n";
                displayPlayerStats(team1);
                cout << "\n--- " << team2.teamName << " Player Statistics ---\n";
                displayPlayerStats(team2);
                break;
            case 5:
                displayMatchSummary(team1, team2);
                break;
            case 6:
                cout << "\n=== ENDING MATCH ===\n";
                displayMatchSummary(team1, team2);
                matchInProgress = false;
                break;
        }
    }
    
    cout << "\nThank you for using Kabaddi Tracker!\n";
    return 0;
}

// Display welcome message
void displayWelcome() {
    cout << "========================================\n";
    cout << "     KABADDI MATCH TRACKER v1.0        \n";
    cout << "========================================\n";
    cout << "Track your Kabaddi match statistics!\n";
    cout << "Record raids and bonus points\n";
    cout << "========================================\n\n";
}

// Setup teams and players
void setupTeams(Team &team1, Team &team2) {
    // Initialize team scores
    team1.totalScore = 0;
    team2.totalScore = 0;
    
    // Setup Team 1
    cout << "Enter Team 1 name: ";
    getline(cin, team1.teamName);
    cout << "Enter number of players for " << team1.teamName << " (1-" << MAX_PLAYERS << "): ";
    team1.playerCount = getValidInput(1, MAX_PLAYERS);
    
    // Input player names for Team 1
    for (int i = 0; i < team1.playerCount; i++) {
        cout << "Enter name for Player " << (i + 1) << ": ";
        getline(cin, team1.players[i].name);
        
        // Initialize player statistics
        team1.players[i].raidsAttempted = 0;
        team1.players[i].successfulRaids = 0;
        team1.players[i].touchPoints = 0;
        team1.players[i].bonusPoints = 0;
        team1.players[i].tacklePoints = 0;
        team1.players[i].totalPoints = 0;
    }
    
    cout << "\n";
    
    // Setup Team 2
    cout << "Enter Team 2 name: ";
    getline(cin, team2.teamName);
    cout << "Enter number of players for " << team2.teamName << " (1-" << MAX_PLAYERS << "): ";
    team2.playerCount = getValidInput(1, MAX_PLAYERS);
    
    // Input player names for Team 2
    for (int i = 0; i < team2.playerCount; i++) {
        cout << "Enter name for Player " << (i + 1) << ": ";
        getline(cin, team2.players[i].name);
        
        // Initialize player statistics
        team2.players[i].raidsAttempted = 0;
        team2.players[i].successfulRaids = 0;
        team2.players[i].touchPoints = 0;
        team2.players[i].bonusPoints = 0;
        team2.players[i].tacklePoints = 0;
        team2.players[i].totalPoints = 0;
    }
}

// Display main menu
void displayMenu() {
    cout << "\n========================================\n";
    cout << "              MAIN MENU                 \n";
    cout << "========================================\n";
    cout << "1. Record Raid (Team 1)\n";
    cout << "2. Record Raid (Team 2)\n";
    cout << "3. Display Current Scores\n";
    cout << "4. Display Player Statistics\n";
    cout << "5. Display Match Summary\n";
    cout << "6. End Match\n";
    cout << "========================================\n";
    cout << "Enter your choice: ";
}

// Record a raid
void recordRaid(Team &attackingTeam, Team &defendingTeam) {
    int playerIndex, touches, bonusPoint;
    
    cout << "\n--- Recording Raid for " << attackingTeam.teamName << " ---\n";
    
    // Display players and select raider
    cout << "Select raider:\n";
    for (int i = 0; i < attackingTeam.playerCount; i++) {
        cout << (i + 1) << ". " << attackingTeam.players[i].name << "\n";
    }
    cout << "Enter player number: ";
    playerIndex = getValidInput(1, attackingTeam.playerCount) - 1;
    
    // Record raid attempt
    attackingTeam.players[playerIndex].raidsAttempted++;
    
    // Get touch points (defenders tagged)
    cout << "Enter number of defenders touched (0-7): ";
    touches = getValidInput(0, 7);
    
    // Check for bonus point
    cout << "Did the raider get a bonus point? (y/n): ";
    char gotBonus = getYesNo();
    
    bonusPoint = (gotBonus == 'y') ? 1 : 0;
    
    // Update statistics if raid was successful
    if (touches > 0 || bonusPoint > 0) {
        attackingTeam.players[playerIndex].successfulRaids++;
        attackingTeam.players[playerIndex].touchPoints += touches;
        attackingTeam.players[playerIndex].bonusPoints += bonusPoint;
        
        // Calculate total points for this raid
        int raidPoints = touches + bonusPoint;
        attackingTeam.totalScore += raidPoints;
        
        // Update player's total points
        updatePlayerPoints(attackingTeam.players[playerIndex]);
        
        cout << "\nSuccessful Raid! " << attackingTeam.players[playerIndex].name 
             << " scored " << raidPoints << " point(s)!\n";
    } else {
        cout << "\nEmpty Raid! " << attackingTeam.players[playerIndex].name 
             << " didn't score. Defending team gets a point!\n";
        defendingTeam.totalScore++;
    }
}

// Update player's total points
void updatePlayerPoints(Player &player) {
    // Calculate total points from raids only
    // In future versions, will add tackle points here
    player.totalPoints = player.touchPoints + player.bonusPoints;
}

// Display current scores
void displayScores(Team team1, Team team2) {
    cout << "\n========================================\n";
    cout << "          CURRENT SCORES                \n";
    cout << "========================================\n";
    cout << left << setw(20) << team1.teamName << ": " << team1.totalScore << "\n";
    cout << left << setw(20) << team2.teamName << ": " << team2.totalScore << "\n";
    cout << "========================================\n";
    
    if (team1.totalScore > team2.totalScore) {
        cout << team1.teamName << " is leading by " 
             << (team1.totalScore - team2.totalScore) << " point(s)!\n";
    } else if (team2.totalScore > team1.totalScore) {
        cout << team2.teamName << " is leading by " 
             << (team2.totalScore - team1.totalScore) << " point(s)!\n";
    } else {
        cout << "Match is tied!\n";
    }
}

// Display player statistics for a team
void displayPlayerStats(Team team) {
    cout << "\n" << left << setw(15) << "Player Name" 
         << setw(10) << "Raids" 
         << setw(12) << "Successful"
         << setw(10) << "Touches"
         << setw(10) << "Bonus"
         << setw(10) << "Total Pts" << "\n";
    cout << string(70, '-') << "\n";
    
    // Loop through all players and display their stats
    for (int i = 0; i < team.playerCount; i++) {
        cout << left << setw(15) << team.players[i].name
             << setw(10) << team.players[i].raidsAttempted
             << setw(12) << team.players[i].successfulRaids
             << setw(10) << team.players[i].touchPoints
             << setw(10) << team.players[i].bonusPoints
             << setw(10) << team.players[i].totalPoints << "\n";
    }
}

// Display match summary
void displayMatchSummary(Team team1, Team team2) {
    cout << "\n========================================\n";
    cout << "          MATCH SUMMARY                 \n";
    cout << "========================================\n";
    cout << "Match: " << team1.teamName << " vs " << team2.teamName << "\n\n";
    
    cout << "Final Score:\n";
    cout << left << setw(20) << team1.teamName << ": " << team1.totalScore << "\n";
    cout << left << setw(20) << team2.teamName << ": " << team2.totalScore << "\n\n";
    
    // Determine winner
    if (team1.totalScore > team2.totalScore) {
        cout << "*** " << team1.teamName << " WINS! ***\n";
        cout << "Winning margin: " << (team1.totalScore - team2.totalScore) << " points\n";
    } else if (team2.totalScore > team1.totalScore) {
        cout << "*** " << team2.teamName << " WINS! ***\n";
        cout << "Winning margin: " << (team2.totalScore - team1.totalScore) << " points\n";
    } else {
        cout << "*** MATCH TIED! ***\n";
    }
    
    cout << "\n--- Team Statistics ---\n";
    cout << "\n" << team1.teamName << " Players:\n";
    displayPlayerStats(team1);
    cout << "\n" << team2.teamName << " Players:\n";
    displayPlayerStats(team2);
    
    cout << "\n========================================\n";
}

// Get valid integer input within range
int getValidInput(int min, int max) {
    int input;
    while (true) {
        cin >> input;
        
        // Check if input is valid
        if (cin.fail() || input < min || input > max) {
            cin.clear(); // Clear error flag
            cin.ignore(10000, '\n'); // Discard invalid input
            cout << "Invalid input! Please enter a number between " 
                 << min << " and " << max << ": ";
        } else {
            cin.ignore(); // Clear newline from buffer
            return input;
        }
    }
}

// Get yes/no input
char getYesNo() {
    char input;
    while (true) {
        cin >> input;
        cin.ignore(); // Clear buffer
        
        // Convert to lowercase
        if (input >= 'A' && input <= 'Z') {
            input = input + 32; // Convert to lowercase
        }
        
        if (input == 'y' || input == 'n') {
            return input;
        } else {
            cout << "Invalid input! Please enter 'y' for yes or 'n' for no: ";
        }
    }
}
