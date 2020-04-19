# arduino-cli commands

# Initial commands
arduino-cli config init
arduino-cli core update-index
arduino-cli core install arduino:avr
arduino-cli core list

# List connected Arduino boards
arduino-cli board list

# Compile sketch
arduino-cli compile --fqbn arduino:avr:uno <SKETCH>

# Upload sketch to Arduino
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno <SKETCH>

