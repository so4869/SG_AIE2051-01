# Finding the contact number

There is a contact list that includes pairs of names and contact numbers. Albat wants to make an appointment with someone whose name he knows, but he doesn't know his phone number. Let us help Albat find his contact information.

When read input, use function `getline()` to get an entire string of a line (refer to https://cplusplus.com/reference/string/string/getline/)


**Input**  
The contact list is input through the screen. The end of the list is specified by "end" string.
Between a name and a number, there could be single or multiple separation characters ",:;. " (comma, colon, semi-colon, period, and space).
Then, a name that Albat knows is given.
```
David 010-ABCD-ASDE
John: 010-ASDQ-ASDW
Hwang.010-AAPA-PAAA
Kim;010-QWER-QWER
end
John
```

**Output**
```
010-ASDQ-ASDW
```