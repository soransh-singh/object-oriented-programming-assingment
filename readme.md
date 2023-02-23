# Object Oriented Programming Assingment


1. Define a Class Largest to obtain the largest of three given numbers. 


2. Define a class Bank_Account to represent a bank account. It contains 
- Data Members:
    - Name of the depositor
    - Account Number
    - Type of account
    - Balance
- Member Functions:
    - To assign initial values
    - To deposit an amount
    - To withdraw an amount < amount available
    - Display the name and balance.


3. Using the above class Bank_account and by supplying a user id and password allow
users to Login using their id and password. Now if login was successful the user will be able 
to do the following:
- Withdraw money.
- Deposit money.
- Display Balance.
- Quit the program.

If login was not successful (for example the id or password did not match) then the user will be 
taken back to the introduction menu.


4. Create a class Time to add Two times provided in hour-minute format. Use member
functions

a. void input() to provide hour and minute.

b.  void gettime(int,int) to take hour and minute entered by user.

c.  sum(time <oj> ) to add minutes and hours for two Time objects. If minutes is > 60 add 1 with
hour.

d.  void display() to display the result.


5. Write a C++ program to add two complex numbers using class Complex having real and 
imag as data members.

(i) The class Complex contains three constructors. 
One with no parameter. (Used for the object for storing result.) 
With one parameter(Same value for real and imaginary part) 
With two parameters (Different Values for real and imaginary part)

ii) Two friend functions

a) One to add two complex numbers by taking two reference variables of class complex 
and returning another reference.

b) To display the result