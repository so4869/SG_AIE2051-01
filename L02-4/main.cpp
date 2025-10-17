#include <iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;
    int count = 0;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {

        cout << "Enter a number: ";
        cin >> number;

        // Break statement: exit the loop if number is 0
        if (number == 0) {
            //TODO
            std::cout << "Found " << number << ". Stopping the loop." << std::endl;
            break;
        }

        // Continue statement: skip negative numbers
        if (number < 0) {
            //TODO
            std::cout << "Negative number skipped." << std::endl;
            continue;
        }

        // TODO
        // Process positive numbers
        sum += number;
        std::cout << "Added " << number << " to the sum." << std::endl;

        count++;
    }

    // Calculate and display the average
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Sum of positive numbers: " << sum << endl;
        cout << "Count of positive numbers: " << count << endl;
        cout << "Average of positive numbers: " << average << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }

    return 0;

}