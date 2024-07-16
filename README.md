# CS50_cash
In the harvard CS50's course there is a session about C with a final project: here you can find how I did it.

**What is the assignement?**
You have to choose a certain amount of cents that you have as input, and the program should return as output how many coins added can arrive to that amount.
The program takes in consideration 4 kind of coins:
- 25 cents
- 10 cents
- 5 cents
- 1 cent

*Example*
So, here there are some examples
Input = 1  ----------> Output = 1 (necessity of "1 cent coin")
Input = 4  ----------> Output = 4 (you need four "1 cent coin")
Input = 5  ----------> Output = 1 (it takes only one "5 cents coin")
Input = 6  ----------> Output = 2 (you can use one "5 cents coin" and one "1 cent coin")
Input = 25  ----------> Output = 1 (it takes only one "25 cents coin")
Input = 26  ----------> Output = 2 (you can combine one "25 cents coin" and one "1 cent coin")
