# Learn C PROGRAMMING— From Zero

Hi, I'm **RickDeazer** (Patrick Ngotho) — a 19-year-old programmer and CEO of **RPC (Relay Programming Company)**, currently studying Computer Science at **Moi University**.

These are the exact files I built while I was *learning C myself*. I've cleaned them up, structured them into small, digestible modules, and I'm releasing them for free so anyone — absolute beginner or otherwise — can learn C and grow into a great developer, the same way I'm trying to.

---

## 📂 Repository Structure

The repository is organized into **30 progressive learning modules**, numbered in the order you should tackle them.

Some topics are big enough to need more than one file, so they're broken into **sub-modules**:

```
30.1 → Pointers: Basics
30.2 → Pointers: Arithmetic
30.3 → Pointers: Pointers to Pointers
```

The same pattern applies to modules like **Arrays**. Always work through sub-modules in order (`.1` → `.2` → `.3`) before moving to the next main module.

> ⚠️ **Golden rule:** *Do not move to the next module without understanding the current one.*
> C rewards patience. Skipping ahead now just means confusion later.

---

## 🚀 Getting Started

### 1. Clone the repository
```bash
git clone https://github.com/<your-repo-path-here>.git
```

### 2. Install a C compiler
- **Windows:** Install [MinGW](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/) (provides `gcc`)
- **macOS:** Install Xcode Command Line Tools — `xcode-select --install`
- **Linux:** Usually pre-installed; if not, `sudo apt install gcc`

### 3. Add the compiler to your environment / link it to your editor
- **Windows:** Add the compiler's `bin` folder to your system's `PATH` environment variable so `gcc` can be run from anywhere.
- **VS Code:** Install the *C/C++ Extension Pack* and point it to your compiler for IntelliSense and debugging support.

### 4. Run the programs
You can run any file either through VS Code's built-in "Run" button (with the right extension), or straight from the terminal.

---

## 🖥️ Compiling & Running a File (Terminal)

To compile and run a file called `example.c`, open your terminal in that folder and run:

```bash
gcc "example.c" -o "example.exe"; ./"example.exe"
```

**What each part means:**

| Part | Meaning |
|---|---|
| `gcc` | Calls the C compiler |
| `"example.c"` | The source file handed to the compiler |
| `-o` | Tells the compiler you're specifying an output file name |
| `"example.exe"` | The name of the compiled program to create |
| `;` | Line terminator — finish this command before starting the next |
| `./"example.exe"` | Runs the compiled program |

> On macOS/Linux, drop the `.exe` extension — just use `./example`.

---

## 🌱 A Note If You're Just Starting Out

Don't feel overwhelmed. Don't feel exhausted. Don't give up.

Every great developer once stared at a screen full of errors that made no sense. The only difference between them and everyone who quit is **consistency**. Go through the modules slowly, re-read what confuses you, and let each idea *actually* click before moving on.

You're not behind — you're just at the beginning.

---

## ⚠️ Disclaimer

All modules and code in this repository have been tested and confirmed working. However, if a file fails to run, behaves unexpectedly, or causes issues on your compiler or machine, I am **not responsible** for any direct or indirect damages. The chances of this happening are minimal, but please code responsibly and back up your work.

## 🔒 Security Warning

Please don't download this content from unofficial mirrors, random forwards, or untrusted third-party repos. Get it only from the original source:

👉 **[rickdeazer.com](https://www.rickdeazer.com)**

---

## 🤝 Support This Project

If these modules helped you, or you'd like to work with me:

- 🌐 **Website:** [rickdeazer.com](https://www.rickdeazer.com)
- 💼 **Hire me** for programming or Relay Programming projects — reach out through the site above
- ☕ **Buy me a coffee** — every bit of support helps me keep building and sharing free resources like this one

---

**Developer ("RickDeazer")**
CEO, Relay Programming Company (RPC)
Computer Science, Moi University
September 2026
