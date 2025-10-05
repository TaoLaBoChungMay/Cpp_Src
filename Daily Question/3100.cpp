#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;
    int maxWaterBottles = numBottles; // Tổng số chai đã uống lúc đầu

    int Empty_Bottles = numBottles; // Số chai rỗng sau khi uống lần đầu
    while (Empty_Bottles >= numExchange)
    {
        Empty_Bottles -= numExchange; // Số chai rỗng bị giảm sau khi đổi
        numExchange++;                // Tăng số lượng chai rỗng cần đổi
        maxWaterBottles++;            // Tăng maxBottles lên thêm 1
        Empty_Bottles += 1;           // Sau khi uống xong thì sẽ có thêm 1 chai rỗng
    }

    cout << maxWaterBottles;
}