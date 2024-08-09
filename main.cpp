#include "olcConsoleGameEngine.h"

using namespace std;

struct vec3d
{
     float x, y, z;
};

struct triangle
{
     vec3d p[3];
};

struct mesh
{
     vector<triangle> tris;
};




class olcEngine3D : public olcConsoleGameEngine
{
public:
    olcEngine3D()
    {
       m_sAppName = L"3D Demo"
    }

private:
    mesh meshCube;

public:
    bool OnUserCreate() override
    {
       meshCube.tris = {

         // SOUTH
   { 0.0f, 0.0f, 0.0f,    0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 0.0f },
   { 0.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 0.0f, 0.0f },

   // EAST
   { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f },
   { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 0.0f, 1.0f },

   // NORTH
   { 1.0f, 0.0f, 1.0f,    1.0f, 1.0f, 1.0f,    0.0f, 1.0f, 1.0f },
   { 1.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 0.0f, 1.0f },

   // WEST
   { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 1.0f, 0.0f },
   { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 0.0f,    0.0f, 0.0f, 0.0f },

   // TOP
   { 0.0f, 1.0f, 0.0f,    0.0f, 1.0f, 1.0f,    1.0f, 1.0f, 1.0f },
   { 0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 1.0f, 0.0f },

   // BOTTOM
   { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f },
   { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f,    1.0f, 0.0f, 0.0f },

 };


       return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {


       Fill(0, 0, ScreenWidth(), ScreenHeight(), PIXEL_SOLID, FG_BLACK);

       //Draw Triangles
       for(auto tri : meshCube.tris)
       {

       }

       return true;
    }


};




int main()
{
    olcEngine3D demo;
    if(demo.ConstructConsole(256, 240, 4, 4))
       demo.Start();



   return 0;
}
