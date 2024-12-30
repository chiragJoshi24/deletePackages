# deletePackages
C++ Script to delete related packages in bulk from Arch
```
pacman -Qs <keyword>
```
Copy the output from first line to last 
It should look something like this
```
local/aom 3.11.0-1
    Alliance for Open Media video codec
local/grilo 0.3.16-1
    Framework that provides access to various sources of multimedia content
local/gst-plugin-gtk 1.24.10-2
    Multimedia graph framework - gtk plugin
local/gst-plugin-gtk4 0.13.2-1
    Multimedia graph framework - gtk4 plugin
local/gst-plugin-pipewire 1:1.2.7-1
    Multimedia graph framework - pipewire plugin
```
Paste it in the file **data.txt** // Double check to see all the packages are what you intend to delete.
Run the script
