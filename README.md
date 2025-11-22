# 🏊‍♂️ 42 Piscine - July 2024

![Duration](https://img.shields.io/badge/Duration-4_weeks-blue)
![Language](https://img.shields.io/badge/Language-C-blue)
![Shell](https://img.shields.io/badge/Shell-Bash-green)
![Status](https://img.shields.io/badge/Status-Completed-success)

## 📋 Table of Contents
- [About](#about)
- [The Piscine Experience](#the-piscine-experience)
- [Project Scores](#project-scores)
- [Repository Structure](#repository-structure)
- [Skills Acquired](#skills-acquired)
- [Key Concepts](#key-concepts)
- [Notable Projects](#notable-projects)
- [Reflection](#reflection)
- [Resources](#resources)

## 🌊 About

This repository contains all my work from the **42 Piscine** (July 4 - August 1, 2024), an intensive 4-week coding bootcamp that serves as the selection process for 42 School.

The Piscine is a unique educational experience where students learn programming fundamentals through peer-to-peer learning, with no teachers or formal classes. It's an immersive dive into the world of C programming and Unix systems.

> **"Piscine"** is French for "swimming pool" - you either sink or swim!

## 🎓 The Piscine Experience

### What is the Piscine?

- **Duration:** 4 weeks (26 days of intensive coding)
- **Schedule:** 8:42 AM - 10:42 PM (7 days a week)
- **Format:** Peer-to-peer learning, no teachers
- **Evaluation:** Peer evaluations, automated tests (Moulinette)
- **Projects:** Daily exercises (Shell & C) + Weekend Rush projects + Weekly exams

### Daily Routine

```
08:42 - Projects released
09:00 - Start coding
12:00 - Peer evaluations begin
18:00 - Social coding / debugging
22:42 - Project submission deadline
23:00 - Evaluations & networking
```

### Key Principles

- **Peer Learning:** Learn by explaining to others and being explained to
- **Trial & Error:** No documentation, figure it out yourself
- **Resilience:** Failure is part of the learning process
- **Community:** Help others to help yourself

## 📊 Project Scores

### Shell Projects

| Project | Score | Status | Description |
|---------|-------|--------|-------------|
| **Shell 00** | 50/100 | ✅ | Introduction to Shell commands and scripts |

### C Projects

| Project | Score | Status | Description |
|---------|-------|--------|-------------|
| **C00** | 85/100 | ✅ | First steps in C (putchar, putnbr, etc.) |
| **C01** | 70/100 | ✅ | Pointers and their manipulation |
| **C02** | 65/100 | ✅ | String manipulation functions |
| **C03** | 75/100 | ✅ | String comparison functions (strcmp, strcat) |
| **C04** | 70/100 | ✅ | String to integer conversions (atoi, putnbr_base) |
| **C05** | 50/100 | ✅ | Recursion (factorial, fibonacci, etc.) |
| **C06** | 70/100 | ✅ | Program arguments (argc, argv) |
| **C07** | 60/100 | ✅ | Memory allocation (malloc, strdup, strjoin) |

### Rush Projects (Weekend Group Projects)

| Project | Score | Status | Description |
|---------|-------|--------|-------------|
| **Rush 00** | 116/100 | ✅ | ASCII rectangle drawing algorithm (bonus included) |

### Exams

| Exam | Score | Status | Level |
|------|-------|--------|-------|
| **Exam 00** | 50/100 | ✅ | Week 1 - Basic functions |
| **Exam 01** | 40/100 | ⚠️ | Week 2 - String manipulation |
| **Exam 02** | 70/100 | ✅ | Week 3 - Advanced C concepts |
| **Final Exam** | 60/100 | ✅ | Week 4 - Comprehensive evaluation |

### Final Project

| Project | Score | Status | Description |
|---------|-------|--------|-------------|
| **BSQ** | 75/100 | ✅ | Find the Biggest Square in a map (group project) |

## 📁 Repository Structure

```
Piscine-42/
├── Piscine Shell/
│   └── Shell00/          # Shell scripting basics
│
├── Piscine C/
│   ├── C00/              # First C functions
│   ├── C01/              # Pointers
│   ├── C02/              # String manipulation
│   ├── C03/              # String operations
│   ├── C04/              # Conversions
│   ├── C05/              # Recursion
│   ├── C06/              # Program arguments
│   └── C07/              # Memory allocation
│
├── Rushs/
│   └── Rush00/           # Rectangle drawing algorithm
│
└── BSQ(BiggestSQuare)/   # Final project
    ├── srcs/
    ├── includes/
    └── Makefile
```

## 🛠️ Skills Acquired

### Programming Fundamentals

- ✅ **C Language** - Syntax, data types, operators, control structures
- ✅ **Memory Management** - Pointers, malloc, free, memory leaks
- ✅ **Functions** - Creation, prototypes, parameters, return values
- ✅ **Recursion** - Understanding and implementing recursive algorithms

### Unix & Shell

- ✅ **Shell Commands** - File manipulation, text processing, permissions
- ✅ **Shell Scripting** - Automation, conditionals, loops
- ✅ **Vim/Emacs** - Terminal-based text editing
- ✅ **Git** - Version control, branching, committing

### Problem Solving

- ✅ **Algorithm Design** - Breaking down complex problems
- ✅ **Debugging** - Using GDB, reading error messages, logical thinking
- ✅ **Code Optimization** - Writing efficient and readable code
- ✅ **Edge Cases** - Handling errors and boundary conditions

### Soft Skills

- ✅ **Peer Learning** - Teaching and learning from classmates
- ✅ **Collaboration** - Working in teams on Rush projects
- ✅ **Time Management** - Meeting tight deadlines
- ✅ **Resilience** - Bouncing back from failures and bugs

## 💡 Key Concepts

### Week 1: Foundations
- Shell commands and scripting
- Basic C syntax
- Variables and data types
- Input/output functions (write, putchar)

### Week 2: Pointers & Strings
- Understanding memory addresses
- Pointer arithmetic
- String manipulation
- Character arrays vs. pointers

### Week 3: Advanced C
- Dynamic memory allocation
- Recursion vs. iteration
- Complex algorithms
- Multi-file projects

### Week 4: Final Challenge
- Large-scale project (BSQ)
- Performance optimization
- Team collaboration
- File I/O and parsing

## 🌟 Notable Projects

### C05 - Recursion Challenge

Implementing classic algorithms recursively:
- `ft_factorial` - Calculate factorial
- `ft_fibonacci` - Fibonacci sequence
- `ft_sqrt` - Square root approximation
- `ft_is_prime` - Prime number detection

**Key Learning:** Understanding call stack and base cases.

### Rush 00 - Rectangle Drawing (116/100)

Created an algorithm to draw rectangles with ASCII characters:

```
Input: rush(5, 3)
Output:
o---o
|   |
o---o
```

**Bonus Features:**
- Multiple rectangle patterns
- Dynamic sizing
- Edge case handling

### BSQ - Biggest Square (75/100)

**The Challenge:** Find the largest square of empty space in a map filled with obstacles.

Example:
```
Input map:
...............
..o............
............o..
...o...........

Output:
...............
..o.XXXXX......
....XXXXX..o..
...oXXXXX......
```

**Technical Aspects:**
- File parsing and validation
- Dynamic memory allocation
- Algorithm optimization (O(n²) complexity)
- Makefile compilation
- Error handling

## 📈 Progress & Statistics

### Overall Statistics

- **Total Days:** 26 days
- **Projects Completed:** 15
- **Lines of Code:** ~5,000+
- **Peer Evaluations:** 50+
- **Average Score:** 67%
- **Pass Rate:** 100% (all projects validated)

### Score Progression

```
Week 1: Shell00(50) → C00(85) → C01(70)        Average: 68%
Week 2: C02(65) → C03(75) → C04(70)            Average: 70%
Week 3: C05(50) → C06(70) → C07(60)            Average: 60%
Week 4: Final Exam(60) → BSQ(75)               Average: 67%
Rush:   Rush00(116)                             Score: 116%
Exams:  Ex00(50) → Ex01(40) → Ex02(70) → Final(60)  Average: 55%
```

### Key Achievements

✅ **All projects submitted and validated**  
✅ **Perfect attendance (26/26 days)**  
✅ **Rush 00 with bonus (116/100)**  
✅ **BSQ completed successfully (75/100)**  
✅ **Positive progression in C projects**  

## 🤔 Reflection

### What I Learned

**Technical Skills:**
- Solid foundation in C programming
- Understanding of memory management
- Proficiency with Unix systems
- Algorithm design and optimization

**Soft Skills:**
- Learned to learn independently
- Improved debugging and problem-solving
- Enhanced collaboration and communication
- Developed resilience under pressure

### Challenges Faced

**Week 1:** 
- Adapting to peer-to-peer learning without teachers
- Understanding pointers for the first time
- Managing time between coding and evaluations

**Week 2:**
- Exam 01 was challenging (40/100) - learning experience
- String manipulation edge cases
- Balancing multiple projects simultaneously

**Week 3:**
- Recursion concepts were mind-bending initially
- Memory leaks in dynamic allocation
- Code optimization vs. readability

**Week 4:**
- BSQ complexity and team coordination
- Time pressure on final exam
- Algorithm efficiency requirements

### Key Takeaways

> **"The Piscine taught me that failure is not the opposite of success, it's a part of success."**

1. **Persistence Pays Off** - Every bug fixed is a lesson learned
2. **Peer Learning Works** - Teaching others reinforces your own understanding
3. **Read The Manual** - Documentation exists for a reason (man pages!)
4. **Test Everything** - Edge cases will break your code if you don't
5. **Community Matters** - The people you meet are as valuable as the code you write

## 🔗 Resources

### Useful Tools Used

- **Norminette** - 42's code style checker
- **Valgrind** - Memory leak detection
- **GDB** - Debugging tool
- **Vim/VSCode** - Code editors
- **Git** - Version control

### External Resources

- [C Programming Language (K&R)](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [C Reference Manual](https://en.cppreference.com/w/c)
- [42 Cursus Subject PDFs](https://github.com/Binary-Hackers/42_Subjects)

### 42 Specific Resources

- **42 Evaluations** - Peer correction platform
- **Black Hole** - Deadline tracking system
- **Intra** - 42's internal platform
- **Slack/Discord** - Community channels

## 👥 Acknowledgments

Special thanks to:
- **Fellow Pisciners** - For the sleepless nights, debugging sessions, and moral support
- **42 Staff** - For creating this unique learning environment
- **The Community** - For sharing knowledge and resources

## 📫 Contact

- **GitHub:** [@Vibes33](https://github.com/Vibes33)
- **42 Login:** rydelepi

---

## 📝 Notes

### About Scores

Scores in the Piscine don't define your learning journey. Some of the best programmers struggled initially but grew tremendously. The important thing is:

- ✅ Understanding the concepts
- ✅ Learning from mistakes
- ✅ Helping others
- ✅ Never giving up

### For Future Pisciners

If you're about to start your Piscine:

1. **Sleep is important** - Don't sacrifice health for code
2. **Ask questions** - Nobody knows everything
3. **Help others** - You learn more by teaching
4. **Take breaks** - Fresh eyes catch bugs faster
5. **Enjoy the journey** - The Piscine is intense but rewarding

### Moving Forward

This Piscine was just the beginning. The skills and mindset acquired here form the foundation for the **42 Common Core** curriculum and beyond.

> **"The expert in anything was once a beginner."**

---

*This repository represents 26 days of intensive learning, growth, and discovery at 42 School.*

**Date:** July 4 - August 1, 2024  
**Location:** 42 School  
**Status:** Successfully Completed ✅
