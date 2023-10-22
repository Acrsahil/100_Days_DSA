#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, H, M;
        cin >> n >> H >> M; // Number of alarms, bedtime hours, and bedtime minutes

        int bedtime_minutes = H * 60 + M; // Convert bedtime to minutes after midnight
        int min_time_diff = 24 * 60; // Initialize with a large value

        for (int i = 0; i < n; i++) {
            int hi, mi;
            cin >> hi >> mi; // Alarm hours and minutes

            int alarm_minutes = hi * 60 + mi; // Convert alarm time to minutes after midnight

            // Calculate the time difference in minutes
            int time_diff = (alarm_minutes - bedtime_minutes + 24 * 60) % (24 * 60);

            // Update the minimum time difference
            if (time_diff < min_time_diff) {
                min_time_diff = time_diff;
            }
        }

        // Convert the minimum time difference back to hours and minutes
        int hours = min_time_diff / 60;
        int minutes = min_time_diff % 60;

        cout << hours << " " << minutes << endl; // Output the result
    }

    return 0;
}
