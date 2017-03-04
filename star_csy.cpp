/*
    Date: 2017.03.04
    Debug: RyQ
    
    1. 一般来讲，所有变量（除循环变量 i, j, k 这些和临时变量），都会在程序的一开始声明，同时添加注释，表明这些变量是干什么用的。把同一类型的放在一起，这样看起来更清晰。
    2. 循环变量 i, j, k 这些，当遇到循环嵌套（比如你这段代码）时，有必要的话可以写一下每个循环是干什么的，这样可以梳理清楚思路
    3. 在函数前面加注释，表明函数用途。

    总而言之，写程序就是要加注释。新手上路没有加注释的习惯，很容易出交通事故的，debug 的时候会痛心疾首的，根本不知道三秒前的自己在想什么。

    交作业之前切记把我的所有注释删掉！！！要不会被老师发现的！！！
    交作业之前切记把我的所有注释删掉！！！要不会被老师发现的！！！
    交作业之前切记把我的所有注释删掉！！！要不会被老师发现的！！！

    然后加上你自己的注释，和对代码的了解。

    祝好~

*/


//#include "std_lib_facilities.h"  不知道这个是干啥用的，不需要
#include "iostream"
using namespace std;  // C++ 程序里需要有 namespace，否则无法运行。 Visual Studio 里可能不需要，但是有这个可以保证在所有平台下面都可以运行

void starLeftTriangle(int n);  // 声明函数的方式更喜欢直接把函数写在前面，不需要在前面声明之后再在后面写函数体，很麻烦
void starRightTriangle(int m);

int main()
{
    int star;
    char unit;
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";

    while (cin >> unit) {
        if (unit == 'L' || unit == 'l') { // 就这个地方，敲小黑板了！！ 注意逻辑表达式的表达
            cout << "Left-Input the number of stars you want to draw:"; // Debug 的时候加了 Left，可以去掉
            cin >> star;
            starLeftTriangle(star);
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }else if (unit == 'R' || unit == 'r') {
            cout << "Right-Input the number of stars you want to draw:"; // Debug 的时候加了 Right，可以去掉
            cin >> star;
            starRightTriangle(star);
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }else if (unit == 'Q' || unit == 'q') {
            break;
        }else {
            cout << "You input wrong choice" << "\n";
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
    }

    return 0;
}

void starLeftTriangle(int n){
    int i = 1;
    while (i <= n){
        int j = 1; // 考虑循环变量置零（恢复初值）的问题，需要在循环结构里找到合适的地方进行置零处理
        while (j <= i){
            cout << "*";
            ++j; // 一般习惯使用 j++ 这样的形式
        }
        cout << "\n";
        ++i;
    }
}

void starRightTriangle(int m){
    int i = m;
    while (i >= 1){
        int j = 1; // 置零问题
        while (j < i){
            cout << " ";
            j++;
        }
        int k=m; // 置零问题
        while (k >= i){
            cout << "*";
            k--;
        }
        cout << "\n";
        i--;
    }
}