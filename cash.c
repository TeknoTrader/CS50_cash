#include <cs50.h>   // The CS50 library
#include <stdio.h>

// PRE PROCESSING FUNCTIONS
int get_amount();  
int review(int amount, int a, int b, int c, int d);
int coins_value(int inp, int a, int b, int c, int d);

// THE CORE FUNCTION
int main(void)
{
    int amount = get_amount(); // The user has to choose the amount of cent that has with him
    printf("Total of coins you might have:%d\n", coins_value(amount, 25, 10, 5, 1));  // Output
}

// Function to control the "user input"
int get_amount()
{
    int amount = get_int("How many cents do you have?\n");  // Primary input
    while (amount <= 0)  // Make sure that he choose a positive amount
    {
        printf("ERROR\n");
        amount = get_int("Choose a number HIGHER THAN 0\n");  // Ask the input value again
    }
    bool valid = amount > 0;
    while (valid != true)  // Make sure that he doesn't write some letters in the input
    {
        printf("ERROR\n");
        amount = get_int("Enter a POSITIVE NUMBER\n");       // Ask the input value again
    }
    return amount;
}

// The function to get the result
int coins_value(int inp, int a, int b, int c, int d)
{
    int counter = 0;
    int result = inp; // You could directly use inp instead of creating another variable, but I wnated to do it

    while (result > 0)
    {
      // Everytime we repeat the cicle, we subtract one coin's amount in cent and we add 1 to the counter (to keep in mind how many coins we are using)
        result -= review(result, a, b, c, d); 
        counter++;
    }
    return counter;
}

// Function to know which coin we have to use to arrive quickly to the solution
int review(int amount, int a, int b, int c, int d) // You could also create an array with a for cicle that slides the values, to not get the repetions in the code and to analyze a lot of numbers at the same time
{
    if (amount >= a)
    {
        return a;
    }

    else if (amount >= b)
    {
        return b;
    }

    else if (amount >= c)
    {
        return c;
    }

    else
    {
        return d;
    }
}
}
