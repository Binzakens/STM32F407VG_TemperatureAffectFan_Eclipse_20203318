**_# Fan-Controller-with-Heat-input_**
This project has been created and built related to the free from built-in library in Eclipse CDT for Embedded System. 
**NOTED** that just for educational purpose, no further licensing is beyond this scope !!

**INSTRUCTIONS FOR GNU/UNIX SYSTEM**
1. Choose **<> Code** and copy HTTPS url to the clipboard for later Git usage. (_HTTPS_link_that_you_copied_). For example: https://github.com/Binzakens/STM32F407VG_TemperatureAffectFan_Eclipse_20203318.git
 
2. Open your cmd (Terminal Emulator) and type the commands in this order: (If git is prompted to download during the process, press **Y/n y**) 
```
$ mkdir -p ~/eclipse-workspace/
```
```
$ cd ~/eclipse-workspace/
```
```
$ git clone https://github.com/Binzakens/STM32F407VG_TemperatureAffectFan_Eclipse_20203318.git
```
3. Follow above instructions will lead you clone the url above into your Eclipse's default workspace directory. Check whether the directory was there or not. The directory should've named 'STM32F407VG_TemperatureAffectFan_Eclipse_20203318'
4. Open Eclipse IDE
5. File -> Import -> General -> Choose 'Existing Projects into Workspace' -> Browse the file in /home/*user_name/eclipse-workspace/STM32F407VG_TemperatureAffectFan_Eclipse_20203318
6. Choose 'Select All' and 'Search for nested projects' option. Click Finish!
7. Build the Project for the first time and Debug it. Make sure to configure the Board and Device name in gnuarmeclipse
8. Board name: STM32F4-Discovery. Device name: STM32F407VG.
9. Profit!
