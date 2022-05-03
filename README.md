# Rotating cube using sdl2

## how to compile and run the file

In order to run the program in your computer you need to
compile it first.

## How to compile in Windows
For compiling the code in your windows machine you'll have to first install Mingw and SDL2 in your machine.
You can donwload Mingw [here](https://ufpr.dl.sourceforge.net/project/mingw/Installer/mingw-get-setup.exe)

After downloading MINGW, you'll have to add the bin code to the enviroment variables. To do so, On the Windows taskbar, right-click the Windows icon and select System. In the Settings window, under Related Settings, click Advanced system settings. On the Advanced tab, click Environment Variables
![Image 1](./images/Variables.png)
In the Enviroment variables menu, click on path - Edit and Add C:\MinGW\bin to the list. 
![Image Path](./images/EditPath.png)

Now, you can open the cmd and run 'g++ --version' to see if it works. If the g++ compiler version is displayed, it means that the compiler is now working.

Now you have to install SDL2 in your machine. You can download it 
[here](https://www.libsdl.org/release/SDL2-devel-2.0.20-mingw.tar.gz)

After downloading it, extract the i686-w64 file to your C: directory and change the name to mingw_dev_lib

Done!! Now you are ready to compile and run the program in your machine
 ### Compiling the file
 open the cmd and go to the program directory. Now run the command -'mingw32-make'
 
 if you receive no error messages it means the compilation was a success.

 ### Running the program
 After compiling, to run the program, run the 'mingw32-make run' command.

 You should now be seeing a cube rotating in your screen. To close the window, press the 'esc' key.