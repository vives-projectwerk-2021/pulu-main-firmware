# mbed LoRaWan shield

Main program to send data from a NUCLEO_L476RG with LoRaWAN using the LoRaWAN Shield (developed at Vives).

This project is inspired by the [LoRaWAN Shield Example](https://github.com/sillevl/lorawan-shield-example/) repository of [sillevl](https://github.com/sillevl).

## Setup

### LoRaWAN indoor gateway

Follow the steps from the [online documentation](https://www.thethingsindustries.com/docs/gateways/thethingsindoorgateway/).

### Mbed CLI (Windows only)

Use the mbed_installer which can be found [here](https://github.com/ARMmbed/mbed-cli-windows-installer/releases). (At the moment of developing, we used the most recent version 0.4.10)

We used conda as an environment management system to separate the dependencies of this project.

```bash
conda create --name projectwerk python=3.7
conda activate projectwerk
pip install mbed-cli
```

When having troubles with the GCC_ARM compiler, make sure you are using a version between 9 and 10.  
We used [9-2019-q4-major](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads/9-2019-q4-major) as compiler.

## Getting started

- Clone the project
- install library dependencies using `mbed deploy`
- set the configuration in `src/config.h` based on the example in `src/config.example.h`
- compile and flash using `mbed compile -f`

## Dependencies
