#include "PointCloudRenderer.hpp"

namespace Gui3DQt {

PointCloudRenderer::PointCloudRenderer()
{
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
}

PointCloudRenderer::~PointCloudRenderer()
{
}

void PointCloudRenderer::render(GLfloat ptSize, std::vector<GLuint> *indexList)
{
    if (point3d.size() == 0) return;
    if (!indexList) indexList = &indices;
    glPointSize(ptSize);
    glDrawElements(GL_POINTS, /* Primitivtyp */
                   indexList->size(), /* Anzahl Indizes */
                   GL_UNSIGNED_INT, /* Typ der Indizes */
                   &(*indexList)[0]); /* Index-Array */
}

size_t PointCloudRenderer::size() const
{
    return point3d.size();
}

void PointCloudRenderer::clear()
{
    point3d.clear();
    color3f.clear();
    indices.clear();

    range2d.clear();
    bInside.clear();
    scCar.clear();
    scPed.clear();
}

void PointCloudRenderer::reserve(size_t number)
{
    point3d.reserve(number);
    color3f.reserve(number);
    indices.reserve(number);

    range2d.reserve(number);
    bInside.reserve(number);
    scCar.reserve(number);
    scPed.reserve(number);
}

void PointCloudRenderer::push_back(float x, float y, float z, int r, int g, int b, float u, float v, float d, uint flag, float car, float ped)
{
    push_back(GlVec3(x, y, z), GlCol3(r, g, b), GlVec3(u, v, d), flag, car, ped);
}

void PointCloudRenderer::push_back(GlVec3 point, GlCol3 color, GlVec3 pt2d, uint flag, float car, float ped)
{
    GLfloat *oldBuffAdr = (point3d.size()>0) ? &(point3d[0].x) : NULL;
    point3d.push_back(point);
    color3f.push_back(color);
    indices.push_back(point3d.size()-1);

    range2d.push_back(pt2d);
    bInside.push_back(flag);
    scCar.push_back(car);
    scPed.push_back(ped);

    GLfloat *newBuffAdr = &(point3d[0].x);
    if (oldBuffAdr != newBuffAdr) { // only reset pointers if data buffer changed
        glVertexPointer(3, /* Komponenten pro Vertex (x,y,z) */
                        GL_FLOAT, /* Typ der Komponenten */
                        sizeof(GlVec3), /* Offset zwischen 2 Vertizes im Array */
                        &(point3d[0].x)); /* Zeiger auf die 1. Komponente */
        glColorPointer (3, GL_UNSIGNED_BYTE, sizeof(GlCol3), &(color3f[0].r));
    }
}


PointCloudRenderer::GlVec3& PointCloudRenderer::pointAt(int index)
{
    return point3d[index];
}

PointCloudRenderer::GlCol3& PointCloudRenderer::colorAt(int index)
{
    return color3f[index];
}

PointCloudRenderer::GlVec3& PointCloudRenderer::rangeAt(int index)
{
    return range2d[index];
}

uint& PointCloudRenderer::bInsideAt(int index){
    return bInside[index];
}

float& PointCloudRenderer::carScAt(int index){
    return scCar[index];
}

float& PointCloudRenderer::pedScAt(int index){
    return scPed[index];
}

} // end namespace
