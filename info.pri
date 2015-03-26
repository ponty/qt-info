message(The project working directory is $$(PWD))

message(Qt version: $$[QT_VERSION])
message(Qt is installed in $$[QT_INSTALL_PREFIX])
message(Qt resources can be found in the following locations:)
message(Documentation: $$[QT_INSTALL_DOCS])
message(Header files: $$[QT_INSTALL_HEADERS])
message(Libraries: $$[QT_INSTALL_LIBS])
message(Binary files (executables): $$[QT_INSTALL_BINS])
message(Plugins: $$[QT_INSTALL_PLUGINS])
message(Data files: $$[QT_INSTALL_DATA])
message(Translation files: $$[QT_INSTALL_TRANSLATIONS])
message(Settings: $$[QT_INSTALL_SETTINGS])
message(Examples: $$[QT_INSTALL_EXAMPLES])
message(Demonstrations: $$[QT_INSTALL_DEMOS])

message(PREFIX: $${PREFIX})
message(CONFIG: $${CONFIG})
message(QT: $${QT})
message(DEFINES: $${DEFINES})

equals(QT_MAJOR_VERSION, 5) {
    defineTest(checkModules) {
         modules = $$ARGS

         message(Available modules:)
         for(m, modules) {
             qtHaveModule($$m) {
#                available+=$$m
                message("    $$m")
             }
         }
#         message(Available modules: $$available)

         message(Missing modules: )
         for(m, modules) {
             !qtHaveModule($$m) {
#                missing+=$$m
                message("    $$m")
             }
         }
#         message(Missing modules: $$missing)
         return(true)
     }
    checkModules( \
        axcontainer \
        axserver \
        concurrent \
        core \
        dbus \
        declarative \
        designer \
        gui \
        help \
        multimedia \
        multimediawidgets \
        network \
        opengl \
        printsupport \
        qml \
        qmltest \
        x11extras \
        quick \
        script \
        scripttools \
        sensors \
        serialport \
        sql \
        svg \
        testlib \
        uitools \
        webkit \
        webkitwidgets \
        widgets \
        winextras \
        xml \
        xmlpatterns \
    )

    # http://qt-project.org/doc/qt-5/qmake-variable-reference.html#qt
    #axcontainer	QAxContainer, which is part of the Active Qt framework
    #axserver           QAxServer, which is part of the Active Qt framework
    #concurrent         Qt Concurrent
    #core (included by default)	Qt Core
    #dbus               Qt D-Bus
    #declarative	Qt Quick 1 (deprecated)
    #designer           Qt Designer
    #gui (included by default)	Qt GUI
    #help               Qt Help
    #multimedia         Qt Multimedia
    #multimediawidgets	Qt Multimedia Widgets
    #network            Qt Network
    #opengl             Qt OpenGL (deprecated)
    #printsupport	Qt Print Support
    #qml                Qt QML
    #qmltest            Qt QML Test
    #x11extras          Qt X11 Extras
    #quick              Qt Quick
    #script             Qt Script (deprecated)
    #scripttools	Qt Script Tools (deprecated)
    #sensors            Qt Sensors
    #serialport         Qt Serial Port
    #sql                Qt SQL
    #svg                Qt SVG
    #testlib            Qt Test
    #uitools            Qt UI Tools
    #webkit             Qt WebKit
    #webkitwidgets	Qt WebKit Widgets
    #widgets            Qt Widgets
    #winextras          Qt Windows Extras
    #xml                Qt XML (deprecated)
    #xmlpatterns
}

