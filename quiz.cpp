#include <iostream>
using namespace std;

int main() {
    string questions[5] = {
        "1. What is the capital of India?",
        "2. Which language is used for web page structure?",
        "3. How many days are there in a week?",
        "4. Which operator is used for remainder in C++?",
        "5. What is 5 + 7?"
    };

    string options[5][4] = {
        {"A. Mumbai", "B. Delhi", "C. Chennai", "D. Kolkata"},
        {"A. CSS", "B. Python", "C. HTML", "D. Java"},
        {"A. 5", "B. 6", "C. 7", "D. 8"},
        {"A. /", "B. %", "C. *", "D. +"},
        {"A. 10", "B. 11", "C. 12", "D. 13"}
    };

    char answers[5] = {'B', 'C', 'C', 'B', 'C'};

    char userAnswer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n\n";

    for (int i = 0; i < 5; i++) {
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == answers[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }

        cout << "-------------------\n";
    }

    cout << "\nQuiz Finished!\n";
    cout << "Your Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}