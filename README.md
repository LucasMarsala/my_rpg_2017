# Welcome in Poketek !
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f99426f2eaf44c8aa0b37d177eb6c90f)](https://www.codacy.com/gh/LucasMarsala/my_rpg_2017/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=LucasMarsala/my_rpg_2017&amp;utm_campaign=Badge_Grade)
![Language](https://img.shields.io/badge/language-C-blue.svg)

A simple RPG game inspired by the Pokémon universe, written in C. 
Explore the world, interact with NPCs, battle creatures, and build your team — all from the terminal!
Disclaimer: This project is a student-made game developed for educational purposes. It is not affiliated with, endorsed by, or associated with Nintendo or The Pokémon Company in any way.
---
![Screenshot_2023-03-21_10-44-15](https://user-images.githubusercontent.com/39527261/226570311-82b98bd7-3c2d-40f4-8309-0a1866fea20a.png)

## 🎮 Features

- 🌍 Explore a custom 2D world
- 🧍 Interact with NPCs
- ⚔️ Turn-based battle system
- 🐾 Capture and train creatures
- 💾 Save and load game progress (Multiple saves are possible !)
- 🖥️ Text-based and graphical interface using CSFML

---

## 🛠️ Built With

- **C (C99)**
- **CSFML** — the C binding for SFML (graphics, window, audio)
- Custom game engine components written from scratch

---

## 🚀 Getting Started

### Prerequisites

Make sure you have the following installed:

- `gcc` or any C compiler
- `make`
- [CSFML](https://www.sfml-dev.org/download/csfml/) (Graphics/Audio library)

```bash
sudo apt install -y gcc make libcsfml-dev
```

or a Docker version 20+

```bash
sudo apt install -y docker x11-xserver-utils
```

### How to run the project

Using Make

```bash

make
./my_rpg
```

Using Docker
```bash
xhost +local:
docker compose up --build
```

### Contributors
[Corentin Mattern](https://github.com/cmattern68)
[Kevin Spegt](https://github.com/MrKrj)
