// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
// LINK:  https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/?ref=lbp
// ERROR LEARN IN THIS
// 1. if we include bits/stdc++.h ,it has alredy define keyword stack so error is flask
// 2. if error in class declearation /function it flask error ,we intiase it in main func.
// 3. to intailse syntex is     class stack s;
#define Ma 1000
class stack
{
public:
    int top;
    int arr[Ma];
    stack()
    {
        top = -1;
    }
    bool push(int x)
    {
        if (top >= Ma)
        {
            cout << "stack is full";
            return false;
        }
        else
        {
            arr[++top] = x;
            return true;
        }
    }
    int pop()
    {
        if (top > -1)
        {
            return arr[top--];
        }
        return -1;
    }
    int peek()
    {
        if (top > -1 && top < Ma)
        {
            return arr[top];
        }
        return -1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    class stack st;
    st.push(8);
    int p=st.peek();
    cout<<p;
}