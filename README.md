# 🔒 Password Strength Checker

Welcome to the **Password Strength Checker** tool! This program is designed to evaluate the strength of passwords based on various criteria, helping users understand how secure their passwords are. It provides instant feedback and suggests ways to improve password security.

---

![C++](https://img.shields.io/badge/Language-C++-blue.svg)
![Cybersecurity](https://img.shields.io/badge/Topic-Cybersecurity-green.svg)


## 📊 Project Overview

This **Password Strength Checker** evaluates passwords based on these criteria:
- **Length**: Minimum of 8 characters.
- **Uppercase Letters**: At least one uppercase letter.
- **Lowercase Letters**: At least one lowercase letter.
- **Digits**: At least one number.
- **Special Characters**: Includes special symbols like `@`, `#`, etc.

Based on these criteria, the program provides feedback on password strength:
- **Strong Password**: Meets all criteria.
- **Moderate Password**: Missing only one criterion.
- **Weak Password**: Missing two or more criteria.
- **Very Weak Password**: Fails to meet most criteria.

## 🚀 Features

- **Interactive and User-Friendly**: The tool provides instant feedback on the password's strength, with an option to check multiple passwords in a single session.
- **Color-Coded Feedback**: For terminals supporting ANSI codes, the program highlights feedback in color (e.g., red for weak, green for strong).
- **Cybersecurity-Focused**: Developed by **Shazil Shahid**, a cybersecurity enthusiast, to encourage secure password practices.

## 🛠️ How to Use

### Prerequisites

1. Clone the repository:
   ```bash
   git clone https://github.com/Shazyy15/Password-Strength-Checker.git
      ```
Navigate to the project directory:

   ```
cd Password-Strength-Checker
   ```
Compile the program:

   ```
g++ PasswordChecker.cpp -o PasswordChecker
   ```
Run the program:
   ```
./PasswordChecker
   ```
## Usage
- Upon running, the program will prompt you to enter a password.
- Enter your password, and the program will display a message indicating the strength.
- Afterward, you can choose to enter another password or exit the program.
## 🖥️ Demo
```
==========================================
||   Shazil Shahid - Cybersecurity Enthusiast   ||
||       Welcome to the Password Checker       ||
==========================================

Enter a password to evaluate its strength: yourpassword123!

Password Strength: Moderate password. Consider adding more character variety.

Would you like to try another password? (y/n): y

Enter a password to evaluate its strength: strongPASS!2021

Password Strength: Strong password.

Would you like to try another password? (y/n): n
```
## 🌱 Future Enhancements
- Add the ability to save or export password strength reports.
- Create a graphical user interface (GUI) for broader accessibility.
- Expand the criteria for a more advanced strength evaluation, including common password patterns.
## 👨‍💻 Author
This project was created by Shazil Shahid, a cybersecurity enthusiast passionate about helping users improve their digital security. Feel free to connect with me.

## 🤝 Contributions
Contributions, suggestions, and improvements are always welcome! Feel free to submit a pull request or open an issue to help make this project even better.

###### Thank you for checking out the Password Strength Checker. Let's work together to make the digital world more secure!
