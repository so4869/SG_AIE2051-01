# Age Check

Kim, an owner of an unmanned convenience store, thinks seriously about negative effects of alcohol to teenagers and old people. So he decides to ban teenagers under the age of 19 from purchasing alcoholic beverages and have seniors over the age of 60 reconsider purchasing alcoholic beverages.

For boss Kim, let's make a machine that outputs the right message when the buyer's age is given. We will **use try-catch statement** to handle the ilegal situation.  
The program first asks the buyer's age.  
The question message is as follows.
```
"Hello, customer. You picked up alcohol. How old are you?"
```
It then checks the buyer's age and outputs a message of concern if he is over 60.
```
"It would not be good for your health. Be careful!"
```
"It would not be good for your health. Be careful!"
```
"Enjoy!"
```

The last case is the buyer is under 19 years old.  
_In this case, let us raise the exception by throwing an integer number in the try body._  
_Please throw a specific number so that we can catch that case by checking the thrown number._  
_On the "catch" side, we check if the catched integer number is the number for the last case. If yes, print out the following setence then terminate the program._
```
"You are arrested!"
```

**Running Example**  
**Here we use symbol ">>" to mark lines that we give input.**
```
Hello, customer. You picked up alcohol. How old are you?
>>30
Enjoy!
Hello, customer. You picked up alcohol. How old are you?
>>55
Enjoy!
Hello, customer. You picked up alcohol. How old are you?
>>71
It would not be good for your health. Be careful!
Hello, customer. You picked up alcohol. How old are you?
>>19
You are arrested!
```
