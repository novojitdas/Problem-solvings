/*
Problem link: https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
// solve below
*/
//Function to push an integer into the stack1.
void twoStacks ::push1(int x)
{
    if (top1 < top2 - 1)
    {
        ++top1;
        arr[top1] = x;
    }
}

//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if (top1 < top2 - 1)
    {
        top2--;
        arr[top2] = x;
    }
}

//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    int x = -1;
    if (top1 >= 0)
    {
        x = arr[top1];
        top1--;
    }
    return x;
}

//Function to remove an element from top of the stack2.
int twoStacks ::pop2()
{
    int x = -1;
    if (top2 < size)
    {
        x = arr[top2];
        top2++;
    }
    return x;
}
