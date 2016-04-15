// Compiler : gcc 4.6.4
// Boost 1.48 (use filesysterm version 2)
#define BOOST_FILESYSTEM_VERSION 2

#include <iostream>
#include <string>

// Qt
#include <QFileDialog>

// Graphic libraries
#include "Gui.hpp"
//#include "VisualizerCamControl.hpp"
#include "PointCloudRenderer.hpp"

#include "VisualizerPassat.hpp"
//#include "VisualizerGrid.hpp"

using namespace std;


int main(int argc, char *argv[])
{
    // ------------------------------------------------
    // -------------- run program ---------------------
    // ------------------------------------------------
    Gui3DQt::Gui myGui("RCV-DATMO", argc, argv, Gui3DQt::MainWindow::GM_3D2D);

    Gui3DQt::VisualizerPassat    *passat       = new Gui3DQt::VisualizerPassat();
//    passat->setPose(0, 0, 3, 0);

//    Gui3DQt::VisualizerGrid      *grid         = new Gui3DQt::VisualizerGrid();

//    Gui3DQt::Visualizer *visMain    = new VisualizerDATMO(*pngReader, *objProp, renderer, *clf, *groundExt, *tracker);
//    Gui3DQt::Visualizer *visCamCtrl = new Gui3DQt::VisualizerCamControl(*myGui.getQGlWidget());

//    myGui.registerVisualizer(visCamCtrl, "Visualizer", Gui3DQt::MainWindow::VM_Plain);
    myGui.registerVisualizer(passat, "Passat");
//    myGui.registerVisualizer(grid, "Grid");
//    myGui.getMainWindow()->setWhiteBackground();

    myGui.exec();

    return 0;
}

