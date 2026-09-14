# C++ Projects Sandbox

Welcome to my personal **C++ Projects Sandbox**. This repository serves as a centralized workspace and portfolio for my independent C++ projects, experimental applications, and computer science implementations.

## 📁 Repository Structure

Each subdirectory is a self-contained C++ project with its own unique build configuration:

* **[Project-Name-1](./Project-Name-1)** – A brief, punchy one-sentence description of what this project does.
* **[Project-Name-2](./Project-Name-2)** – A brief, punchy one-sentence description of what this project does.
* **[Project-Name-3](./Project-Name-3)** – A brief, punchy one-sentence description of what this project does.

## 🛠️ General Setup & Compilation

Most projects inside this sandbox utilize **CMake** as the core build automation framework. 

To compile and run any individual project locally:

1. Navigate into the specific project directory:
   ```bash
   cd Project-Name-1
   ```
2. Generate the build tree layout:
   ```bash
   cmake -B build
   ```
3. Compile the system binaries:
   ```bash
   cmake --build build
   ```
4. Execute the resulting compiled application.

## ⚙️ Tech Stack & Requirements

* **Language Standard:** Modern C++ (C++20 / C++23)
* **Build System:** CMake 3.20+
* **Supported Compilers:** GCC, Clang, or MSVC
