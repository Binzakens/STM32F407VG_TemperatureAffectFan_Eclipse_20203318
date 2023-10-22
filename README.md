**_# Fan-Controller-with-Heat-input_**
This small project has been created and built related to the free from built-in library in Eclipse CDT for Embedded System. /n

**INSTRUCTIONS FOR UNIX**
1. Choose <> Code and Copy HTTPS for Git. (*Link_HTTPS_that_you_copied). For example: https://github.com/Binzakens/STM32F407VG_TemperatureAffectFan_Eclipse_20203318.git
2. Open CMD (Terminal) and type the commands in this order
  $ cd /home/*user_name/eclipse-workspace/
  $ git clone *Link_HTTPS_that_you_copied
3. It is likely that you've cloned the Git above into your Eclipse's default workspace directory. Check if the file is there or not. The dir should've named 'STM32F407VG_TemperatureAffectFan_Eclipse_20203318'
4. Open Eclipse IDE
5. File -> Import -> General -> Choose 'Existing Projects into Workspace' -> Browse the file in /home/*user_name/eclipse-workspace/STM32F407VG_TemperatureAffectFan_Eclipse_20203318
6. Choose 'Select All' and 'Search for nested projects' option. Click Finish!
7. Build the Project for the first time and Debug it. Make sure to configure the Board and Device name in gnuarmeclipse
8. Board name: STM32F4-Discovery. Device name: STM32F407VG.
9. Profit!
