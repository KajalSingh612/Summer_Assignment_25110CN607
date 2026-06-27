//wap to create quiz application
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> questions = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest planet in our solar system?"
    };

    std::vector<std::vector<std::string>> options = {
        {"A) London", "B) Paris", "C) Berlin", "D) Rome"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Earth", "B) Mars", "C) Jupiter", "D) Saturn"}
    };

    std::vector<std::string> correctAnswers = {"B", "B", "C"};

    int score = 0;
    int totalQuestions = questions.size();

    for (int i = 0; i < totalQuestions; i++) {
        std::cout << "\nQuestion " << (i + 1) << ": " << questions[i] << std::endl;
        for (const auto& option : options[i]) {
            std::cout << option << std::endl;
        }

        std::string answer;
        std::cout << "Enter your answer (A/B/C/D): ";
        std::cin >> answer;

        if (answer == correctAnswers[i]) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    std::cout << "\nQuiz completed! Your score is: " << score << "/" << totalQuestions << std::endl;

    return 0;
}