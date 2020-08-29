the qmk configurator has changed
you can run:
`qmk compile thejsonfile.json` to build the .hex which needs to be flashed

install pre-reqs:
sudo apt install python3-pip gcc-avr avrdude avr-libc

run:
sudo bin/qmk flash crkbd-rev1-solidhal.json
to flash

need to set: 
EXTRAKEY_ENABLE = yes
in keyboards/crkbd/rules.mk
to get volume keys, media keys to work
