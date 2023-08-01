# Interests Calculator (C)

The Interests Calculator is a simple C program that calculates the compound interest for a given principal amount, interest rate, and time period. It helps users understand how their investments grow over time and the impact of compound interest on their savings.

## Table of Contents

- [About](#about)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## About

Compound interest is a powerful concept in finance, and this C-based Interests Calculator aims to make it easy for users to calculate the growth of their investments with compound interest. By providing the necessary inputs, users can quickly see how their savings accumulate over time and make informed financial decisions.

## Installation

### Prerequisites

To run the Interests Calculator, ensure you have a C compiler installed on your system. If you don't have one, you can download and install one of the popular C compilers, such as GCC (GNU Compiler Collection) or Clang.

### Running the Calculator

1. Clone the repository:

```bash
git clone https://github.com/your-username/interests-calculator-c.git
```

2. Navigate to the project directory:

```bash
cd interests-calculator-c
```

3. Compile the C program using your C compiler:

For GCC:

```bash
gcc interests_calculator.c -o interests_calculator
```

For Clang:

```bash
clang interests_calculator.c -o interests_calculator
```

4. Run the executable:

```bash
./interests_calculator
```

## Usage

Upon running the Interests Calculator, you will be prompted to input the following values:

1. Principal Amount (initial investment)
2. Interest Rate (annual rate of interest in percentage)
3. Time Period (investment duration in years)

The calculator will then compute and display the total amount after the given time period, considering compound interest.

Feel free to modify the `interests_calculator.c` file to adapt the program to your specific needs or to add more advanced features.

## Contributing

We welcome contributions to enhance the functionality and usability of the Interests Calculator. If you have ideas for improvements or bug fixes, feel free to contribute.

To contribute, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m "Add your commit message here"
   ```
4. Push your changes to your forked repository:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request to the `main` branch of this repository.
6. We will review your contribution, provide feedback, and merge it once approved.

Please ensure your pull request follows our [Code of Conduct](CODE_OF_CONDUCT.md).

## License

This project is licensed under the [MIT License](LICENSE).
