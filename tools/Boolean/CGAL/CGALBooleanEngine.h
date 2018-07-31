/* This file is part of PyMesh. Copyright (c) 2015 by Qingnan Zhou */
#pragma once
#ifdef WITH_CGAL

#include <Boolean/BooleanEngine.h>

namespace PyMesh {

class CGALBooleanEngine : public BooleanEngine {
    public:
        virtual ~CGALBooleanEngine() {}

    public:
        virtual void compute_union();
        virtual void compute_intersection();
        virtual void compute_difference();
        virtual void compute_symmetric_difference();
};

}

#endif
