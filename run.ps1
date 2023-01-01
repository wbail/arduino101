$path = $args[0]

# compiling
C:\arduino-cli\arduino-cli.exe compile --fqbn arduino:avr:uno $path

Start-Sleep -Seconds 0.3

# upload to arduino
C:\arduino-cli\arduino-cli.exe upload -v -p COM4 --fqbn arduino:avr:uno $path

