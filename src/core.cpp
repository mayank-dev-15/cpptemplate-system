#include "core.h"
#include <iostream>
#include <vector>
#include <numeric>
void Core::init(){std::cout<<"cpptemplate-system init\n";}
void Core::process(){std::vector<int>d={1,2,3,4,5};int s=std::accumulate(d.begin(),d.end(),0);std::cout<<"Result:"<<s<<std::endl;}
