#include <iostream>
#include <cmath>

double tips = 0;
double totalHrs = 0;
double totalSplit = 0;
double jordansHrs = 0;
double zekesHrs = 0;
double bertsHrs = 0;
double andysHrs = 0;
int x;


int main() {
    //input for the tips 
    std::cout << "Enter the Tips" << "\n";
    std::cin >> tips;
    std::cout << "Total tips: " << tips << "\n";
    //user input for each persons hours 
    std::cout << "Enter Jordans Hours: " << "\n";
    std::cin >> jordansHrs;
    std::cout << "Enter Zekes Hours: " << "\n";
    std::cin >> zekesHrs;
    std::cout << "Enter Berts Hours: " << "\n";
    std::cin >> bertsHrs;
    std::cout << "Enter Andys Hours: " << "\n";
    std::cin >> andysHrs;
    //adds all the hours together 
    totalHrs = jordansHrs + zekesHrs + bertsHrs + andysHrs;

    std::cout << "Total hours:" << totalHrs << "\n";
    //divides the tips by the total hours of everyones hours
    totalSplit = tips / totalHrs;
    std::cout << "Total split: " << totalSplit << "\n";

    
    //multiplies to result of tips divded by the hours of each individual 
    std::cout << "Jordans Cut: " << round(jordansHrs * totalSplit) << "\n";
    std::cout << "Berts cut: "   << round(bertsHrs * totalSplit)   << "\n";
    std::cout << "Zekes cut: "   << round(zekesHrs * totalSplit)  << "\n";
    std::cout << "andys cut: "   << round(andysHrs * totalSplit) << "\n";

    //exits the program
    std::cout << "Press Enter to exit...";
    std::cin.get();
    
return 0;
}