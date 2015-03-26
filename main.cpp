#include <QtCore>
#include <QDebug>
//#include <QGuiApplication>
#include <QApplication>
//#include <QScreen>
//#include <qpa/qplatformnativeinterface.h>
//#include <QOpenGLContext>
//#include <EGL/egl.h>
//#include <EGL/eglext.h>
//#include <GLES2/gl2.h>
//#include <private/qguiapplication_p.h>
//#include <qpa/qguiapplication_p.h>
#include <QGLWidget>
#include <QScreen>

#if QT_VERSION >= 0x050000
// Qt5 code
#include <qpa/qplatformintegration.h>
#else
// Qt4 code

#endif


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);







    qDebug() << "qt-info" ;
    qDebug() << "------------------------------------------------------" ;
    qDebug() << "build-time" ;
    qDebug() << "------------------------------------------------------" ;
    qDebug() << "time: " __DATE__  " "__TIME__;
    qDebug() << "version: " << QT_VERSION_STR;
#if Q_BYTE_ORDER == Q_BIG_ENDIAN
    qDebug() << "BYTE_ORDER: BIG_ENDIAN" ;
#endif
#if Q_BYTE_ORDER == Q_LITTLE_ENDIAN
    qDebug() << "BYTE_ORDER: LITTLE_ENDIAN" ;
#endif
    qDebug() << "WordSize: " << ( sizeof( void * ) <<3 ) ;

//    if (QLibraryInfo::isDebugBuild())
//    {
//        qDebug() << "QT build: DEBUG" ;
//    }
//    else
//    {
//        qDebug() << "QT build: RELEASE" ;
//    }
#ifdef QT_DEBUG
    qDebug() << "QT build: DEBUG" ;
#else
    qDebug() << "QT build: RELEASE" ;
#endif

    qDebug() << "QT buildDate:" << QLibraryInfo::buildDate().toString();
    qDebug() << "" ;

    qDebug() << "------------------------------------------------------" ;
    qDebug() << "run-time" ;
    qDebug() << "------------------------------------------------------" ;
    qDebug() << "time: " << QDateTime::currentDateTime ().toString();
    qDebug() << "version: " << qVersion ();
    qDebug() << "QT PrefixPath:" << QLibraryInfo::location(QLibraryInfo::PrefixPath);
    qDebug() << "QT HeadersPath:" << QLibraryInfo::location(QLibraryInfo::HeadersPath);
    qDebug() << "QT LibrariesPath:" << QLibraryInfo::location(QLibraryInfo::LibrariesPath);
    qDebug() << "QT BinariesPath:" << QLibraryInfo::location(QLibraryInfo::BinariesPath);

    qDebug() << "QT PluginsPath:" << QLibraryInfo::location(QLibraryInfo::PluginsPath);
    qDebug() << "QT ImportsPath:" << QLibraryInfo::location(QLibraryInfo::ImportsPath);
#if QT_VERSION >= 0x050000
    qDebug() << "QT Qml2ImportsPath:" << QLibraryInfo::location(QLibraryInfo::Qml2ImportsPath);

    qDebug() << "platformName:" <<     app.platformName();
    qDebug() << "screens: " << app.screens();
    foreach (QScreen* s, app.screens()) {
        qDebug() << "	depth:" <<     s->depth();
        qDebug() << "	availableGeometry:" <<     s->availableGeometry();
        qDebug() << "	availableVirtualGeometry:" <<     s->availableVirtualGeometry();
        qDebug() << "	availableVirtualSize:" <<     s->availableVirtualSize();
        qDebug() << "	geometry:" <<     s->geometry();
        qDebug() << "	logicalDotsPerInch:" <<     s->logicalDotsPerInch();
        qDebug() << "	logicalDotsPerInchX:" <<     s->logicalDotsPerInchX();
        qDebug() << "	logicalDotsPerInchY:" <<     s->logicalDotsPerInchY();
        qDebug() << "	nativeOrientation:" <<     s->nativeOrientation();
        qDebug() << "	orientation:" <<     s->orientation();
        qDebug() << "	physicalDotsPerInch:" <<     s->physicalDotsPerInch();
        qDebug() << "	physicalDotsPerInchX:" <<     s->physicalDotsPerInchX();
        qDebug() << "	physicalDotsPerInchY:" <<     s->physicalDotsPerInchY();
        qDebug() << "	physicalSize:" <<     s->physicalSize();
        qDebug() << "	primaryOrientation:" <<     s->primaryOrientation();
        qDebug() << "	refreshRate:" <<     s->refreshRate();
        qDebug() << "	size:" <<     s->size();
        qDebug() << "	virtualGeometry:" <<     s->virtualGeometry();
        qDebug() << "	virtualSize:" <<     s->virtualSize();
        qDebug() << "	handle:" <<     s->handle();

        //qDebug() << "	gettimestamp:" <<   pi->nativeResourceForScreen("gettimestamp", s);
    }
#endif

#if 0
    QPlatformIntegration* pi = QGuiApplicationPrivate::platformIntegration();
    qDebug() << "PLATFORM ThreadedPixmaps:" <<  pi->hasCapability(QPlatformIntegration::ThreadedPixmaps);
    qDebug() << "PLATFORM OpenGL:" <<  pi->hasCapability(QPlatformIntegration::OpenGL);
    qDebug() << "PLATFORM ThreadedOpenGL:" <<  pi->hasCapability(QPlatformIntegration::ThreadedOpenGL);
    qDebug() << "PLATFORM SharedGraphicsCache:" <<  pi->hasCapability(QPlatformIntegration::SharedGraphicsCache);
    qDebug() << "PLATFORM BufferQueueingOpenGL:" <<  pi->hasCapability(QPlatformIntegration::BufferQueueingOpenGL);
    qDebug() << "PLATFORM WindowMasks:" <<  pi->hasCapability(QPlatformIntegration::WindowMasks);
    qDebug() << "PLATFORM MultipleWindows:" <<  pi->hasCapability(QPlatformIntegration::MultipleWindows);
    qDebug() << "PLATFORM ApplicationState:" <<  pi->hasCapability(QPlatformIntegration::ApplicationState);
    qDebug() << "PLATFORM ForeignWindows:" <<  pi->hasCapability(QPlatformIntegration::ForeignWindows);
    qDebug() << "PLATFORM NonFullScreenWindows:" <<  pi->hasCapability(QPlatformIntegration::NonFullScreenWindows);
    qDebug() << "PLATFORM NativeWidgets:" <<  pi->hasCapability(QPlatformIntegration::NativeWidgets);
    qDebug() << "PLATFORM WindowManagement:" <<  pi->hasCapability(QPlatformIntegration::WindowManagement);
    qDebug() << "PLATFORM SyncState:" <<  pi->hasCapability(QPlatformIntegration::SyncState);
    qDebug() << "PLATFORM RasterGLSurface:" <<  pi->hasCapability(QPlatformIntegration::RasterGLSurface);
    qDebug() << "PLATFORM AllGLFunctionsQueryable:" <<  pi->hasCapability(QPlatformIntegration::AllGLFunctionsQueryable);
    qDebug() << "PLATFORM themeNames:" <<  pi->themeNames();
//    qDebug() << "PLATFORM openGLModuleType:" <<  pi->openGLModuleType();
#endif
    //QOpenGLContext *currentContext = QOpenGLContext::currentContext();
    //qDebug() << "	GLXContext:" <<      currentContext;

    //void* glxContext = pi->nativeResourceForContext("GLXContext", currentContext);
    //qDebug() << "	GLXContext:" <<      (glxContext!=0);

    //void* eglContext = pi->nativeResourceForContext("EglContext", currentContext);
    //qDebug() << "	EglContext:" <<      eglContext;


    //qDebug() << "	GLX:" <<     pi->nativeResourceForContext("GLXContext", currentContext) != 0;
//    EGLDisplay* m_eglDisplay = static_cast<EGLDisplay*>(
//                pi->nativeResourceForContext("eglDisplay", currentContext));
//    EGLConfig* m_eglConfig = static_cast<EGLConfig*>(
//                pi->nativeResourceForContext("eglConfig", currentContext));

//    QOpenGLContext* m_context = new QOpenGLContext();
//    qDebug() << m_context->format();
//    //if (screen)
//    //    m_context->setScreen(screen);
//    qDebug() << m_context->format();
//    //m_context->setFormat(format);
//    qDebug() << m_context->format();
//    //if (share)
//    //    m_context->setShareContext(share->m_context);
//    qDebug() << m_context->format();
//    m_context->create();
//    qDebug() << m_context->format();

//    qDebug() << app.instance();
//    qDebug() << QCoreApplication::instance();
//    QGLWidget* _mainGL = new QGLWidget();
//    _mainGL->makeCurrent();

//    //GLenum err = glewInit();
//    //if (GLEW_OK != err)
//    //{
//    //    throw Core::InsufficientVideoCard("GLEW initiation failed", (const char*)glewGetErrorString(err));
//    //}

//    qDebug() << "OpenGL Versions Supported: " << QGLFormat::openGLVersionFlags();

//    QString versionString(QLatin1String(reinterpret_cast<const char*>(glGetString(GL_VERSION))));
//    qDebug() << "Driver Version String:" << versionString;
//    qDebug() << "Current Context:" << _mainGL->format();



    qDebug() << "------------------------------------------------------" ;
    qDebug() << "OpenGL" ;
    qDebug() << "------------------------------------------------------" ;

    qDebug() << "OpenGL Versions Supported: " << QGLFormat::openGLVersionFlags();

#define GL_VERSION_TEST(VAR) \
    qDebug() << "      " << #VAR << ":" << ((QGLFormat::openGLVersionFlags() & QGLFormat::VAR) ? "yes" : "no");


    GL_VERSION_TEST(OpenGL_Version_1_1);
    GL_VERSION_TEST(OpenGL_Version_1_2);
    GL_VERSION_TEST(OpenGL_Version_1_3);
    GL_VERSION_TEST(OpenGL_Version_1_4);
    GL_VERSION_TEST(OpenGL_Version_1_5);
    GL_VERSION_TEST(OpenGL_Version_2_0);
    GL_VERSION_TEST(OpenGL_Version_2_1);
    GL_VERSION_TEST(OpenGL_Version_3_0);
    GL_VERSION_TEST(OpenGL_Version_3_1);
    GL_VERSION_TEST(OpenGL_Version_3_2);
    GL_VERSION_TEST(OpenGL_Version_3_3);
    GL_VERSION_TEST(OpenGL_Version_4_0);
#if QT_VERSION >= 0x050000
    GL_VERSION_TEST(OpenGL_Version_4_1);
    GL_VERSION_TEST(OpenGL_Version_4_2);
    GL_VERSION_TEST(OpenGL_Version_4_3);
#endif
    GL_VERSION_TEST(OpenGL_ES_Common_Version_1_0);
    GL_VERSION_TEST(OpenGL_ES_CommonLite_Version_1_0);
    GL_VERSION_TEST(OpenGL_ES_Common_Version_1_1);
    GL_VERSION_TEST(OpenGL_ES_CommonLite_Version_1_1);
    GL_VERSION_TEST(OpenGL_ES_Version_2_0);

    QGLFormat qglFormat;
    qglFormat.setVersion(4,2);  // get expected output with (3,1) and below, else blank window
    qglFormat.setProfile(QGLFormat::CoreProfile);
    qglFormat.setSampleBuffers(true);

    QGLWidget* qglWidget = new QGLWidget(qglFormat);

    QString versionString(QLatin1String(reinterpret_cast<const char*>(glGetString(GL_VERSION))));
    QGLFormat glFormat =qglWidget->format();
    qDebug() << "Driver Version String:" << versionString;
    qDebug() << "Current Context:" << glFormat;

    qDebug() << "   DoubleBuffer:" << glFormat.testOption(QGL::DoubleBuffer);
    qDebug() << "   DepthBuffer:" << glFormat.testOption(QGL::DepthBuffer);
    qDebug() << "   Rgba:" << glFormat.testOption(QGL::Rgba);
    qDebug() << "   AlphaChannel:" << glFormat.testOption(QGL::AlphaChannel);
    qDebug() << "   AccumBuffer:" << glFormat.testOption(QGL::AccumBuffer);
    qDebug() << "   StencilBuffer:" << glFormat.testOption(QGL::StencilBuffer);
    qDebug() << "   StereoBuffers:" << glFormat.testOption(QGL::StereoBuffers);
    qDebug() << "   DirectRendering:" << glFormat.testOption(QGL::DirectRendering);
    qDebug() << "   HasOverlay:" << glFormat.testOption(QGL::HasOverlay);
    qDebug() << "   SampleBuffers:" << glFormat.testOption(QGL::SampleBuffers);
    qDebug() << "   DeprecatedFunctions:" << glFormat.testOption(QGL::DeprecatedFunctions);
}



