# Arduino Experiment
Experiments for Arduino learning.

## Description
This repo recorded my learning process of Arduino, including basic functions and source code research of Arduino.  
All resources comes from Internet and Jinhui Zhu, professor of School of Software Engineering, South China University of Technology.

## Environment
> OS: Manjaro 18.1.2 Juhraya  
> Kernel version: x86_64 Linux 4.19.81-1-MANJARO  
> Board: Arduino Uno  
> Arduino version: 1.8.9  
> Java version: openJDK 11.0.5  
> Develop tool: Visual Studio Code / Arduino IDE 1.8.9
> Programmer: AVRISP mkII

It’s easy to run program when using Arduino IDE. However, some configs are needed before you want to run with VSCode (with Arduino extensions installed).  

All configs (except port maybe, you can fix it in *arduino.json* later) will be set automatically after setting *Arduino path* manually. **Do not copy configuration directly.**

**.vscode/arduino.json**:  

```javascript
{
    "board": "arduino:avr:uno",
    "programmer": "AVRISP mkII",
    "sketch": "LED/src/blink.ino", // current program full dir, need to change
    "port": "/dev/ttyACM0" // port of board, need to change
}
```

**.vscode/c_cpp_properties.json**:  

```javascript
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "/home/jhseng/.arduino15/packages/arduino/tools/**",
                "/home/jhseng/.arduino15/packages/arduino/hardware/avr/1.8.1/**"
            ], 
            "forcedInclude": [
                "/home/jhseng/.arduino15/packages/arduino/hardware/avr/1.8.1/cores/arduino/Arduino.h"
            ],
            "intelliSenseMode": "gcc-x64",
            "compilerPath": "/usr/bin/clang"
        }
    ],
    "version": 4
}
```

Author: TzeHim Sung  
Date: 11/14/2019