# 🧩 TIME & SPACE COMPLEXITY – COMPLETE BEGINNER SHEET  

---

# 🌱 1. CONCEPTS (EASY LANGUAGE)

### ⏳ Time Complexity
Time Complexity tells us:  
👉 **How the running time of your program grows as input grows.**  

- Not about seconds, just growth.  
- Focus on *how many steps* your code takes.  

**Examples:**  
- Print “Hello” once → O(1)  
- Loop from 1 to n → O(n)  
- Nested loop → O(n²)  
- Halve input each step → O(log n)

---

### 💾 Space Complexity
Space Complexity tells us:  
👉 **How much memory your program uses as input grows.**  

- Only count extra memory you use (not input itself, unless copied).  
- Helps avoid memory-heavy solutions.  

**Examples:**  
- Using a few variables → O(1)  
- Using an array of size n → O(n)  
- Nested arrays → multiply sizes (2D array n×m → O(n*m))

---

# 🏗️ 2. COMMON BIG-O CHEAT SHEET

| Big O      | Meaning               | Example                     |
|-----------|----------------------|-----------------------------|
| **O(1)**  | Constant             | Print, access first element |
| **O(n)**  | Linear               | Single loop                 |
| **O(log n)** | Logarithmic        | Binary search, halve input  |
| **O(n log n)** | Linearithmic     | Merge/Quick sort            |
| **O(n²)** | Quadratic            | Nested loops                |
| **O(2ⁿ)** | Exponential          | Recursive doubling calls    |
| **O(n!)** | Factorial            | Permutations               |

---

# 🧪 3. PRACTICE PROBLEMS – TIME COMPLEXITY

### 🟢 **BASIC**
1. Print “Hello” 5 times → O(1)  
2. Print numbers 1 to n → O(n)  
3. Find max in array → O(n)  
4. Check first element → O(1)  
5. Print array elements → O(n)

### 🟡 **INTERMEDIATE**
6. Nested loops 1 to n → O(n²)  
7. Binary search → O(log n)  
8. Loop: 1,2,4,8… ≤ n → O(log n)  
9. Duplicates using nested loops → O(n²)  
10. Loop until match → Best O(1), Worst O(n)

### 🔴 **ADVANCED**
11. Loop n times + inner loop log n → O(n log n)  
12. Recursive calls double each step → O(2ⁿ)  
13. All permutations of string → O(n!)  
14. Merge Sort → O(n log n)  
15. Frequency of all pairs → O(n²)

---

# 🧪 4. PRACTICE PROBLEMS – SPACE COMPLEXITY

### 🟢 **BASIC**
1. A few variables → O(1)  
2. Array of size n → O(n)  
3. Fixed-size array → O(1)

### 🟡 **INTERMEDIATE**
4. 2D array n×m → O(n*m)  
5. Copy an array of size n → O(n)  
6. Recursive function storing call stack depth n → O(n)

### 🔴 **ADVANCED**
7. Recursive function calling itself twice → O(n) stack depth may be O(n)  
8. DP table of n×m → O(n*m)  
9. Graph adjacency matrix for n nodes → O(n²)  
10. Storing all permutations of string of length n → O(n!)

---

# 🎲 5. GUESS THE COMPLEXITY

1. Loop until n, break early if found → Best O(1), Worst O(n)  
2. Two separate loops → O(n) + O(n) = O(n)  
3. Halve input each step → O(log n)  
4. Check all pairs → O(n²)  
5. Loop 1..n, inner loop 1..log n → O(n log n)

---

# 🧠 6. TIPS & TRICKS

### TIME COMPLEXITY
1. Count repetitions → 1 loop = O(n), nested loops multiply  
2. Halving = O(log n)  
3. Side-by-side loops add → O(n)+O(n)=O(n)  
4. Constants ignored → O(5n) = O(n)  
5. Recursion doubling → O(2ⁿ)  
6. Sorting → usually O(n log n)  
7. Best vs Worst case → always consider both

### SPACE COMPLEXITY
1. Only extra memory counts → variables, arrays, stacks  
2. Loops using variables → O(1)  
3. Arrays sized with input → O(n)  
4. Nested arrays → multiply sizes  
5. Recursion stack → depth = additional memory  
6. Storing intermediate results (DP) → O(size of table)  

---

# 🎯 FINAL TIP
- Time = **how fast** your code grows  
- Space = **how much memory** your code grows  
- Focus on **growth patterns**, not exact numbers  
- Practice with loops, recursion, and arrays  

---


## 📚 Resources & References  

Here are some good resources to understand Time & Space Complexity (and more):  

- [Striver's](https://youtu.be/FPu9Uld7W-E?si=ngh9thvPi4-z9qUG)
- [Kunal khuswaha](https://youtu.be/mV3wrLBbuuE?si=qoATXrWXuFXsLNBU)
<br/>
*(You can watch them to get visual & intuitive explanation on complexity concepts.)*

> ⚠️ Tip: Try to read/watch multiple resources — different explanations help you understand better.



# 🎉 YOU NOW HAVE A COMPLETE TIME & SPACE COMPLEXITY SHEET 🚀


