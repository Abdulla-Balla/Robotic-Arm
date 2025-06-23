# Robotic Arm Project
The robotic arm replicates human hand movements demonstrating biomimicry. An Arduino microcontroller serves as the control hub, while servomotors enable precise angular motion controlled by potentiometers. Designed for both industrial applications and educational use, it demonstrates key concepts in robotics and automation.

## Files
- `robotic_arm.ino`: Arduino sketch controlling the servos based on analog input.
- `Simulation`: External C++ Runners


## Hardware Setup
- Arduino Uno (or compatible)
- 5 Servo motors connected to pins 9, 10, 11, 5, and 6
- 4 Potentiometers connected to analog inputs A0, A1, A2, and A3

## Usage
1. Open the Arduino software.
2. Load `robotic_arm.ino`.
3. Connect your Arduino and parts in correspodance to `Schematic Sketch`.
4. Upload the code to your computer.
5. Everything is ready =)

## License
Copyright (c) 2025 Abdulla Balla

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files, to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
