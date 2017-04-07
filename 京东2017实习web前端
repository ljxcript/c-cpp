
/*
编程题 | 20分 1/2
拍卖
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
公司最近新研发了一种产品，共生产了n件。有m个客户想购买此产品，第i个客户出价Vi元。为了确保公平，公司决定要以一个固定的价格出售产品。每一个出价不低于要价的客户将会以公司决定的价格购买一件产品，余下的将会被拒绝购买。请你找出能让公司利润最大化的售价。如果有多种定价方案可以最大化总收入，输出最小的定价。
输入
输入第一行二个整数n(1<=n<=1000),m(1<=m<=1000)，分别表示产品数和客户数。
接下来第二行m个整数Vi(1<=Vi<=1000000)，分别表示第i个客户的出价。
输出
输出一行一个整数，代表能够让公司利润最大化的最小售价。

样例输入
5 4
2 8 10 7
样例输出
7*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    vector<int> prices;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        prices.push_back(temp);
    }
    sort(prices.begin(), prices.end());
    int max = 0;
    int result = 0;
    for (int i = 0; i < prices.size(); i++) {
        int price = prices[i];
        int profit;
        if (n >= prices.size()-i) {
            profit = price * (prices.size()-i);
        } else {
        	continue;
        }

        if (profit > max) {
            max = profit;
            result = prices[i];
        }
    }
    cout << result << endl;
}
