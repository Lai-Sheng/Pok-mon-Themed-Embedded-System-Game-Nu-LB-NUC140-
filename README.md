# Pok-mon-Themed-Embedded-System-Game(Nu-LB-NUC140)


## Project Overview

This project demonstrates a **Pok-mon-Themed-Embedded-System-Game** with a Pokémon battle simulation using the **NUC140 Series Microcontroller**. It includes real-time interactions via keypad inputs and graphical outputs on an LCD screen, making it both an embedded systems project and an interactive game simulation.

---
**Demo Video**  
Watch the demonstration of this project on [YouTube](https://www.youtube.com/watch?v=9VVDpm9JCD0).

## Features

### Core Functionalities
- **Timer-Based Control**
  - Uses **Timer1 interrupts** to display dynamic battle countdowns and graphical effects.
  
- **Pokémon Battle Simulation**
  - Select and battle between three Pokémon: **Bulbasaur**, **Charmander**, and **Squirtle**.
  - Pokémon moves include **type-based effectiveness** (e.g., fire is strong against grass).
  - Real-time turn-based interaction between the player and the computer.

### User Interaction
- **Keypad Input**
  - Allows users to navigate and select options during gameplay.
  - Real-time interrupt-based input for accurate response during the game.
  
- **Graphical LCD Output**
  - Displays Pokémon sprites, battle actions, and dynamic status updates such as health points (HP) and active moves.

---

## Technical Highlights

### Code Architecture
- **Interrupt-Driven Design**: Keypads and timers are managed through interrupts for non-blocking execution.
- **Modular Components**:
  - Pokémon attributes and moves are encapsulated using **structs**.
  - Separate functions handle key game actions such as attacking and graphical rendering.

### Key Modules
- **GPIO Initialization**: Configures output pins for control and input pins for the keypad.
- **Timer Management**:
  - **Timer0**: Handles battle countdown and turn switching.
  - **Timer1**: Drives periodic updates, such as move animations and status displays.
- **Graphical Output**:
  - `draw_Bmp_axb()`: Renders Pokémon and animations on the LCD.
  - `print_Line5x7()`: Displays text-based updates on the LCD.
- **Damage Calculation**: Implements type-effectiveness logic for battle mechanics.

---

## Technical Stack

- **Platform**: NUC140 Microcontroller
- **Language**: C
- **Peripherals**:
  - **LCD Display**: Graphical output for game status and animations.
  - **Keypad**: Input for user interactions.
  - **Timer**: Periodic interrupts for event-driven gameplay.

---

## How It Works

1. **Initialization**:
   - GPIO pins, timers, and the LCD screen are initialized at the start.
   - Pokémon and their moves are preloaded into memory.

2. **Game Loop**:
   - Players select their Pokémon using keypad inputs.
   - During battles:
     - The player chooses moves via the keypad.
     - The computer selects moves randomly.
     - Damage calculations consider type advantages (e.g., Fire > Grass).

3. **Visual Feedback**:
   - The LCD displays battle actions, Pokémon sprites, and HP status.
   - Animations enhance the user experience during attacks and turns.

---

## Applications

- **Embedded Systems**: Demonstrates integration of interrupts, GPIO, and peripherals in real-time.
- **Game Development**: Introduces basic turn-based mechanics and type-effectiveness calculations.
- **Microcontroller Projects**: Showcases advanced usage of timers and LCD outputs.

---

## Sample Output

- **Battle Animation**:
  - Pokémon sprites dynamically move during attacks.
- **LCD Updates**:
  - Pokémon HP bars and move names are updated in real time.
- **Keypad Control**:
  - Smooth and responsive user input for in-game actions.

---

## Potential Enhancements

- **Multiplayer Mode**: Enable two-player gameplay using additional peripherals.
- **Expanded Pokémon Roster**: Include more Pokémon and moves for a richer experience.
- **Improved Graphics**: Upgrade LCD animations for smoother transitions and effects.

---


**Note**  
This project was part of the "Microprocessor" course taught by Professor Yi-Wen Wang in the Department of Computer Science and Information Engineering at Feng Chia University. The project received a perfect score.

