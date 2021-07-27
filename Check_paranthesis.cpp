#include <iostream>
#include <cstring>

using namespace std;

char input[10];
int stack[10], ind;

void push(int x)
{
    stack[++ind] = x;
}

void pop()
{
    stack[ind] = 0;
    ind--;
}

bool isEmpty()
{
    if (ind > 0)
        return false;
    else
        return true;
}

bool verify(char input[])
{
    ind = 0;
    int n = strlen(input);

    for (int i = 0; i < n; i++)
    {

        if (input[i] == '(')
            push(1);
        if (input[i] == '{')
            push(2);
        if (input[i] == '[')
            push(3);

        if (input[i] == '}')
        {
            if (isEmpty() || stack[ind] != 2)
            {
                return false;
            }
            else
            {
                pop();
            }
        }

        if (input[i] == ']')
        {
            if (isEmpty() || stack[ind] != 3)
            {
                return false;
            }
            else
            {
                pop();
            }
        }

        if (input[i] == ')')
        {
            if (isEmpty() || stack[ind] != 1)
            {
                return false;
            }
            else
            {
                pop();
            }
        }
    }

    if (ind == 0)
        return true;
    else
        return false;
}

int main()
{

    cin >> input;

    if (verify(input) == 0)
    {
        cout << "the parenthesis do not match";
    }
    else
    {
        cout << "parenthesis matches";
    }

    return 0;
}