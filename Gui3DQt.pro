#TEMPLATE = lib
TEMPLATE = app
#CONFIG += staticlib

#CONFIG -= debug_and_release
CONFIG += debug
#CONFIG += release
VERSION = 0.1
TARGET = Gui3DQt

QMAKE_CXXFLAGS += -std=gnu++0x -D NDEBUG # this enables compiler support for the upcoming c++ standard in which the unordered_map is included
#QMAKE_CXXFLAGS += -std=gnu++0x -O3 -D NDEBUG

QT += core \
    gui \
    opengl
HEADERS += \
    graphics.hpp \
    models3d.hpp \
    passatmodel.hpp \
    Gui.hpp \
    MainWindow.hpp \
    MNavWidget.hpp \
    Visualizer.hpp \
    VisualizerPassat.hpp \
    #spline.hpp \
    #VisualizerCamControl.hpp \
    #VisualizerGrid.hpp \
    PointCloudRenderer.hpp
SOURCES += \
    graphics.cpp \
    model3dpassat.cpp \
    model3dpassatwagon.cpp \
    model3dtire.cpp \
    model3dvelodyne.cpp \
    passatmodel.cpp \
    Gui.cpp \
    MainWindow.cpp \
    MNavWidget.cpp \
    VisualizerPassat.cpp \
    #VisualizerCamControl.cpp \
    #VisualizerGrid.cpp \
    PointCloudRenderer.cpp \
    main.cpp
FORMS += \
    VisualizerPassat.ui \
    #VisualizerCamControl.ui \
    MainWindow.ui
RESOURCES += 
INCLUDEPATH += $(BOOST_INC)
LIBS += \
    -L$(BOOST_LIB) \
    -L/usr/lib \
    -lboost_system \
    -lboost_filesystem \
    -lglut \
    -lGLU
