Singularity Computers is at the forefront of innovation in the realm of building high-end water-cooled computer systems and customizations. Our latest development, the _FanGuardian_, represents a significant leap forward in the world of PC monitoring and control.

# FanGuardian
The _FanGuardian_ is a revolutionary piece of hardware designed to elevate the user experience in PC building and customization. At its core, the board is a comprehensive monitoring system that provides real-time data on crucial performance metrics, including motherboard voltage, fan speed, ambient temperature, and water temperature.

This device seamlessly integrates into your PC setup, providing a centralized hub for monitoring and control. By connecting directly to your system's components, including fans, pumps, and sensors, the board gathers data in real-time and displays it on the touch screen interface for easy access.

# Key Features
- **Touch Screen Interface:** Equipped with an intuitive touch screen interface, the _FanGuardian_ provides a user-friendly experience, making it easy to access and interpret real-time data at a glance.
- **Display sensor values:** Check your key PC sensors in real-time, such as motherboard voltages, water and ambient temperatures and FAN speed values.
- **Configurable FAN speed alerts:** Configure alerting tresholds for every kind of FANs or water pumps. If the RPM drops below the treshold _FanGuardian_ will alert.
- **Control your RGB stripe:** Control your RGB LED stripe from the touch display. You can set solid color pattern or choose an animation effect from the list. There is "Aurora" which simulates the Northern Lights, but you can set a simple color fade or twinkle effect, or the classic rainbow which is quite popular among PC modders. One of the coolest pattern is "Temperature effect", which reads the temperature sensor values and sets the RGB stripe color between blue and red, depending on the selected temperature source. Also when FAN alert treshold is reached, the RGB stripe will blink with a color you configured.

# Getting started
The FanGuardianUI firmware is written in C++. The GUI was designed in [SquareLineStudio](https://squareline.io/downloads). If you want to do any modification, we suggest to use [Microsoft Visual Studio Code](https://code.visualstudio.com/) with PlatformIO extension.

## Configuring PlatformIO
After you installed PlatformIO extension to VSCode, you have to set up the display board for _FanGuardian_. We are using `Panlee WT32-SC01-Plus` display, which is not supported by PlatformIO at the moment, so you have to add this board manually.
- copy the `assets/for-platformio/wt32-sc01-plus.json` to your `.platformio/platforms/espressif32/boards/` folder

## Changing the GUI
1. In order to change the GUI design, layout, screen order, events, animations, fonts etc. you have to install SquareLineStudio to your computer. It is available on Mac, Windows and Linux: [SquareLineStudio](https://squareline.io/downloads).
2. Next step is to add the `WT32-SC01-Plus` board to `SquareLineStudio`:
- copy the `assets/for-squarelinestudio/wt32_sc01_plus` folder to your `SquareLine/boards/Espressif/`
- restart SquareLineStudio
3. Open the 'Project settings' in SquareLineStudio and change the export paths to point this project's `FanGuardianUI/src/ui/` folder: <img width="629" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/592fb11a-cb94-4faa-914d-d04368f432a7">
4. If you want to export your GUI changes, click 'Export UI files' in 'Export' menu

## Building and flashing
PlatformIO offers an option to compile and upload the firmware directly to the board. Just connect it with an USB cable and click 'Upload' in the top-right corner:

<img width="294" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/0f5bf2d7-2a6c-4a3e-9121-6d0f9215244b">

### Building binary
Download esptool to your computer (from https://github.com/espressif/esptool/releases), run PlatformIO binary build (ie. from the VSCode GUI) and run this command to combine the different parts into one binary. (Note, that you have to set the proper path to your PlatformIO project library)

`./esptool --chip esp32s3 merge_bin -o fanguardian-ui.bin --flash_mode dio --flash_size 16MB 0x0 ./.pio/build/WT32-SC01-PLUS/bootloader.bin 0x8000 ./.pio/build/WT32-SC01-PLUS/partitions.bin 0x10000 ./.pio/build/WT32-SC01-PLUS/firmware.bin`

You can then flash the firmware to you display board using the following command:

`./esptool write_flash 0x0 fanguardian-ui.bin`

## UI screens
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/565388af-4420-4a40-874d-8f526e4a5dbf">
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/89e66e2e-313f-4793-98c6-9a6d68aaa6e5">
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/3901f1e0-2dd5-4fe1-bc60-bc20fc52e480">
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/c0a94a56-c304-46ab-8abf-5b5296785111">
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/67fb6e5a-02b6-4a7d-bf24-0e729ee2806c">
<img width="420" alt="image" src="https://github.com/user-attachments/assets/3cd1d757-cc1c-4271-88b1-ae31d511494b">
<img width="420" alt="image" src="https://github.com/user-attachments/assets/33c120e0-7448-4f0a-b064-a8feb1359a63">
<img width="420" alt="image" src="https://github.com/SingularityComputers/FanGuardianUI/assets/165785169/4409b574-4593-43fc-87d2-3a76ee5cd14c">


# License and copyrights

All intellectual property rights and copyrights pertaining to this software are attributed to their respective authors.

As we are committed to our customers and to the PC modding community, we have decided to opensource our firmwares to encourage and inspire the community to create something new and better together.

This means that the code is licensed under:
- [GNU General Public License v3.0](https://choosealicense.com/licenses/gpl-3.0/).

The GNU GPLv3 lets you to do almost anything you want with your project, except distributing closed source versions.


