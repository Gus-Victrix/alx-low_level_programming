
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

 * Time Complexity:\$\omega(1)\$ \$O(n)\$
 #### Procedure:
  1. Declare \$index\$ to be used for looping
  2. Loop: While \$index < array-length\$.
  1. Compare value against array member at \$index\$.
  4. If they match: Return the \$index\$.
  5. Increament \$index\$.
  6. End loop.

### [Binary Search Algorithm](./1-binary.c)
- Time Complexity: \$\omega(1)\$ \$O(log n)\$
#### Procedure:
 Given a sorted array \$A\$ of size \$s\$, and value to be searched \$v\$.
 1. Set left bound \$L\$ to \$0\$ and right bound \$R\$ to \$s - 1\$.
 2. Set the middle index \$M\$ as the floor of \$(L + R)/2\$.
 3. If \$A_M < v\$, then \$L = m + 1\$ and go to step 2.
 4. If \$A_M > v\$, then \$R = m - 1\$ and go to step 2.
 5. Now \$A_M == v\$, so return \$m$\.
