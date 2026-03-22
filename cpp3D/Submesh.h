#pragma once

#include <string> 
#include <vector>

class Submesh
{
    public : 
        std::string name;
        std::string materialName;
        std::vector<float> vertices;
};

