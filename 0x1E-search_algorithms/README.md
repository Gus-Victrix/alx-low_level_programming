
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

  1. [Linear Search Algorithm](./0-linear_search.c)
   - Time Complexity: \$O(n)\$
   - Procedure:
    1. Declare index to be used for looping
    2. Loop: While index < array length.
    3.   Compare value against array member at current index.
    4.   If they match: Return the current index.
    5.   Increament the index.
    6. The value was not found, so error indicator is returned.
