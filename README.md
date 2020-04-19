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
[Arduino CLI](https://github.com/arduino/arduino-cli)

## Pitfalls
1) When uploading sketch to Arduino, if you get error from avrdude <b>can't open device "/dev/ttyACM0": Permission denied</b>, first check that the port exists:
```bash
ls /dev/ttyACM0
```
Then set read/write permissions:
```bash
sudo chmod a+rw /dev/ttyACM0
```
Source: [Ask Ubuntu](https://askubuntu.com/questions/1056314/uploading-code-to-arduino-gives-me-the-error-avrdude-ser-open-cant-open-d)
