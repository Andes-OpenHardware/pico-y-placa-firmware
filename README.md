# Pico y Placa firmware

[![Build Status](https://travis-ci.org/Andes-OpenHardware/pico-y-placa-firmware.svg?branch=master)](https://travis-ci.org/Andes-OpenHardware/pico-y-placa-firmware)

Pico y Placa is an IoT product created to notify people when they're moving their car on:
- A Pico y Placa day given the last plate digit of their car.
- A zone (or near it) where Pico y Placa applies.
- A schedule in which the Pico y Placa applies.

This repo contains the firmware open source code for the IoT device, written in C++ using the PlatformIO platform.

---

## Supported devices

At this moment, the supported devices on which the firmware can run are:
- Arduino UNO

---

## How to install the firmware

To install the firmware on any of the supported devices you need to have at least PlatformIO Core installed on your machine (see the PlatformIO [official documentation](http://docs.platformio.org/en/latest/installation.html#system-requirements) for more details on how to install PlatformIO Core depending on your OS).
Once you have PlatformIO Core installed and working, you can execute on your terminal:
`pio run -e <environment> -t upload` or `platformio run -e <environment> -t upload`
where <_environment_> is any of the environments defined in the [platformio.ini](https://github.com/Andes-OpenHardware/pico-y-placa-firmware/blob/master/platformio.ini) file.

---

## How to contribute

If you'd like to contribute to this (or any of our projects), please take a look at the [CONTRIBUTING.md](https://github.com/Andes-OpenHardware/pico-y-placa-firmware/blob/master/CONTRIBUTING.md) file on this repo.
