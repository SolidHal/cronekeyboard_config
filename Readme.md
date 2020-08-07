the qmk configurator has changed
you can run:
`qmk compile thejsonfile.json` to build the .hex which needs to be flashed

need to set: 
EXTRAKEY_ENABLE = yes
in keyboards/crkbd/rules.mk
to get volume keys, media keys to work
