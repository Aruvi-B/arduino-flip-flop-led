# Arduino Flip-Flop LED Project

This project demonstrates a simple LED flip-flop pattern using an Arduino Uno. The LEDs will toggle between different colors in a sequential pattern, creating a flip-flop effect. The setup includes three LEDs connected to the following pins:

- **Red LED** on Pin 4
- **Yellow LED** on Pin 3
- **Green LED** on Pin 2

## Circuit Diagram

The circuit consists of three LEDs, each connected to the Arduino Uno through resistors. The LEDs are placed in a simple pattern where each LED will turn on in sequence. You can simulate this project using the Wokwi simulator.

You can view the circuit diagram and start the simulation directly from the link below:

- [View the project on Wokwi](https://wokwi.com/projects/414964657985674241)

![Circuit Diagram](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/circuit-diagram.png?raw=true)

To download the entire project, including the circuit setup and code files, click **Download Project ZIP** from the top left corner on Wokwi.

## Steps to Build

Follow these steps to create and run the project:

### 1. Create a New GitHub Repository

- Go to [GitHub](https://github.com/) and create a new repository.
- Upload the following files into your repository:
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

- Create a new folder named `src` inside your repository.
- Move the `sketch.ino` file into this folder for better organization.

### 4. Add Necessary Configuration Files

In the root directory, add the following two configuration files for proper simulation.

#### `wokwi.toml` Configuration File

```toml
[wokwi]
version = 1
elf = ".pio/build/uno/firmware.elf"
firmware = ".pio/build/uno/firmware.hex"

# Define any peripherals (LEDs, sensors, etc.) used in the simulation
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

This file sets up the PlatformIO environment for your project. Although this setup uses an ESP32 board, you can adapt it to other boards if needed.

![Explorer](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/Explorer.png "Explorer")


### 5. Install the Necessary Extensions

Make sure the following extensions are installed in your Codespace or local environment:

1. **Wokwi Simulator** – To simulate your Arduino project.
2. **Arduino** – To handle Arduino code and libraries.
3. **C/C++** – For proper code syntax highlighting and IntelliSense.
4. **PlatformIO IDE** – To manage build configurations and dependencies.

![Extenstions](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/Extenstions.png "Extensions")

Once the extensions are installed, you should see a message from the PlatformIO extension, indicating that the configuration is loading.

![Extenstions](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/platformio-message.png "platformio-message") 

![platformio-configuring](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/platformio-configuring.png "platformio-configuring")

### 6. Build the Project
After the PlatformIO environment finishes configuring, click Build to compile the code.

![platformio-build](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/platformio-build.png "platformio-build")

If everything is set up correctly, you should see a build success message.

![build-output](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/build-output.png "build-output")

### 7. Enter Your License Key
When prompted, enter your Wokwi license key to continue the simulation.
![licence-key](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/licence-key.png "licence-key")

**Sample Reference Key:** 
```
JnU9NDExNDMzOTE2NzAwNDgxNTM3Jm49QVJVVkkrQiZlPWFydXZpYmFsYW11cnVnYW4lNDBnbWFpbC5jb20meD0yMDI0MTIxOQDUGJjn9WS08KhQ1wqeo5hdL3e7YQBWpa2jQn5fFH5vC02cUWu561snpiR9XLkR_StBSXRv7j3DL34qMqmueEKSN3mG_P1QVlYK0UlhOScWEhgT1ZD3844r_S3IBcFKxAvg4fIbsX8388iPvgSCrBQNXzjxVS_Pk_PKUtc0eGsxY3pAfdNvl5MTMKuzIjneS8q3jYunrtkvMA30tCj_SZbCGj5eHJGlYkZ9IiSvAegqTkx2mBdDnhph0EyVVuYcITF9wEBAYKRQVisTNCtw_P8SSGZNcBZM4rCdeponWyQzYGzGu5_Sw3U51ZXB7_Sb0k7UAEncvYNuITgr85J_S2C3cwmG7r7z_SL

```
### 8. Start the Simulation
Once your license is verified, you can start the simulation. The LEDs should toggle in a flip-flop pattern as per your Arduino code.

![Start-Simulation](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/start-simulation.png "Simulation")

Ensure that the Wokwi configuration paths in wokwi.toml are correct, and that all the peripherals are correctly defined.

![ensure](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/ensure.png)

**OUTPUT**
![output](https://github.com/Aruvi-B/arduino-flip-flop-led/blob/main/Images/output.png)
