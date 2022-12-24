#!/bin/bash

path=$1

# compiling
/c/arduino-cli/arduino-cli.exe compile --fqbn arduino:avr:uno $path

sleep 0.3

# uploading into arduino
/c/arduino-cli/arduino-cli.exe upload -v -p COM4 --fqbn arduino:avr:uno $path 
