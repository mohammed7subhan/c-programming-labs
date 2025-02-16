# Lab 1

This lab is worth 1.25% of your final grade

## Due Date: End of your lab period in week 2

## Objectives:

* Practice reading and tracing C programs
* Practice writing a simple program that involves input and output
* Practice writing a simple program that involves a calculation

## Pre-Lab

Your first task involves an introduction on how to read a program.  This practice is known as doing a walkthrough or tracing a program. This is an essential skill in programming.  Unlike reading words, reading programs may involve going over the same line multiple times and/or skipping lines altogether.  This will be more evident as you develop your code reading abilities.

There is also another important difference.  When we read a program, we must keep track of the data (variables) in the program.  The first method we will use is called the table method.

**Before** coming to class please: 

* Read [this guide](walkthrough1.md).

## Programming (50 minutes):

[Lab 1 repository creation link](https://classroom.github.com/a/9ooam1Em)

In the file lab1.c, write a program that will: 
* Prompt the user to enter a temperature in degrees Celsius (a whole number)
* Calculate the Fahrenheit equivalent of that temperature, a floating point value
* Display the result including the user entered value (show the Fahrenheit result to 2 decimal places).

Use the following for the prompt

```
Please enter the temperature in Celsius: 
```

The formula for calculating the temperature is as follows:

```
F = (C * 9/5) + 32

Where:
F represents the temperature in degrees Fahrenheit
C represents the temperature in degrees Celsius
```
Display the result using the following format (substituting the \<userinput\> and \<result in Fahrenheit\>):

```
<userinput> degrees Celsius is <result in Fahrenheit> degrees Fahrenheit
```

A sample run of the program is as follows (note the 0 in the first line is entered by the user).

```
Please enter the temperature in Celsius: 0
0 degrees Celsius is 32.00 degrees Fahrenheit
```

### Testing your program:

* Create a few test cases.  These test cases should involve both positive and negative Celsius values
	* On your **lab work sheet**, make a table with three columns:  One for **Celsius**, one for **Fahrenheit**, and the last one for the **Program Output**.
	* Add a minimum of 5 values in the Celsius column.  These should include positive, negative and 0 values.  Spread the values out to include single, double, and triple digits (be aware that the lowest value for Celsius is -273).
	* Use [Google's Celsius to Fahrenheit converter](https://www.google.com/search?client=firefox-b-d&q=Celsius+to+farenheit) to get the correct conversion to find the correct Fahrenheit value for each of your Celsius values and record them in the Fahrenheit column.
	* Now it's time to test your program! Run your program for each of the Celsius values and record the results in the **Program Output** column.
	* Does your program calculate the same result (when rounded) as those produced by the website?
		* If the numbers your program outputs is very different from the expected result (more than just a rounding error), you will need to figure out what is wrong with your program (debug it)...
			* Did you enter the formula correctly? (brackets,operators, etc.)
			* Have you accounted for what happens when operators are applied to  int data types when fractional numbers are expected?
			* Try breaking down the formula into pieces and display the intermediate results.  Are those values correct?


### Walkthrough 1 - (20 min)

####  What is the output of the following program?

![screenshot of walkthrough1](lab1walk1.png)

#### Discussion
1) How can we turn a numeric character into its corresponding integer number?
2) How can we turn a character from lower case to upper case?
3) How can we turn a character from upper case to lower case?



### Walkthrough 2 - (10 min)


#### What is the output of the following program?

![screenshot of walkthrough1](lab1walk2.png)

#### Discussion

1) Can you observe a pattern with the behaviour of the modulus operator?
2) What is the difference between postfix ++ (var++) and prefix ++ (++var) operators?



## Submission Instructions:

* At the beginning of the lab class your professor will provide you with a worksheet.
* Follow the workshop instructions and when directed, record your answer on the worksheet:
	1. Testing table (used to test your code)
	2. Walkthrough
	3. Reflection: Write a short reflection about what you found to be the most challenging part of this lab.

* NOTE: Your worksheet will be collected at the end of the lab class. It **must be submitted** in order for you to get a mark for the lab!

## Rubric:

### Rubric Description

| Grade | Description|
| ----- | -----------|
| **Unsatisfactory** | 1. Arrived in class more than 30 minutes after start of class `OR` <br> 2. Did not attend `OR` <br> 3. Did not participate (no participation)|
| **Incomplete** | 1. Arrived in class more than 10 minutes late (but less than 30 minutes) `OR` <br> 2. Submitted work was largely incomplete/flawed `OR` <br>3. Partial participation|
| **Satisfactory** |1. Arrived in class within 10 minutes of start of class and <br> 2. Submitted work that is mostly completely without flaws and <br> 3. Exercised full participation|


### Rubric

|  | Level: 0 | Level: 1 | Level: 2 |
| -------- | ------- | ------- | ------- |
| **Grade** | `0.0` | `0.5` | `1.0` |
| **Description** | Unsatisfactory | Incomplete | Satisfactory |


## Additional Practice Problems:

The following problems are for extra practice. It is highly advised you complete these either in-lab if you complete the main lab early, or at home. Learning to be a programmer demands a lot of practice! These extra problems will get you started, but we encourage more practice - come up with your own challenges and see if you can do it! 

### Problem 1

Write a program that will ask the user for a radius of a circle (a floating point number) and calculate and print the calculated **diameter**, **circumference**, and **area** given the formulas:

* $$diameter = 2 * radius$$
* $$circumference = PI * diameter$$
* $$area = PI * (radius)^2$$

Note:
```PI is approximately 3.14159```

numbers should be outputted to 2 decimal places.

#### Sample run

```
Please enter a radius of a circle: 123.45
The diameter of the circle is 246.90
The circumference of the circle is 775.66
The area of the circle is 47877.53
```


### Problem 2

Write a program that will ask the user to enter 3 whole numbers.  The program will calculate the average of these three numbers.

#### Sample run:

```
Please enter the first number: 15
Please enter the second number: 18
Please enter the third number: 20
The average of 15, 18, and 20 is 17.67
```

### Problem 3a

Write a program that will calculate a weighted-grade for a course where the marks come from 3 tests.  Each test has a different weight towards the final grade as listed below:

* Test-1: 20%
* Test-2: 30%
* Test-3: 50%

Write a program that will ask the user to enter their **percentage** grade for each test then use the entered values to calculate their final grade

#### Sample run:

```
Please enter the percentage grade of the first test: 90.3
Please enter the percentage grade of the second test: 22.7
Please enter the percentage grade of the third test: 60.3
The final grade is: 55.02 %
```

### Problem 3b.  

Expanding on problem 3a, suppose each test was graded out of 50 (**raw marks**).  All scores are whole numbers out of 50 however each test is worth it's respective percentage of the course grade. Rewrite the previous problem so that it takes in the raw scores out of 50 and calculate their final grade
#### Sample run:

```
Please enter the grade of the first test out of 50: 36
Please enter the grade of the second test out of 50: 44
Please enter the grade of the third test out of 50: 33
The final grade is: 73.80 %
```
