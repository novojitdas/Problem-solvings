/*
Problem link: https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1#
*/
// solve below
/ Function to push an integer into the stack.void MyStack ::push(int x)
{
    if (top <= 999)
    {
        ++top;
        arr[top] = x;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top < 0)
    {
        return -1;
    }
    else
    {
        int temp = arr[top--];
        return temp;
    }
}
