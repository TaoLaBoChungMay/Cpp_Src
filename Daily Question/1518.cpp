#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;
    int numWaterBottles = numBottles; // Tổng số chai đã uống lúc đầu

    // Sau khi uống xong n chai thì hiển nhiên n chai đó sẽ trở thành chai rỗng
    // số chai còn lại = số chai ban đầu
    int remain = numBottles;

    while (remain >= numExchange)
    {
        // Chai mới được tạo thành từ chai còn lại / số chai cần đổi
        int newBottle = remain / numExchange;

        numWaterBottles += newBottle;

        remain = newBottle + remain % numExchange; //  Tính lại số chai rỗng
        // Chai dư = Chai vừa uống + phần dư của chai chưa được đổi
    }

    cout << numWaterBottles;
}