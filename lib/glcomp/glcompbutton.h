/**********************************************************
*      This software is part of the graphviz package      *
*                http://www.graphviz.org/                 *
*                                                         *
*            Copyright (c) 1994-2007 AT&T Corp.           *
*                and is licensed under the                *
*            Common Public License, Version 1.0           *
*                      by AT&T Corp.                      *
*                                                         *
*        Information and Software Systems Research        *
*              AT&T Research, Florham Park NJ             *
**********************************************************/
#ifndef GLCOMPBUTTON_H
#define GLCOMPBUTTON_H

#include "glcompdefs.h"


extern glCompButton *glCompButtonNew(GLfloat x, GLfloat y, GLfloat w, GLfloat h,char *caption, char *glyphfile,int glyphwidth, int glyphheight,glCompOrientation orientation);
extern int glCompSetAddButton(glCompSet * s, glCompButton * p);
extern int glCompSetRemoveButton(glCompSet * s, glCompButton * p);
extern int glCompDrawButton(glCompButton * p);
extern void glCompButtonClick(glCompButton * p);



#endif
