# Arduino Bare Metal Training

This repository contains lecture notes and code examples related to **bare metal** programming on Arduino development boards.

## Content

### Week 1
- **Topic:** Register-based GPIO control
- **Covered Topics:**
  - Using `PORTB` register
  - Configuring pin direction (input/output) with `DDR` register
  - Controlling the built-in LED
  - Loop-based delay instead of `delay()` function

**Code File:** `Week1/led_control.ino`

## Reference & Source

This training series follows the **YouTube playlist** linked below, and the notes are derived from its content:

📌 **Playlist:** [Arduino Bare Metal Programming](https://www.youtube.com/playlist?list=PLNyfXcjhOAwOF-7S-ZoW2wuQ6Y-4hfjMR)

The videos in this playlist provide valuable insights into register-level programming on Arduino.

**Note:** This repository is designed to provide training content for working directly with **hardware registers** instead of using Arduino's built-in functions like `setup()` and `loop()`.
