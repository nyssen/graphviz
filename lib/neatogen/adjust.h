/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/**********************************************************
*      This software is part of the graphviz package      *
*                http://www.graphviz.org/                 *
*                                                         *
*            Copyright (c) 1994-2004 AT&T Corp.           *
*                and is licensed under the                *
*            Common Public License, Version 1.0           *
*                      by AT&T Corp.                      *
*                                                         *
*        Information and Software Systems Research        *
*              AT&T Research, Florham Park NJ             *
**********************************************************/



#ifndef ADJUST_H
#define ADJUST_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    AM_NONE, AM_VOR, AM_SCALE, AM_NSCALE, AM_SCALEXY, AM_PUSH, AM_PUSHPULL,
    AM_ORTHO, AM_ORTHOXY, AM_ORTHOYX, AM_COMPRESS
} adjust_mode;

    extern double expFactor(graph_t * G);
    extern void adjustNodes(graph_t * G);
    extern void normalize(graph_t * g);
    extern void removeOverlap(graph_t * G);
    extern void removeOverlapAs(graph_t*, char*);
    extern void cAdjust(graph_t *, int);
    extern void scAdjust(graph_t *, int);

#ifdef __cplusplus
}
#endif
#endif
