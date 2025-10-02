# Sieve of Eratosthenes

The program begins by taking an integer as input. Next, it declares a boolean array named 'prime' with a size of the input integer + 1. This array represents whether each number is prime or not, using True and False.

The program initializes all elements of the 'prime' array to true and then implements the Sieve of Eratosthenes.

**The Sieve of Eratosthenes is implemented in the following way:**
1. Eliminate the unique natural number 1, which is neither prime nor composite. (In C++, arrays start at index 0, so 0 is also removed.)
2. Remove all multiples of 2, excluding 2 itself.
3. Remove all multiples of 3, excluding 3 itself.
4. Remove all multiples of 4, excluding 4 itself. (However, since the multiples of 4 are already removed in step 2, this step can be skipped.)
5. Remove all multiples of 5, excluding 5 itself.
6. Similarly to step 4, since the multiples of 6 were already removed in step 2, the multiples of 7, excluding 7 itself, are removed.
  
... and so on.

---

For the range 0 to n, by repeating this for up to the multiples of n, only the elements corresponding to all primes up to n remain.

In the code, changing the respective element in the 'prime' array to false is equivalent to removing the number.

After all the primes have been identified, the program prints all the numbers corresponding to the true values in the 'prime' array and then concludes.



**Input**  
```
50
```

**Output**  
```
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
```