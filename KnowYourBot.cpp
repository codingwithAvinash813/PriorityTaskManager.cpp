#include <iostream>
#include <string>
using namespace std;

void chatbot() {
    string userInput;
    while (true) {
        cout << "Chatbot: Hello! You have three options:\n";
        cout << "1. Talk with chatbot\n";
        cout << "2. Know about yourself (Good things or Bad things) by entering your name\n";
        cout << "3. Know about your personality type by entering your name\n";
        cout << "Type 'Newton_Harami_Hai' to restart at any time.\n";
        
        cout << "Chatbot: Let's start! What would you like to do?\n";
        getline(cin, userInput);
        
        if (userInput == "Newton_Harami_Hai") {
            continue;
        }
        
        if (userInput == "1") {
            while (true) {
                cout << "Chatbot: What is your name?\nYou: ";
                getline(cin, userInput);
                if (userInput == "bye" || userInput == "Newton_Harami_Hai") break;
                
                cout << "Chatbot: How old are you?\nYou: ";
                getline(cin, userInput);
                if (userInput == "bye" || userInput == "Newton_Harami_Hai") break;
                
                cout << "Chatbot: What is your favorite hobby?\nYou: ";
                getline(cin, userInput);
                if (userInput == "bye" || userInput == "Newton_Harami_Hai") break;
                
                cout << "Chatbot: What is your favorite food?\nYou: ";
                getline(cin, userInput);
                if (userInput == "bye" || userInput == "Newton_Harami_Hai") break;
                
                cout << "Chatbot: Do you like traveling?\nYou: ";
                getline(cin, userInput);
                if (userInput == "bye" || userInput == "Newton_Harami_Hai") break;
                
                cout << "Chatbot: Thank you for answering my questions! Have a great day!\n";
                break;
            }
        } 
        else if (userInput == "2") {
            cout << "Chatbot: Please enter your name: ";
            getline(cin, userInput);
            
            if (userInput == "Newton_Harami_Hai") {
                continue;
            }
            
            cout << "Chatbot: Do you want to know good things or bad things about yourself?\n";
            cout << "A. Good things\nB. Bad things\n";
            cout << "Enter your choice (A or B): ";
            char subChoice;
            cin >> subChoice;
            cin.ignore();
            
            if (subChoice == 'A' || subChoice == 'a') {
                cout << "Chatbot: Based on your name, here are your good qualities:\n";
                for (char letter : userInput) {
                    letter = toupper(letter);
                    switch(letter) {
                        case 'A': cout << "A - Ambitious and adaptable\n"; break;
                        case 'B': cout << "B - Bold and benevolent\n"; break;
                        case 'C': cout << "C - Creative and compassionate\n"; break;
                        case 'D': cout << "D - Determined and dependable\n"; break;
                        case 'E': cout << "E - Energetic and empathetic\n"; break;
                        case 'F': cout << "F - Friendly and fearless\n"; break;
                        case 'G': cout << "G - Generous and goal-oriented\n"; break;
                        case 'H': cout << "H - Honest and hardworking\n"; break;
                        case 'I': cout << "I - Intelligent and inspiring\n"; break;
                        case 'J': cout << "J - Joyful and just\n"; break;
                        case 'K': cout << "K - Kind-hearted and knowledgeable\n"; break;
                        case 'L': cout << "L - Loyal and loving\n"; break;
                        case 'M': cout << "M - Motivated and mindful\n"; break;
                        case 'N': cout << "N - Noble and nurturing\n"; break;
                        case 'O': cout << "O - Optimistic and open-minded\n"; break;
                        case 'P': cout << "P - Patient and positive\n"; break;
                        case 'Q': cout << "Q - Quick-witted and quirky\n"; break;
                        case 'R': cout << "R - Responsible and respectful\n"; break;
                        case 'S': cout << "S - Strong and sincere\n"; break;
                        case 'T': cout << "T - Trustworthy and talented\n"; break;
                        case 'U': cout << "U - Understanding and unique\n"; break;
                        case 'V': cout << "V - Versatile and vibrant\n"; break;
                        case 'W': cout << "W - Wise and warm-hearted\n"; break;
                        case 'X': cout << "X - Xenial (hospitable) and extraordinary\n"; break;
                        case 'Y': cout << "Y - Youthful and yearning for knowledge\n"; break;
                        case 'Z': cout << "Z - Zealous and zestful\n"; break;
                        default: break;
                    }
                }
            } 
            else if (subChoice == 'B' || subChoice == 'b') {
                cout << "Chatbot: Sometimes, you doubt yourself too much. But remember, you are capable of great things!\n";
            } 
            else {
                cout << "Chatbot: Invalid choice. Please restart and choose a valid option.\n";
            }
        } 
        else if (userInput == "3") {
            cout << "Chatbot: Please enter your name: ";
            getline(cin, userInput);
            cout << "Chatbot: Based on your name, your personality traits are:\n";
            for (char letter : userInput) {
                letter = toupper(letter);
                switch(letter) {
                    case 'A': cout << "A - Analytical\n"; break;
                    case 'B': cout << "B - Bold\n"; break;
                    case 'C': cout << "C - Creative\n"; break;
                    case 'D': cout << "D - Determined\n"; break;
                    case 'E': cout << "E - Empathetic\n"; break;
                    case 'F': cout << "F - Friendly\n"; break;
                    case 'G': cout << "G - Generous\n"; break;
                    case 'H': cout << "H - Honest\n"; break;
                    case 'I': cout << "I - Intuitive\n"; break;
                    case 'J': cout << "J - Joyful\n"; break;
                    case 'K': cout << "K - Kind-hearted\n"; break;
                    case 'L': cout << "L - Logical\n"; break;
                    case 'M': cout << "M - Motivated\n"; break;
                    case 'N': cout << "N - Nurturing\n"; break;
                    case 'O': cout << "O - Open-minded\n"; break;
                    case 'P': cout << "P - Patient\n"; break;
                    case 'Q': cout << "Q - Quick-witted\n"; break;
                    case 'R': cout << "R - Resilient\n"; break;
                    case 'S': cout << "S - Supportive\n"; break;
                    case 'T': cout << "T - Thoughtful\n"; break;
                    case 'U': cout << "U - Understanding\n"; break;
                    case 'V': cout << "V - Versatile\n"; break;
                    case 'W': cout << "W - Wise\n"; break;
                    case 'X': cout << "X - Xenial (hospitable)\n"; break;
                    case 'Y': cout << "Y - Youthful\n"; break;
                    case 'Z': cout << "Z - Zealous\n"; break;
                    default: break;
                }
            }
        }
    }
}

int main() {
    chatbot();
    return 0;
}




