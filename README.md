# arduino-cli commands

## Initial commands
```bash
arduino-cli config init
arduino-cli core update-index
arduino-cli core install arduino:avr
arduino-cli core list
```

## List connected Arduino boards
```bash
arduino-cli board list
```

## Compile sketch
```bash
arduino-cli compile --fqbn arduino:avr:uno <SKETCH>
```

## Upload sketch to Arduino
```bash
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno <SKETCH>
```

## Useful links
[Arduino CLI](https://github.io/arduino/arduino-cli)
