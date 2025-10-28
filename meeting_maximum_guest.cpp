#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int maxEvents(std::vector<std::vector<int>>& events) {
    int n = events.size();
    std::sort(events.begin(), events.end());

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // min-heap

    int day = events[0][0];
    int i = 0;
    int count = 0; // result: number of events attended

    while (!pq.empty() || i < n) {
        // Add all events starting today
        while (i < n && events[i][0] == day) {
            pq.push(events[i][1]);
            i++;
        }

        // Attend one event today
        if (!pq.empty()) {
            pq.pop();
            count++;
        }

        day++;

        // Remove expired events
        while (!pq.empty() && pq.top() < day) {
            pq.pop();
        }
    }

    return count;
}

int main() {
    // Example input
    std::vector<std::vector<int>> events = {
        {1, 2}, {2, 3}, {3, 4}
    };

    int result = maxEvents(events);
    std::cout << "Maximum number of events that can be attended: " << result << std::endl;

    return 0;
}