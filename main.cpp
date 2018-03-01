#include <iostream>

using namespace std;

void lottery(int totalLotteryNumbers, int winningNumbers);



int main() {
    int totalLotteryNumbers;
    int winningNumbers;

    cout << "Welcome to the Lottery Generator" << endl;
    cout << "What is the highest number of your lottery?" << endl;
    cin >> totalLotteryNumbers;
    cout << "How many winning number do you need?" << endl;
    cin >> winningNumbers;
    cout << "Your winning numbers are:" << endl;

    lottery(totalLotteryNumbers, winningNumbers);

    cout << endl;

    return 0;
}
void lottery(int totalLotteryNumbers, int winningNumbers) {

    if (totalLotteryNumbers < winningNumbers);

    srand(time(NULL));

    int *numbers = new int(winningNumbers);

    for(int i = 0; i < winningNumbers; i++){

        numbers[i] = rand() % totalLotteryNumbers +1;

        for(int j = 0; j < i + 1; j++){
            if(numbers[i] == numbers[j] && i!=j){
                i--;
                break;
            }
            else if(j==i){
                cout << numbers[i] << ", " << flush;
            }
        }
    }
}