#include <iostream>
#include <vector>
#include <algorithm>

struct Participant {
    int index;
    int points;
    int penalty;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if (p1.points == p2.points) {
        return p1.penalty < p2.penalty;
    }
    return p1.points > p2.points;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m, h;
        std::cin >> n >> m >> h;

        std::vector<std::vector<int> > times(n, std::vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> times[i][j];
            }
        }

        std::vector<Participant> participants(n);
        for (int i = 0; i < n; i++) {
            participants[i].index = i + 1;
            participants[i].points = 0;
            participants[i].penalty = 0;
        }

        for (int j = 0; j < m; j++) {
            std::vector<std::pair<int, int> > order;

            for (int i = 0; i < n; i++) {
                order.push_back({ times[i][j], i });
            }

            std::sort(order.begin(), order.end());

            int remainingTime = h;
            int solvedParticipants = 0;

            for (int k = 0; k < n; k++) {
                int participantIndex = order[k].second;
                int solveTime = order[k].first;

                if (solveTime <= remainingTime) {
                    participants[participantIndex].points++;
                    participants[participantIndex].penalty += solveTime;
                    remainingTime -= solveTime;
                    solvedParticipants++;
                } else {
                    break;
                }
            }

            if (solvedParticipants > 0) {
                participants[order[0].second].penalty += remainingTime;
            }
        }

        std::sort(participants.begin(), participants.end(), compareParticipants);

        int rudolfPlace = 1;
        for (int i = 0; i < n; i++) {
            if (participants[i].index == 1) {
                std::cout << rudolfPlace << std::endl;
                break;
            }
            rudolfPlace++;
        }
    }

    return 0;
}
