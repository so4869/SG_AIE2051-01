# Find the best candidate

Sogang CS department are selecting potentially-prominent students among eager applicants. Each applicant has entrance exam scores of subjects and the subjects are prioritized according to their relevance to computer science. Unfortunately, we decide to pass only one student who shows the best pontential to be a good computer scientist.

For a given score table for applicants, **find a person who has the best exam portfolio.**

---

## Input
1) Two integer values are provided as input: the number of applicants and the number of subjects.
2) Subsequent rows represent a score table for each applicant.
3) Note that the subjects are arranged in ***descending order of relevance to computer science.***

Here is one example input.
```
3 4
100 80 10 20
100 60 10 20
100 80 12 20
```

## Output
The program should print **1) the index(student number. not array's index.) of the most prominent student and 2) his/her score table.**
If one student, A, has a higher score than another student, B, in a more relevant course, then A is given priority over B.
For the example, the output should be the below.
```
3 100 80 12 20
```
