#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x, y;
};

// Hàm tính diện tích tam giác từ 3 điểm
double triangleArea(Point a, Point b, Point c)
{
    return fabs((a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) / 2.0);
}

// Hàm DP tam giác hóa đa giác lồi
double minTriangulation(vector<Point> &poly)
{
    int n = poly.size();
    vector<vector<double>> dp(n, vector<double>(n, 0));

    // len = khoảng cách giữa i và j
    for (int len = 2; len < n; len++)
    {
        for (int i = 0; i + len < n; i++)
        {
            int j = i + len;
            dp[i][j] = 1e18; // khởi tạo vô cùng lớn
            for (int k = i + 1; k < j; k++)
            {
                double cost = dp[i][k] + dp[k][j] + triangleArea(poly[i], poly[k], poly[j]);
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    return dp[0][n - 1];
}

int main()
{
    int n;
    cout << "Nhap so dinh n: ";
    cin >> n;
    vector<Point> poly(n);
    cout << "Nhap toa do cac dinh (x y), theo thu tu CCW:\n";
    for (int i = 0; i < n; i++)
        cin >> poly[i].x >> poly[i].y;

    double result = minTriangulation(poly);
    cout << "Tong dien tich nho nhat khi tam giac hoa = " << result << "\n";
    return 0;
}
