## 💉 Blood Pressure Categorization (C++ Project)

This is a C++ program that categorizes blood pressure levels based on systolic and diastolic values according to standard medical guidelines.
It uses enum class to represent categories and provides clear feedback to the user.

## 📌 Features

🧾 Takes user input: systolic and diastolic blood pressure values.

## 🔍 Categorizes blood pressure into:

Normal

Elevated

Stage 1 Hypertension

Stage 2 Hypertension

Hypertensive Crisis

## 🎯 Uses enum class for better readability and maintainability.

## 💻 Simple console-based program with clear output.

## 🛠️ Technologies Used

Language: C++

Concepts Used:

Enum class

Conditional statements

Functions & switch-case

Basic Input/Output

## 🚀 Getting Started
1. Save Code
```bash
Save the file as blood_pressure.cpp.
```
2. Compile

Using g++:
```bash
g++ blood_pressure.cpp -o blood_pressure
```
3. Run

On Linux/Mac:
```bash
./blood_pressure
```

On Windows:
```bash
blood_pressure.exe
```
## 3🎯 Example Usage
## ✅ Input:
Enter systolic blood pressure : 128
Enter diastolic blood pressure : 76

## 📊 Output:
Blood Pressure Category : Elevated

## 📌 Blood Pressure Categories (Logic)

Normal → Systolic < 120 and Diastolic < 80

Elevated → Systolic 120–129 and Diastolic < 80

Stage 1 Hypertension → Systolic 130–139 or Diastolic 80–89

Stage 2 Hypertension → Systolic ≥ 140 or Diastolic ≥ 90

Hypertensive Crisis → Systolic > 180 or Diastolic > 120

## 📂 File Structure
```bash
blood_pressure.cpp   # Main C++ source code
README.md            # Documentation
```
## 📌 Future Improvements

Add validation for negative or invalid inputs.

Provide health suggestions based on category.

Store multiple readings and calculate average BP.

Create a GUI version with charts/graphs.

## 👨‍💻 Author

Developed as a C++ mini project to demonstrate enum class, conditional logic, and basic healthcare programming.
