# Text Processing Utilities ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

Two C++ programs that demonstrate different text processing techniques using STL containers.

## Text Filter (Queue-Based)
**File:** `text_filter.cpp`

### Features
- Reads text from `input.txt`
- Processes characters using a queue
- Converts all characters to uppercase
- Writes results to `output_filter.txt`

### How It Works
1. Reads input line by line
2. Enqueues each character
3. Dequeues and converts to uppercase
4. Writes processed characters to output file

## Text Reverser (Stack-Based)
**File:** `text_reverser.cpp`

### Features
- Reads text from `input.txt`
- Processes characters using a stack
- Reverses the text character-order
- Writes results to `output_reverse.txt`

### How It Works
1. Reads input line by line
2. Pushes each character onto stack
3. Pops characters (LIFO order) to reverse text
4. Writes reversed characters to output file

## Usage Instructions
1. Place input text in `input.txt`
2. Compile and run either program:
   ```bash
   g++ text_filter.cpp -o filter
   ./filter
   ```
   or
   ```bash
   g++ text_reverse.cpp -o reverse
   ./reverse
   ```
3. View results in respective output files

## Example
**input.txt:**
```
Hello World
```

**output_filter.txt:**
```
HELLO WORLD
```

**output_reverse.txt:**
```
dlroW olleH
```

## Technical Details
- Both programs:
  - Use file streams (`<fstream>`)
  - Include error handling
  - Clean up resources properly
- Program 1 uses `queue` from STL
- Program 2 uses `stack` from STL
- Both demonstrate different approaches to text processing

## Requirements
- C++ compiler (g++, clang++, etc.)
- Standard Library support

# Project 1: <span style="font-size: 1.5em">Six-Digit Number Sum of Squares Calculator ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  

This C++ program calculates the **sum of squares** of the digits of a six-digit number. It ensures the input is within the valid range (100,001 to 999,999) and computes the result using arithmetic operations.  

## Features  
- Validates user input to ensure a **six-digit number** within the specified range.  
- Computes the sum of squares of each digit using modular arithmetic.  
- Lightweight and efficient with no external dependencies.  

## How to Use  
1. Run the program.  
2. Enter a six-digit number between `100,001` and `999,999` when prompted.  
3. The program will display the sum of squares of its digits.  

### Example  
```plaintext
Enter a positive six-digit number between 100,001 and 999,999: 123456
The sum of squares is: 91
```

## Notes  
- **Input Validation**: Rejects numbers outside the 100,001–999,999 range with an "Out of range" message.  
- **Modular Arithmetic**: Uses `/` and `%` operations to isolate digits.  

Written in C++ for simplicity and performance.  

# Project 2: <span style="font-size: 1.5em">Electromagnetic Radiation Classifier ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

This C++ program classifies electromagnetic radiation based on either wavelength (cm) or frequency (Hz) input, following the electromagnetic spectrum's standard divisions.

## Features
- Dual input mode: accepts either wavelength or frequency values
- Comprehensive spectrum coverage from Radio waves to Gamma rays
- Input validation for both measurement types
- Interactive loop for multiple calculations
- Clear classification output with scientific notation support

## Electromagnetic Spectrum Ranges
| Type          | Wavelength (cm)       | Frequency (Hz)          |
|---------------|-----------------------|-------------------------|
| Radio         | ≥ 10                  | < 3×10⁹                 |
| Microwave     | 0.01 - 10             | 3×10⁹ - 3×10¹²          |
| Infrared      | 4×10⁻⁵ - 0.01         | 3×10¹² - 4.3×10¹⁴       |
| Visible Light | 4×10⁻⁵ - 7×10⁻⁵       | 4.3×10¹⁴ - 7.5×10¹⁴     |
| Ultraviolet   | 10⁻⁷ - 4×10⁻⁵         | 7.5×10¹⁴ - 3×10¹⁷       |
| X-Ray         | 10⁻⁹ - 10⁻⁷           | 3×10¹⁷ - 3×10¹⁹         |
| Gamma Ray     | -                     | > 3×10¹⁹                |

## How to Use
1. Run the program
2. Choose input type:
   - 'W' for wavelength (in centimeters)
   - 'F' for frequency (in Hertz)
3. Enter your positive numerical value
4. View the radiation classification
5. Press 'Y' to restart or 'N' to exit

## Example Usage
```plaintext
Please input F for frequency or W for wavelength: W
Enter (positive integer) wavelength(cm): 0.00005
Visible

Would you like to re-run the program? Press Y or N: N
Program Terminated.
```

## Technical Notes
- Uses `pow()` from `<cmath>` for scientific notation calculations
- Implements input validation to ensure proper measurement type selection
- Developed by Colin Wilder (2/25/2021)

# Project 3: <span style="font-size: 1.5em">Root Finder Using Bisection Method ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

This C++ program implements the bisection method to find the root of a complex algebraic equation within a specified interval, counting the number of bisections required for convergence.

## Program Features
- Solves the equation: arctan(e⁴ˣ/(x⁵+1)) - √ln(1+3x³) = 0
- Implements the bisection method for numerical root finding
- Validates user input (accepts integers 2-15 for precision)
- Tracks and displays number of bisections performed
- Interactive interface with restart capability

## Mathematical Details
**Equation:**  
f(x) = arctan(e<sup>4x</sup>/(x<sup>5</sup>+1)) - √ln(1+3x<sup>3</sup>)

**Method:**  
Bisection algorithm on interval [0, 5] with tolerance 10<sup>-n</sup>

## How to Use
1. Run the program
2. Enter precision value (integer between 2 and 15)
3. View results:
   - Calculated root
   - Number of bisections performed
4. Choose to rerun or exit

## Example Usage
```plaintext
Please enter a positive integer between two and fifteen: 5
The root is: 0.45678
The number of bisections: 18

Would you like to run this program again? Press Y or N: N
Program terminated.
```

## Technical Specifications
- Uses `atan()`, `exp()`, `pow()`, `log()`, and `sqrt()` from `<cmath>`
- Implements input validation for precision parameter
- Developed by Colin Wilder (3/5/2021)

## Theory
The bisection method repeatedly divides the interval in half and selects the subinterval containing the root, guaranteeing convergence for continuous functions where f(a) and f(b) have opposite signs.

# Project 4: <span style="font-size: 1.5em">Random Matrix Generator and Analyzer</span> ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

This C++ program generates and analyzes pairs of random square matrices with various matrix operations and properties checking.

## Features
- Generates random N×N matrices (N between 3 and 8)
- Matrix elements randomly distributed between -12 and 8
- Performs matrix operations:
  - Matrix sum (A + B)
  - Element-wise product (A ⊙ B)
  - Trace calculation (sum of diagonal elements)
- Verifies matrix distinctness condition
- Interactive interface with restart capability

## Matrix Operations
1. **Sum**: Adds corresponding elements of matrices A and B
2. **Element-wise Product**: Multiplies corresponding elements
3. **Trace**: Sum of diagonal elements for each matrix
4. **Distinctness Check**: Verifies if matrices differ in at least half their elements (rounded up for odd sizes)

## How to Use
1. Run the program
2. Enter matrix size (3-8)
3. View results:
   - Distinctness verification
   - Matrix sum
   - Traces of A and B
   - Element-wise product
4. Choose to rerun or exit

## Example Usage
```plaintext
Please input the size of the matrix: 
4
Matrix A & B: This matrices is distinct.

Sum of Matrix of A and B: 
-5 12 3 -8 
2 -4 9 1 
-7 5 -2 6 
4 -3 0 -1 

Trace A: -2
Trace B: 5

Product of Matrix A & B: 
-36 32 0 -48 
-8 0 14 -12 
6 6 -15 5 
4 -18 0 0

Would you like to run this program again? Press Y or N: N
Program terminated.
```

## Technical Specifications
- Uses `rand()` with `srand(time(0))` for randomization
- Implements input validation for matrix size
- Handles both even and odd matrix sizes for distinctness check
- Maximum matrix size defined as 10 (compile-time constant)
- Developed by Colin Wilder (3/23/2021)
