# RPIPicoMicroROS_USB_UART
MicroROS example using communicating over USB but leaving STDIO free on UART for telemetary for the Raspberry PI Pico.

Example built to support video blog on [YouTube @DrJonEA](https://youtube.co.uk/@drJonEA)

## Basis and Libraries
This example is based on the MicroROS Demo and library built as part of (micro_ros_raspberrypi_pico_sdk)[https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk] 

## Issues
pico_usb_transport read function has a 500ns delay after the read to make the comms stable. This just feels wrong. 

## Cloan and build
```
git clone https://github.com/jondurrant/RPIPicoMicroROS_USB_UART --recurse-submodules
cd RPIPicoMicroROS_USB_UART
mkdir build
cd build
cmake ..
make
```

You will need a ROS2 installation and MicroROS Agent running to connect to.


