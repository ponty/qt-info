# qt-info

The project goal is to print information about QT in build-time and run-time.

[![Travis](http://img.shields.io/travis/ponty/qt-info.svg)] (https://travis-ci.org/ponty/qt-info)

## Build log example

```
Project MESSAGE: The project working directory is /home/ponty
Project MESSAGE: Qt version: 5.2.1
Project MESSAGE: Qt is installed in /usr
Project MESSAGE: Qt resources can be found in the following locations:
Project MESSAGE: Documentation: /usr/share/qt5/doc
Project MESSAGE: Header files: /usr/include/qt5
Project MESSAGE: Libraries: /usr/lib/x86_64-linux-gnu
Project MESSAGE: Binary files (executables): /usr/lib/x86_64-linux-gnu/qt5/bin
Project MESSAGE: Plugins: /usr/lib/x86_64-linux-gnu/qt5/plugins
Project MESSAGE: Data files: /usr/share/qt5
Project MESSAGE: Translation files: /usr/share/qt5/translations
Project MESSAGE: Settings:
Project MESSAGE: Examples: /usr/lib/x86_64-linux-gnu/qt5/examples
Project MESSAGE: Demonstrations: /usr/lib/x86_64-linux-gnu/qt5/examples
Project MESSAGE: PREFIX: /usr/local
Project MESSAGE: CONFIG: lex yacc debug exceptions depend_includepath testcase_targets import_plugins import_qpa_plugin qt warn_on release link_prl incremental gdb_dwarf_index shared qpa no_mocdepend release qt_no_framework linux unix posix gcc debug console debug
Project MESSAGE: QT: core gui core gui opengl
Project MESSAGE: DEFINES:
Project MESSAGE: Available modules:
Project MESSAGE:     concurrent
Project MESSAGE:     core
Project MESSAGE:     dbus
Project MESSAGE:     declarative
Project MESSAGE:     designer
Project MESSAGE:     gui
Project MESSAGE:     help
Project MESSAGE:     multimedia
Project MESSAGE:     multimediawidgets
Project MESSAGE:     network
Project MESSAGE:     opengl
Project MESSAGE:     printsupport
Project MESSAGE:     qml
Project MESSAGE:     qmltest
Project MESSAGE:     x11extras
Project MESSAGE:     quick
Project MESSAGE:     script
Project MESSAGE:     scripttools
Project MESSAGE:     sensors
Project MESSAGE:     serialport
Project MESSAGE:     sql
Project MESSAGE:     svg
Project MESSAGE:     testlib
Project MESSAGE:     uitools
Project MESSAGE:     webkit
Project MESSAGE:     webkitwidgets
Project MESSAGE:     widgets
Project MESSAGE:     xml
Project MESSAGE:     xmlpatterns
Project MESSAGE: Missing modules:
Project MESSAGE:     axcontainer
Project MESSAGE:     axserver
Project MESSAGE:     winextras
```

## Run log example

```
qt-info
------------------------------------------------------
build-time
------------------------------------------------------
time: ...
version:  5.2.1
BYTE_ORDER: LITTLE_ENDIAN
WordSize:  64
QT build: DEBUG
QT buildDate: "..."

------------------------------------------------------
run-time
------------------------------------------------------
time:  "..."
version:  5.2.1
QT PrefixPath: "/usr"
QT HeadersPath: "/usr/include/qt5"
QT LibrariesPath: "/usr/lib/x86_64-linux-gnu"
QT BinariesPath: "/usr/lib/x86_64-linux-gnu/qt5/bin"
QT PluginsPath: "/usr/lib/x86_64-linux-gnu/qt5/plugins"
QT ImportsPath: "/usr/lib/x86_64-linux-gnu/qt5/imports"
QT Qml2ImportsPath: "/usr/lib/x86_64-linux-gnu/qt5/qml"
platformName: "xcb"
screens:  (QScreen(0x8b9390) )
        depth: 24
        availableGeometry: QRect(65,24 1855x1056)
        availableVirtualGeometry: QRect(65,24 1855x1056)
        availableVirtualSize: QSize(1855, 1056)
        geometry: QRect(0,0 1920x1080)
        logicalDotsPerInch: 96
        logicalDotsPerInchX: 96
        logicalDotsPerInchY: 96
        nativeOrientation: 0
        orientation: 2
        physicalDotsPerInch: 95.1083
        physicalDotsPerInchX: 95.6235
        physicalDotsPerInchY: 94.5931
        physicalSize: QSizeF(510, 290)
        primaryOrientation: 2
        refreshRate: 60
        size: QSize(1920, 1080)
        virtualGeometry: QRect(0,0 1920x1080)
        virtualSize: QSize(1920, 1080)
        handle: 0x8b93b0
------------------------------------------------------
OpenGL
------------------------------------------------------
OpenGL Versions Supported:  QFlags(0x1|0x2|0x4|0x8|0x10|0x20|0x40|0x1000|0x2000|0x4000|0x8000)
       OpenGL_Version_1_1 : yes
       OpenGL_Version_1_2 : yes
       OpenGL_Version_1_3 : yes
       OpenGL_Version_1_4 : yes
       OpenGL_Version_1_5 : yes
       OpenGL_Version_2_0 : yes
       OpenGL_Version_2_1 : yes
       OpenGL_Version_3_0 : yes
       OpenGL_Version_3_1 : yes
       OpenGL_Version_3_2 : yes
       OpenGL_Version_3_3 : yes
       OpenGL_Version_4_0 : no
       OpenGL_Version_4_1 : no
       OpenGL_Version_4_2 : no
       OpenGL_Version_4_3 : no
       OpenGL_ES_Common_Version_1_0 : no
       OpenGL_ES_CommonLite_Version_1_0 : no
       OpenGL_ES_Common_Version_1_1 : no
       OpenGL_ES_CommonLite_Version_1_1 : no
       OpenGL_ES_Version_2_0 : no
Driver Version String: ""
Current Context: QGLFormat(options QFlags(0x1|0x2|0x4|0x8|0x20|0x80|0x200|0x400) , plane  0 , depthBufferSize  24 , accumBufferSize  -1 , stencilBufferSize  8 , redBufferSize  8 , greenBufferSize  8 , blueBufferSize  8 , alphaBufferSize  8 , samples  4 , swapInterval  -1 , majorVersion  3 , minorVersion  3 , profile  1 )
   DoubleBuffer: true
   DepthBuffer: true
   Rgba: true
   AlphaChannel: true
   AccumBuffer: false
   StencilBuffer: true
   StereoBuffers: false
   DirectRendering: true
   HasOverlay: false
   SampleBuffers: true
   DeprecatedFunctions: true
```
