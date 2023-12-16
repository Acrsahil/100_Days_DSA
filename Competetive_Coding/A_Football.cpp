#include <iostream>
#include <unordered_map>

int main() {
    // Read the number of lines
    int n;
    std::cin >> n;

    // Initialize unordered_map to count the goals for each team
    std::unordered_map<std::string, int> goals;

    // Iterate through each goal description
    for (int i = 0; i < n; ++i) {
        std::string team;
        std::cin >> team;

        // Update the goal count for the team
        goals[team]++;
    }

    // Find the team with the maximum number of goals
    std::string winner;
    int maxGoals = 0;

    for (const auto& pair : goals) {
        if (pair.second > maxGoals) {
            maxGoals = pair.second;
            winner = pair.first;
        }
    }


    // Print the name of the winning team
    std::cout << winner << std::endl;

    return 0;
}
