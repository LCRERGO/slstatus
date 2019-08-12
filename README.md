slstatus - suckless status(Njord build)
==========================
![Njord's Logo](NjordLogo.png)
slstatus is a suckless status monitor for window managers that use WM_NAME
(e.g. dwm) or stdin to fill the status bar. This is a custom build of 
slstatus where it is used in Njord's dwm build. It has custom unicode functions
(only works on Linux).


Features
--------
- Battery percentage/state/time left
- CPU usage
- CPU frequency
- Custom shell commands
- Date and time
- Disk status (free storage, percentage, total storage and used storage)
- Available entropy
- Username/GID/UID
- Hostname
- IP address (IPv4 and IPv6)
- Kernel version
- Keyboard indicators
- Keymap
- Load average
- Network speeds (RX and TX)
- Number of files in a directory (hint: Maildir)
- Memory status (free memory, percentage, total memory and used memory)
- Swap status (free swap, percentage, total swap and used swap)
- Temperature
- Uptime
- Volume percentage (OSS/ALSA)
- WiFi signal percentage and ESSID


Requirements
------------
Currently slstatus works on FreeBSD, Linux and OpenBSD.
In order to build slstatus you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (slstatus is installed into the
/usr namespace by default).

Afterwards enter the following command to build and install slstatus (if
necessary as root):

    make clean install


Running slstatus
----------------
See the man page for details.


Configuration
-------------
slstatus can be customized by creating a custom config.h and (re)compiling the
source code. This keeps it fast, secure and simple.


Todo
----
Cleaning up the whole codebase it the goal before thinking about a release.
