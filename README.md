# rp2040_template

## Dependencies

- Install gcc arm and add the bin dir to your $PATH

- Install rp2040 sdk and add PICO_SDK_PATH to your environment (optional - if you don't do it sdk will be downloaded in build dir)

- Install openocd with rp2040 support from https://github.com/raspberrypi/openocd.git

```
git clone git clone https://github.com/raspberrypi/openocd.git --recursive --branch rp2040 --depth=1
cd openocd
./bootstrap
./configure --disable-presto --disable-openjtag
make -j4
sudo make install
```

## Building

    mkdir build && cd build && cmake .. && make

## Flashing

    make flash
