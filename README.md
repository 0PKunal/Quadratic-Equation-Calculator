<div align="center">

# Quadratic Equation Calculator (CLI)

[![Python Version](https://img.shields.io/badge/python-3.x%2B-blue.svg)](https://www.python.org/downloads/)
[![C](https://img.shields.io/badge/C-Programming-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![GCC](https://img.shields.io/badge/GCC-Compiler-brightgreen.svg)](https://gcc.gnu.org/install/binaries.html)
[![VS Code](https://img.shields.io/badge/VS%20Code-Editor-blue.svg)](https://code.visualstudio.com/download)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)s

Compute the roots of a quadratic equation of the form ( ax² + bx + c = 0 ). Supports real, repeated, and complex roots with simple, interactive CLI.

</div>

---

## Table of Contents

- [Quadratic Equation Calculator (CLI)](#quadratic-equation-calculator-cli)
  - [Table of Contents](#table-of-contents)
  - [Overview](#overview)
  - [Features](#features)
  - [Math](#math)
  - [Quick Start (Windows)](#quick-start-windows)
  - [Usage](#usage)
  - [Examples](#examples)
  - [Python Alternative](#python-alternative)
  - [Project Structure](#project-structure)
  - [Contributing](#contributing)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)


---

## Overview
This repository provides a minimal command-line quadratic equation calculator implemented in both C and Python. The C version builds to a small `.exe` on Windows; the Python version runs anywhere with Python 3.

## Features
- **Interactive input:** prompts for `a`, `b`, `c`.
- **Validation:** rejects non-quadratic input when `a == 0`.
- **Robust output:** clearly indicates root type (real/distinct, real/equal, complex).
- **Two implementations:** C (`qec.c`) and Python (`qec.py`).

## Math
**Discriminant:**  
D = b² − 4ac  

- If ( D > 0 ) → two real roots  
- If ( D = 0 ) → one real (repeated) root  
- If ( D < 0 ) → two complex roots  

**Roots:**  
x = (−b ± √D) / 2a  

For D < 0:  
x = −b / 2a ± i√|D| / 2a

## Quick Start (Windows)

Prerequisites:
- A C compiler like `gcc` (via MSYS2/MinGW) if building the C version.
- Python 3.8+ for the Python version.

Build the C program:

```powershell
gcc qec.c -o qec.exe -lm
```

Run the C program:

```powershell
./qec.exe
```

## Usage
Both versions are interactive. Enter coefficients when prompted.

Example session (C):

```
Enter values of a: 2
Enter values of b: 4
Enter values of c: 1

Roots are real and distinct

x1 = -0.29
x2 = -1.71
```

## Examples
- Equal roots: `a = 1, b = -2, c = 1` → `x1 = x2 = 1.00`
- Complex roots: `a = 1, b = 2, c = 5` → `x = -1.00 ± 2.00i`

## Python Alternative
Run the Python implementation instead of compiling:

```powershell
python qec.py
```

## Project Structure

```
quadratic_equation_calculator/
├─ LICENSE
├─ qec.c
├─ qec.py
└─ README.md
```

## Contributing
Contributions are welcome! Please open an issue or submit a PR with clear description, proposed changes, and example runs. Keep the CLI simple and cross-platform.

## License
This project is licensed under the MIT License. See [LICENSE](LICENSE).

---

## Acknowledgments
- **GCC Compiler**: For compiling the C program.
- **Python Software Foundation**: For providing the Python programming language.
- **Visual Studio Code**: For being an excellent code editor.
- **Shields.io**: For the beautiful badges used in this README.

---
> **Note:** This README.md file was created with the help of AI. While every effort has been made to ensure accuracy and clarity, there may still be minor errors or inconsistencies. Users are encouraged to review the content carefully and make any necessary adjustments.

<div align="center">
  <p>Made with ❤️ by <a href="https://github.com/0PKunal">0PKunal</a></p>
  <p>If this project helped you, please give it a ⭐️</p>
</div>
