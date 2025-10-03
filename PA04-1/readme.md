# Pascal's triangle

Compute the *n*-th floor of Pascal's triangle.

(See also : [https://byjus.com/maths/pascals-triangle/](https://byjus.com/maths/pascals-triangle/) )

---

## Steps to compute the triangle

1. Fill the first floor; initialize `a[0][0]` to 1.
2. Fill the i-th floor - for each column j, compute <span style="font-family: 'KaTeX_Math'">a[i][j] = a[i - 1][j - 1] + a[i - 1][j]</span>

---

## Input

```
3
```

## Output

```
1 
1 1 
1 2 1 
```

---

*Note: When printing Pascal's Triangle, <span style="color: #f00">there should be a space at the end of each line</span> for the output to be considered correct.*

Using the above output as an example:
```
'1 '
'1 1 '
'1 2 1 '
```
