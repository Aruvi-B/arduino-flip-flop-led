# Arduino Flip-Flop LED Project

## Overview

This project demonstrates a simple LED flip-flop pattern using an Arduino Uno. The LEDs will toggle between different colors in a sequential pattern, creating a flip-flop effect.

### LED Setup:
- **Red LED** on Pin 4
- **Yellow LED** on Pin 3
- **Green LED** on Pin 2

This setup can be simulated using the [Wokwi Simulator](https://wokwi.com/projects/414964657985674241).

## Circuit Diagram

The circuit consists of three LEDs connected to the Arduino Uno through resistors. The LEDs turn on in sequence, creating the flip-flop effect.

![Circuit Diagram](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/circuit-diagram.png?raw=true)

[**View the project on Wokwi**](https://wokwi.com/projects/414964657985674241)

### To download the entire project, including the circuit setup and code files:
Click **Download Project ZIP** from the top left corner on Wokwi.

---

## Steps to Build

### 1. Create a New GitHub Repository

- Go to [GitHub](https://github.com/) and create a new repository.
- Upload the following files:
  - `diagram.json`
  - `libraries.txt`
  - `sketch.ino`
  - `wokwi-project.txt`

### 2. Set Up GitHub Codespaces

If you want to use GitHub Codespaces to build and simulate the project:

- Create a **new Codespace** from the repository's main branch.
- You will see the uploaded files in the GitHub explorer.

![Explorer](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/Explorer.png?raw=true)

### 3. Organize the Files

- Create a folder named `src` in your repository.
- Move the `sketch.ino` file into this folder for better organization.

### 4. Add Necessary Configuration Files

In the root directory, add the following two configuration files for proper simulation.

#### `wokwi.toml` Configuration File

```
toml
[wokwi]
version = 1
elf = ".pio/build/uno/firmware.elf"
firmware = ".pio/build/uno/firmware.hex"

[[peripherals]]
id = "led_red"
type = "led"
pin = 13  # Pin connected to the red LED

[[peripherals]]
id = "led_yellow"
type = "led"
pin = 12  # Pin connected to the yellow LED

[[peripherals]]
id = "led_green"
type = "led"
pin = 11  # Pin connected to the green LED
```
### `platformio.ini` Configuration File

```
; PlatformIO Project Configuration File
;
;   Build options: build flags, source filter
;   Upload options: custom upload port, speed and extra flags
;   Library options: dependencies, extra library storages
;   Advanced options: extra scripting
;
; Please visit documentation for the other options and examples
; https://docs.platformio.org/page/projectconf.html

[env:esp32]
platform = espressif32
framework = arduino
board = esp32dev
```

### 5. Install Necessary Extensions

Make sure the following extensions are installed in your Codespace or local environment:

1. **Wokwi Simulator** – To simulate your Arduino project.
2. **Arduino** – To handle Arduino code and libraries.
3. **C/C++** – For proper code syntax highlighting and IntelliSense.
4. **PlatformIO IDE** – To manage build configurations and dependencies.

![Extensions](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/Extenstions.png?raw=true)

Once the extensions are installed, PlatformIO will begin configuring your environment. You may see a configuration loading message.

![PlatformIO Configuring](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/platformio-configuring.png?raw=true)

### 6. Build the Project

After PlatformIO finishes configuring, click **Build** to compile the code.

![PlatformIO Build](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/platformio-build.png?raw=true)

If everything is set up correctly, you should see a build success message.

![Build Output](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/build-output.png?raw=true)

### 7. Enter Your License Key

When prompted, enter your Wokwi license key to continue the simulation.

![licence-key](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/licence-key.png?raw=true)

**Sample Reference Key:**
```
JnU9NDExNDMzOTE2NzAwNDgxNTM3Jm49QVJVVkkrQiZlPWFydXZpYmFsYW11cnVnYW4lNDBnbWFpbC5jb20meD0yMDI0MTIxOQDUGJjn9WS08KhQ1wqeo5hdL3e7YQBWpa2jQn5fFH5vC02cUWu561snpiR9XLkR_StBSXRv7j3DL34qMqmueEKSN3mG_P1QVlYK0UlhOScWEhgT1ZD3844r_S3IBcFKxAvg4fIbsX8388iPvgSCrBQNXzjxVS_Pk_PKUtc0eGsxY3pAfdNvl5MTMKuzIjneS8q3jYunrtkvMA30tCj_SZbCGj5eHJGlYkZ9IiSvAegqTkx2mBdDnhph0EyVVuYcITF9wEBAYKRQVisTNCtw_P8SSGZNcBZM4rCdeponWyQzYGzGu5_Sw3U51ZXB7_Sb0k7UAEncvYNuITgr85J_S2C3cwmG7r7z_SL

```

### 8. Start the Simulation

Once your license is verified, you can start the simulation. The LEDs should toggle in a flip-flop pattern as per your Arduino code.

![Start Simulation](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/start-simulation.png?raw=true)

Ensure that the Wokwi configuration paths in `wokwi.toml` are correct, and that all the peripherals, elf and firmwares paths are correctly defined.

![Ensure Correct Configuration](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/ensure.png?raw=true)

---

## OUTPUT

When the simulation starts, the LEDs should toggle between red, yellow, and green in a sequence, creating the flip-flop effect.

![Output](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/output.png?raw=true)

---

## Conclusion

Congratulations! You have successfully built and simulated your **Arduino Flip-Flop LED Project**. Feel free to modify the code and experiment with different patterns or other components.

For any issues or feedback, open an issue or contact me directly via GitHub.

---
