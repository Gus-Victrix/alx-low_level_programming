# 0x1E. C - Search Algorithms

 `C` `Algorithm`

## Learning Objectives:

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on needs

## Tools and development environment
- `C 89` (Programming language)
- `Betty` (linter)
- `vim 9.*` (Code Editor)
- `Ubuntu 22.04 LTS` (Operating System)


## Specifics

###  [Linear Search Algorithm](./0-linear.c)
- Time Complexity:\$\Omega(1)\$ \$O(n)\$
#### Procedure:
 1. Declare \$index\$ to be used for looping
 2. Loop: While \$index < array-length\$.
 3. Compare value against array member at \$index\$.
 4. If they match: Return the \$index\$.
 5. Increament \$index\$.
 6. End loop.

### [Binary Search Algorithm](./1-binary.c)
- Time Complexity: \$\Omega(1)\$ \$O(log(n))\$
#### Procedure:
 Given a sorted array \$A\$ of size \$s\$, and value to be searched \$v\$.
 1. Set left bound \$L\$ to \$0\$ and right bound \$R\$ to \$s - 1\$.
 2. Set the middle index \$M\$ as the floor of \$\frac{L + R}{2}\$.
 3. If \$A_M < v\$, then \$L = m + 1\$ and go to step 2.
 4. If \$A_M > v\$, then \$R = m - 1\$ and go to step 2.
 5. Now \$A_M == v\$, so return \$m$\.

### [Jump Search Algorithm](./100-jump.c)
- Time complexity: \$Omega(\sqrt(1))\$ \$O(log(n))\$
#### Procedure:
\$input:\$ An ordered list \$L\$, its length \$n\$ and a search key \$s\$.
\$output:\$ Position of \$s\$ in \$L\$, or error value if \$s\$ not in \$L\$.
 1. \$\textbf{let:}\ temp => 0 \hspace{1cm},\ current => \sqrt{n}\$
 2. \$\textbf{while}\ L_{min(b, n) - 1} < s\ \textbf{do}\$
 3. \$\hspace{1cm}a => b\$
 4. \$\hspace{1cm}b => b + \sqrt{n}\$
 5. \$\hspace{1cm}\textbf{if}\ a \ge n\ \textbf{then}\$
 6. \$\hspace{2cm}\textbf{return error-value}\$
 7. \$\textbf{while} L_{a} < s \textbf{do}\$
 8. \$\hspace{1cm}a => a + 1\$
 10. \$\hspace{1cm}\textbf{if} a = min(b, n) \textbf{then}\$
 11. \$\hspace{2cm}\textbf{return error-value}\$
 7. \$\textbf{if}\ L_{a} = s\ \textbf{then}\$
 11. \$\hspace{1cm}\textbf{return}\ a\$
 1. \$\textbf{else}\$
 11. \$\hspace{1cm}\textbf{return nothing}\$
