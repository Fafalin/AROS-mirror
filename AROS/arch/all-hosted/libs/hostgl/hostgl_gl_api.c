/*
    Copyright 2011, The AROS Development Team. All rights reserved.
    $Id$
*/

#define GL_GLEXT_PROTOTYPES

#include <GL/gl.h>
#include <GL/glext.h>
#include "arosmesaapim.h"

void mglClearIndex (GLfloat c)
{

}
void mglClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{

}
void mglClear (GLbitfield mask)
{

}
void mglIndexMask (GLuint mask)
{

}
void mglColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{

}
void mglAlphaFunc (GLenum func, GLclampf ref)
{

}
void mglBlendFunc (GLenum sfactor, GLenum dfactor)
{

}
void mglLogicOp (GLenum opcode)
{

}
void mglCullFace (GLenum mode)
{

}
void mglFrontFace (GLenum mode)
{

}
void mglPointSize (GLfloat size)
{

}
void mglLineWidth (GLfloat width)
{

}
void mglLineStipple (GLint factor, GLushort pattern)
{

}
void mglPolygonMode (GLenum face, GLenum mode)
{

}
void mglPolygonOffset (GLfloat factor, GLfloat units)
{

}
void mglPolygonStipple (const GLubyte * mask)
{

}
void mglGetPolygonStipple (GLubyte * mask)
{

}
void mglEdgeFlag (GLboolean flag)
{

}
void mglEdgeFlagv (const GLboolean * flag)
{

}
void mglScissor (GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglClipPlane (GLenum plane, const GLdouble * equation)
{

}
void mglGetClipPlane (GLenum plane, GLdouble * equation)
{

}
void mglDrawBuffer (GLenum mode)
{

}
void mglReadBuffer (GLenum mode)
{

}
void mglEnable (GLenum cap)
{

}
void mglDisable (GLenum cap)
{

}
GLboolean mglIsEnabled (GLenum cap)
{

}
void mglEnableClientState (GLenum cap)
{

}
void mglDisableClientState (GLenum cap)
{

}
void mglGetBooleanv (GLenum pname, GLboolean * params)
{

}
void mglGetDoublev (GLenum pname, GLdouble * params)
{

}
void mglGetFloatv (GLenum pname, GLfloat * params)
{

}
void mglGetIntegerv (GLenum pname, GLint * params)
{

}
void mglPushAttrib (GLbitfield mask)
{

}
void mglPopAttrib ()
{

}
void mglPushClientAttrib (GLbitfield mask)
{

}
void mglPopClientAttrib ()
{

}
GLint mglRenderMode (GLenum mode)
{

}
GLenum mglGetError ()
{

}
const GLubyte * mglGetString (GLenum name)
{

}
void mglFinish ()
{

}
void mglFlush ()
{

}
void mglHint (GLenum target, GLenum mode)
{

}
void mglClearDepth (GLclampd depth)
{

}
void mglDepthFunc (GLenum func)
{

}
void mglDepthMask (GLboolean flag)
{

}
void mglDepthRange (GLclampd near_val, GLclampd far_val)
{

}
void mglClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{

}
void mglAccum (GLenum op, GLfloat value)
{

}
void mglMatrixMode (GLenum mode)
{

}
void mglOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val)
{

}
void mglFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val)
{

}
void mglViewport (GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglPushMatrix ()
{

}
void mglPopMatrix ()
{

}
void mglLoadIdentity ()
{

}
void mglLoadMatrixd (const GLdouble * m)
{

}
void mglLoadMatrixf (const GLfloat * m)
{

}
void mglMultMatrixd (const GLdouble * m)
{

}
void mglMultMatrixf (const GLfloat * m)
{

}
void mglRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{

}
void mglRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{

}
void mglScaled (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglScalef (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglTranslated (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglTranslatef (GLfloat x, GLfloat y, GLfloat z)
{

}
GLboolean mglIsList (GLuint list)
{

}
void mglDeleteLists (GLuint list, GLsizei range)
{

}
GLuint mglGenLists (GLsizei range)
{

}
void mglNewList (GLuint list, GLenum mode)
{

}
void mglEndList ()
{

}
void mglCallList (GLuint list)
{

}
void mglCallLists (GLsizei n, GLenum type, const GLvoid * lists)
{

}
void mglListBase (GLuint base)
{

}
void mglBegin (GLenum mode)
{

}
void mglEnd ()
{

}
void mglVertex2d (GLdouble x, GLdouble y)
{

}
void mglVertex2f (GLfloat x, GLfloat y)
{

}
void mglVertex2i (GLint x, GLint y)
{

}
void mglVertex2s (GLshort x, GLshort y)
{

}
void mglVertex3d (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglVertex3f (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglVertex3i (GLint x, GLint y, GLint z)
{

}
void mglVertex3s (GLshort x, GLshort y, GLshort z)
{

}
void mglVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglVertex4i (GLint x, GLint y, GLint z, GLint w)
{

}
void mglVertex4s (GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglVertex2dv (const GLdouble * v)
{

}
void mglVertex2fv (const GLfloat * v)
{

}
void mglVertex2iv (const GLint * v)
{

}
void mglVertex2sv (const GLshort * v)
{

}
void mglVertex3dv (const GLdouble * v)
{

}
void mglVertex3fv (const GLfloat * v)
{

}
void mglVertex3iv (const GLint * v)
{

}
void mglVertex3sv (const GLshort * v)
{

}
void mglVertex4dv (const GLdouble * v)
{

}
void mglVertex4fv (const GLfloat * v)
{

}
void mglVertex4iv (const GLint * v)
{

}
void mglVertex4sv (const GLshort * v)
{

}
void mglNormal3b (GLbyte nx, GLbyte ny, GLbyte nz)
{

}
void mglNormal3d (GLdouble nx, GLdouble ny, GLdouble nz)
{

}
void mglNormal3f (GLfloat nx, GLfloat ny, GLfloat nz)
{

}
void mglNormal3i (GLint nx, GLint ny, GLint nz)
{

}
void mglNormal3s (GLshort nx, GLshort ny, GLshort nz)
{

}
void mglNormal3bv (const GLbyte * v)
{

}
void mglNormal3dv (const GLdouble * v)
{

}
void mglNormal3fv (const GLfloat * v)
{

}
void mglNormal3iv (const GLint * v)
{

}
void mglNormal3sv (const GLshort * v)
{

}
void mglIndexd (GLdouble c)
{

}
void mglIndexf (GLfloat c)
{

}
void mglIndexi (GLint c)
{

}
void mglIndexs (GLshort c)
{

}
void mglIndexub (GLubyte c)
{

}
void mglIndexdv (const GLdouble * c)
{

}
void mglIndexfv (const GLfloat * c)
{

}
void mglIndexiv (const GLint * c)
{

}
void mglIndexsv (const GLshort * c)
{

}
void mglIndexubv (const GLubyte * c)
{

}
void mglColor3b (GLbyte red, GLbyte green, GLbyte blue)
{

}
void mglColor3d (GLdouble red, GLdouble green, GLdouble blue)
{

}
void mglColor3f (GLfloat red, GLfloat green, GLfloat blue)
{

}
void mglColor3i (GLint red, GLint green, GLint blue)
{

}
void mglColor3s (GLshort red, GLshort green, GLshort blue)
{

}
void mglColor3ub (GLubyte red, GLubyte green, GLubyte blue)
{

}
void mglColor3ui (GLuint red, GLuint green, GLuint blue)
{

}
void mglColor3us (GLushort red, GLushort green, GLushort blue)
{

}
void mglColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{

}
void mglColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{

}
void mglColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{

}
void mglColor4i (GLint red, GLint green, GLint blue, GLint alpha)
{

}
void mglColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha)
{

}
void mglColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{

}
void mglColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha)
{

}
void mglColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha)
{

}
void mglColor3bv (const GLbyte * v)
{

}
void mglColor3dv (const GLdouble * v)
{

}
void mglColor3fv (const GLfloat * v)
{

}
void mglColor3iv (const GLint * v)
{

}
void mglColor3sv (const GLshort * v)
{

}
void mglColor3ubv (const GLubyte * v)
{

}
void mglColor3uiv (const GLuint * v)
{

}
void mglColor3usv (const GLushort * v)
{

}
void mglColor4bv (const GLbyte * v)
{

}
void mglColor4dv (const GLdouble * v)
{

}
void mglColor4fv (const GLfloat * v)
{

}
void mglColor4iv (const GLint * v)
{

}
void mglColor4sv (const GLshort * v)
{

}
void mglColor4ubv (const GLubyte * v)
{

}
void mglColor4uiv (const GLuint * v)
{

}
void mglColor4usv (const GLushort * v)
{

}
void mglTexCoord1d (GLdouble s)
{

}
void mglTexCoord1f (GLfloat s)
{

}
void mglTexCoord1i (GLint s)
{

}
void mglTexCoord1s (GLshort s)
{

}
void mglTexCoord2d (GLdouble s, GLdouble t)
{

}
void mglTexCoord2f (GLfloat s, GLfloat t)
{

}
void mglTexCoord2i (GLint s, GLint t)
{

}
void mglTexCoord2s (GLshort s, GLshort t)
{

}
void mglTexCoord3d (GLdouble s, GLdouble t, GLdouble r)
{

}
void mglTexCoord3f (GLfloat s, GLfloat t, GLfloat r)
{

}
void mglTexCoord3i (GLint s, GLint t, GLint r)
{

}
void mglTexCoord3s (GLshort s, GLshort t, GLshort r)
{

}
void mglTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{

}
void mglTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{

}
void mglTexCoord4i (GLint s, GLint t, GLint r, GLint q)
{

}
void mglTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q)
{

}
void mglTexCoord1dv (const GLdouble * v)
{

}
void mglTexCoord1fv (const GLfloat * v)
{

}
void mglTexCoord1iv (const GLint * v)
{

}
void mglTexCoord1sv (const GLshort * v)
{

}
void mglTexCoord2dv (const GLdouble * v)
{

}
void mglTexCoord2fv (const GLfloat * v)
{

}
void mglTexCoord2iv (const GLint * v)
{

}
void mglTexCoord2sv (const GLshort * v)
{

}
void mglTexCoord3dv (const GLdouble * v)
{

}
void mglTexCoord3fv (const GLfloat * v)
{

}
void mglTexCoord3iv (const GLint * v)
{

}
void mglTexCoord3sv (const GLshort * v)
{

}
void mglTexCoord4dv (const GLdouble * v)
{

}
void mglTexCoord4fv (const GLfloat * v)
{

}
void mglTexCoord4iv (const GLint * v)
{

}
void mglTexCoord4sv (const GLshort * v)
{

}
void mglRasterPos2d (GLdouble x, GLdouble y)
{

}
void mglRasterPos2f (GLfloat x, GLfloat y)
{

}
void mglRasterPos2i (GLint x, GLint y)
{

}
void mglRasterPos2s (GLshort x, GLshort y)
{

}
void mglRasterPos3d (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglRasterPos3f (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglRasterPos3i (GLint x, GLint y, GLint z)
{

}
void mglRasterPos3s (GLshort x, GLshort y, GLshort z)
{

}
void mglRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglRasterPos4i (GLint x, GLint y, GLint z, GLint w)
{

}
void mglRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglRasterPos2dv (const GLdouble * v)
{

}
void mglRasterPos2fv (const GLfloat * v)
{

}
void mglRasterPos2iv (const GLint * v)
{

}
void mglRasterPos2sv (const GLshort * v)
{

}
void mglRasterPos3dv (const GLdouble * v)
{

}
void mglRasterPos3fv (const GLfloat * v)
{

}
void mglRasterPos3iv (const GLint * v)
{

}
void mglRasterPos3sv (const GLshort * v)
{

}
void mglRasterPos4dv (const GLdouble * v)
{

}
void mglRasterPos4fv (const GLfloat * v)
{

}
void mglRasterPos4iv (const GLint * v)
{

}
void mglRasterPos4sv (const GLshort * v)
{

}
void mglRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{

}
void mglRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{

}
void mglRecti (GLint x1, GLint y1, GLint x2, GLint y2)
{

}
void mglRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{

}
void mglRectdv (const GLdouble * v1, const GLdouble * v2)
{

}
void mglRectfv (const GLfloat * v1, const GLfloat * v2)
{

}
void mglRectiv (const GLint * v1, const GLint * v2)
{

}
void mglRectsv (const GLshort * v1, const GLshort * v2)
{

}
void mglVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid * ptr)
{

}
void mglNormalPointer (GLenum type, GLsizei stride, const GLvoid * ptr)
{

}
void mglColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid * ptr)
{

}
void mglIndexPointer (GLenum type, GLsizei stride, const GLvoid * ptr)
{

}
void mglTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid * ptr)
{

}
void mglEdgeFlagPointer (GLsizei stride, const GLvoid * ptr)
{

}
void mglGetPointerv (GLenum pname, GLvoid * * params)
{

}
void mglArrayElement (GLint i)
{

}
void mglDrawArrays (GLenum mode, GLint first, GLsizei count)
{

}
void mglDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices)
{

}
void mglInterleavedArrays (GLenum format, GLsizei stride, const GLvoid * pointer)
{

}
void mglShadeModel (GLenum mode)
{

}
void mglLightf (GLenum light, GLenum pname, GLfloat param)
{

}
void mglLighti (GLenum light, GLenum pname, GLint param)
{

}
void mglLightfv (GLenum light, GLenum pname, const GLfloat * params)
{

}
void mglLightiv (GLenum light, GLenum pname, const GLint * params)
{

}
void mglGetLightfv (GLenum light, GLenum pname, GLfloat * params)
{

}
void mglGetLightiv (GLenum light, GLenum pname, GLint * params)
{

}
void mglLightModelf (GLenum pname, GLfloat param)
{

}
void mglLightModeli (GLenum pname, GLint param)
{

}
void mglLightModelfv (GLenum pname, const GLfloat * params)
{

}
void mglLightModeliv (GLenum pname, const GLint * params)
{

}
void mglMaterialf (GLenum face, GLenum pname, GLfloat param)
{

}
void mglMateriali (GLenum face, GLenum pname, GLint param)
{

}
void mglMaterialfv (GLenum face, GLenum pname, const GLfloat * params)
{

}
void mglMaterialiv (GLenum face, GLenum pname, const GLint * params)
{

}
void mglGetMaterialfv (GLenum face, GLenum pname, GLfloat * params)
{

}
void mglGetMaterialiv (GLenum face, GLenum pname, GLint * params)
{

}
void mglColorMaterial (GLenum face, GLenum mode)
{

}
void mglPixelZoom (GLfloat xfactor, GLfloat yfactor)
{

}
void mglPixelStoref (GLenum pname, GLfloat param)
{

}
void mglPixelStorei (GLenum pname, GLint param)
{

}
void mglPixelTransferf (GLenum pname, GLfloat param)
{

}
void mglPixelTransferi (GLenum pname, GLint param)
{

}
void mglPixelMapfv (GLenum map, GLsizei mapsize, const GLfloat * values)
{

}
void mglPixelMapuiv (GLenum map, GLsizei mapsize, const GLuint * values)
{

}
void mglPixelMapusv (GLenum map, GLsizei mapsize, const GLushort * values)
{

}
void mglGetPixelMapfv (GLenum map, GLfloat * values)
{

}
void mglGetPixelMapuiv (GLenum map, GLuint * values)
{

}
void mglGetPixelMapusv (GLenum map, GLushort * values)
{

}
void mglBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{

}
void mglReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels)
{

}
void mglDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{

}
void mglStencilFunc (GLenum func, GLint ref, GLuint mask)
{

}
void mglStencilMask (GLuint mask)
{

}
void mglStencilOp (GLenum fail, GLenum zfail, GLenum zpass)
{

}
void mglClearStencil (GLint s)
{

}
void mglTexGend (GLenum coord, GLenum pname, GLdouble param)
{

}
void mglTexGenf (GLenum coord, GLenum pname, GLfloat param)
{

}
void mglTexGeni (GLenum coord, GLenum pname, GLint param)
{

}
void mglTexGendv (GLenum coord, GLenum pname, const GLdouble * params)
{

}
void mglTexGenfv (GLenum coord, GLenum pname, const GLfloat * params)
{

}
void mglTexGeniv (GLenum coord, GLenum pname, const GLint * params)
{

}
void mglGetTexGendv (GLenum coord, GLenum pname, GLdouble * params)
{

}
void mglGetTexGenfv (GLenum coord, GLenum pname, GLfloat * params)
{

}
void mglGetTexGeniv (GLenum coord, GLenum pname, GLint * params)
{

}
void mglTexEnvf (GLenum target, GLenum pname, GLfloat param)
{

}
void mglTexEnvi (GLenum target, GLenum pname, GLint param)
{

}
void mglTexEnvfv (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglTexEnviv (GLenum target, GLenum pname, const GLint * params)
{

}
void mglGetTexEnvfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetTexEnviv (GLenum target, GLenum pname, GLint * params)
{

}
void mglTexParameterf (GLenum target, GLenum pname, GLfloat param)
{

}
void mglTexParameteri (GLenum target, GLenum pname, GLint param)
{

}
void mglTexParameterfv (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglTexParameteriv (GLenum target, GLenum pname, const GLint * params)
{

}
void mglGetTexParameterfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetTexParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params)
{

}
void mglGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params)
{

}
void mglTexImage1D (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexImage2D (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels)
{

}
void mglGenTextures (GLsizei n, GLuint * textures)
{

}
void mglDeleteTextures (GLsizei n, const GLuint * textures)
{

}
void mglBindTexture (GLenum target, GLuint texture)
{

}
void mglPrioritizeTextures (GLsizei n, const GLuint * textures, const GLclampf * priorities)
{

}
GLboolean mglAreTexturesResident (GLsizei n, const GLuint * textures, GLboolean * residences)
{

}
GLboolean mglIsTexture (GLuint texture)
{

}
void mglTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{

}
void mglCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{

}
void mglCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{

}
void mglCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{

}
void mglMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{

}
void mglMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{

}
void mglMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{

}
void mglGetMapdv (GLenum target, GLenum query, GLdouble * v)
{

}
void mglGetMapfv (GLenum target, GLenum query, GLfloat * v)
{

}
void mglGetMapiv (GLenum target, GLenum query, GLint * v)
{

}
void mglEvalCoord1d (GLdouble u)
{

}
void mglEvalCoord1f (GLfloat u)
{

}
void mglEvalCoord1dv (const GLdouble * u)
{

}
void mglEvalCoord1fv (const GLfloat * u)
{

}
void mglEvalCoord2d (GLdouble u, GLdouble v)
{

}
void mglEvalCoord2f (GLfloat u, GLfloat v)
{

}
void mglEvalCoord2dv (const GLdouble * u)
{

}
void mglEvalCoord2fv (const GLfloat * u)
{

}
void mglMapGrid1d (GLint un, GLdouble u1, GLdouble u2)
{

}
void mglMapGrid1f (GLint un, GLfloat u1, GLfloat u2)
{

}
void mglMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{

}
void mglMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{

}
void mglEvalPoint1 (GLint i)
{

}
void mglEvalPoint2 (GLint i, GLint j)
{

}
void mglEvalMesh1 (GLenum mode, GLint i1, GLint i2)
{

}
void mglEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{

}
void mglFogf (GLenum pname, GLfloat param)
{

}
void mglFogi (GLenum pname, GLint param)
{

}
void mglFogfv (GLenum pname, const GLfloat * params)
{

}
void mglFogiv (GLenum pname, const GLint * params)
{

}
void mglFeedbackBuffer (GLsizei size, GLenum type, GLfloat * buffer)
{

}
void mglPassThrough (GLfloat token)
{

}
void mglSelectBuffer (GLsizei size, GLuint * buffer)
{

}
void mglInitNames ()
{

}
void mglLoadName (GLuint name)
{

}
void mglPushName (GLuint name)
{

}
void mglPopName ()
{

}
void mglDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{

}
void mglTexImage3D (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table)
{

}
void mglColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data)
{

}
void mglColorTableParameteriv (GLenum target, GLenum pname, const GLint * params)
{

}
void mglColorTableParameterfv (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{

}
void mglCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{

}
void mglGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid * table)
{

}
void mglGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetColorTableParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglBlendEquation (GLenum mode)
{

}
void mglBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{

}
void mglHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{

}
void mglResetHistogram (GLenum target)
{

}
void mglGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{

}
void mglGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetHistogramParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglMinmax (GLenum target, GLenum internalformat, GLboolean sink)
{

}
void mglResetMinmax (GLenum target)
{

}
void mglGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values)
{

}
void mglGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetMinmaxParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image)
{

}
void mglConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image)
{

}
void mglConvolutionParameterf (GLenum target, GLenum pname, GLfloat params)
{

}
void mglConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglConvolutionParameteri (GLenum target, GLenum pname, GLint params)
{

}
void mglConvolutionParameteriv (GLenum target, GLenum pname, const GLint * params)
{

}
void mglCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{

}
void mglCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid * image)
{

}
void mglGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetConvolutionParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column)
{

}
void mglGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span)
{

}
void mglActiveTexture (GLenum texture)
{

}
void mglClientActiveTexture (GLenum texture)
{

}
void mglCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglGetCompressedTexImage (GLenum target, GLint lod, GLvoid * img)
{

}
void mglMultiTexCoord1d (GLenum target, GLdouble s)
{

}
void mglMultiTexCoord1dv (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord1f (GLenum target, GLfloat s)
{

}
void mglMultiTexCoord1fv (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord1i (GLenum target, GLint s)
{

}
void mglMultiTexCoord1iv (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord1s (GLenum target, GLshort s)
{

}
void mglMultiTexCoord1sv (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t)
{

}
void mglMultiTexCoord2dv (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t)
{

}
void mglMultiTexCoord2fv (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord2i (GLenum target, GLint s, GLint t)
{

}
void mglMultiTexCoord2iv (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord2s (GLenum target, GLshort s, GLshort t)
{

}
void mglMultiTexCoord2sv (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r)
{

}
void mglMultiTexCoord3dv (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r)
{

}
void mglMultiTexCoord3fv (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r)
{

}
void mglMultiTexCoord3iv (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r)
{

}
void mglMultiTexCoord3sv (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{

}
void mglMultiTexCoord4dv (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{

}
void mglMultiTexCoord4fv (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q)
{

}
void mglMultiTexCoord4iv (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{

}
void mglMultiTexCoord4sv (GLenum target, const GLshort * v)
{

}
void mglLoadTransposeMatrixd (const GLdouble * m)
{

}
void mglLoadTransposeMatrixf (const GLfloat * m)
{

}
void mglMultTransposeMatrixd (const GLdouble * m)
{

}
void mglMultTransposeMatrixf (const GLfloat * m)
{

}
void mglSampleCoverage (GLclampf value, GLboolean invert)
{

}
void mglActiveTextureARB (GLenum texture)
{

}
void mglClientActiveTextureARB (GLenum texture)
{

}
void mglMultiTexCoord1dARB (GLenum target, GLdouble s)
{

}
void mglMultiTexCoord1dvARB (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord1fARB (GLenum target, GLfloat s)
{

}
void mglMultiTexCoord1fvARB (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord1iARB (GLenum target, GLint s)
{

}
void mglMultiTexCoord1ivARB (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord1sARB (GLenum target, GLshort s)
{

}
void mglMultiTexCoord1svARB (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t)
{

}
void mglMultiTexCoord2dvARB (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t)
{

}
void mglMultiTexCoord2fvARB (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord2iARB (GLenum target, GLint s, GLint t)
{

}
void mglMultiTexCoord2ivARB (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t)
{

}
void mglMultiTexCoord2svARB (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r)
{

}
void mglMultiTexCoord3dvARB (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r)
{

}
void mglMultiTexCoord3fvARB (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r)
{

}
void mglMultiTexCoord3ivARB (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r)
{

}
void mglMultiTexCoord3svARB (GLenum target, const GLshort * v)
{

}
void mglMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{

}
void mglMultiTexCoord4dvARB (GLenum target, const GLdouble * v)
{

}
void mglMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{

}
void mglMultiTexCoord4fvARB (GLenum target, const GLfloat * v)
{

}
void mglMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q)
{

}
void mglMultiTexCoord4ivARB (GLenum target, const GLint * v)
{

}
void mglMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{

}
void mglMultiTexCoord4svARB (GLenum target, const GLshort * v)
{

}
void mglBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{

}
void mglFogCoordf (GLfloat coord)
{

}
void mglFogCoordfv (const GLfloat * coord)
{

}
void mglFogCoordd (GLdouble coord)
{

}
void mglFogCoorddv (const GLdouble * coord)
{

}
void mglFogCoordPointer (GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglMultiDrawArrays (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{

}
void mglMultiDrawElements (GLenum mode, const GLsizei * count, GLenum type, const GLvoid *  * indices, GLsizei primcount)
{

}
void mglPointParameterf (GLenum pname, GLfloat param)
{

}
void mglPointParameterfv (GLenum pname, const GLfloat * params)
{

}
void mglPointParameteri (GLenum pname, GLint param)
{

}
void mglPointParameteriv (GLenum pname, const GLint * params)
{

}
void mglSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue)
{

}
void mglSecondaryColor3bv (const GLbyte * v)
{

}
void mglSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue)
{

}
void mglSecondaryColor3dv (const GLdouble * v)
{

}
void mglSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue)
{

}
void mglSecondaryColor3fv (const GLfloat * v)
{

}
void mglSecondaryColor3i (GLint red, GLint green, GLint blue)
{

}
void mglSecondaryColor3iv (const GLint * v)
{

}
void mglSecondaryColor3s (GLshort red, GLshort green, GLshort blue)
{

}
void mglSecondaryColor3sv (const GLshort * v)
{

}
void mglSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue)
{

}
void mglSecondaryColor3ubv (const GLubyte * v)
{

}
void mglSecondaryColor3ui (GLuint red, GLuint green, GLuint blue)
{

}
void mglSecondaryColor3uiv (const GLuint * v)
{

}
void mglSecondaryColor3us (GLushort red, GLushort green, GLushort blue)
{

}
void mglSecondaryColor3usv (const GLushort * v)
{

}
void mglSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglWindowPos2d (GLdouble x, GLdouble y)
{

}
void mglWindowPos2dv (const GLdouble * v)
{

}
void mglWindowPos2f (GLfloat x, GLfloat y)
{

}
void mglWindowPos2fv (const GLfloat * v)
{

}
void mglWindowPos2i (GLint x, GLint y)
{

}
void mglWindowPos2iv (const GLint * v)
{

}
void mglWindowPos2s (GLshort x, GLshort y)
{

}
void mglWindowPos2sv (const GLshort * v)
{

}
void mglWindowPos3d (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglWindowPos3dv (const GLdouble * v)
{

}
void mglWindowPos3f (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglWindowPos3fv (const GLfloat * v)
{

}
void mglWindowPos3i (GLint x, GLint y, GLint z)
{

}
void mglWindowPos3iv (const GLint * v)
{

}
void mglWindowPos3s (GLshort x, GLshort y, GLshort z)
{

}
void mglWindowPos3sv (const GLshort * v)
{

}
void mglGenQueries (GLsizei n, GLuint * ids)
{

}
void mglDeleteQueries (GLsizei n, const GLuint * ids)
{

}
GLboolean mglIsQuery (GLuint id)
{

}
void mglBeginQuery (GLenum target, GLuint id)
{

}
void mglEndQuery (GLenum target)
{

}
void mglGetQueryiv (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetQueryObjectiv (GLuint id, GLenum pname, GLint * params)
{

}
void mglGetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params)
{

}
void mglBindBuffer (GLenum target, GLuint buffer)
{

}
void mglDeleteBuffers (GLsizei n, const GLuint * buffers)
{

}
void mglGenBuffers (GLsizei n, GLuint * buffers)
{

}
GLboolean mglIsBuffer (GLuint buffer)
{

}
void mglBufferData (GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage)
{

}
void mglBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data)
{

}
void mglGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid * data)
{

}
GLvoid* mglMapBuffer (GLenum target, GLenum access)
{

}
GLboolean mglUnmapBuffer (GLenum target)
{

}
void mglGetBufferParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetBufferPointerv (GLenum target, GLenum pname, GLvoid *  * params)
{

}
void mglBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha)
{

}
void mglDrawBuffers (GLsizei n, const GLenum * bufs)
{

}
void mglStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{

}
void mglStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask)
{

}
void mglStencilMaskSeparate (GLenum face, GLuint mask)
{

}
void mglAttachShader (GLuint program, GLuint shader)
{

}
void mglBindAttribLocation (GLuint program, GLuint index, const GLchar * name)
{

}
void mglCompileShader (GLuint shader)
{

}
GLuint mglCreateProgram ()
{

}
GLuint mglCreateShader (GLenum type)
{

}
void mglDeleteProgram (GLuint program)
{

}
void mglDeleteShader (GLuint shader)
{

}
void mglDetachShader (GLuint program, GLuint shader)
{

}
void mglDisableVertexAttribArray (GLuint index)
{

}
void mglEnableVertexAttribArray (GLuint index)
{

}
void mglGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{

}
void mglGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{

}
void mglGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj)
{

}
GLint mglGetAttribLocation (GLuint program, const GLchar * name)
{

}
void mglGetProgramiv (GLuint program, GLenum pname, GLint * params)
{

}
void mglGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{

}
void mglGetShaderiv (GLuint shader, GLenum pname, GLint * params)
{

}
void mglGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{

}
void mglGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{

}
GLint mglGetUniformLocation (GLuint program, const GLchar * name)
{

}
void mglGetUniformfv (GLuint program, GLint location, GLfloat * params)
{

}
void mglGetUniformiv (GLuint program, GLint location, GLint * params)
{

}
void mglGetVertexAttribdv (GLuint index, GLenum pname, GLdouble * params)
{

}
void mglGetVertexAttribfv (GLuint index, GLenum pname, GLfloat * params)
{

}
void mglGetVertexAttribiv (GLuint index, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid *  * pointer)
{

}
GLboolean mglIsProgram (GLuint program)
{

}
GLboolean mglIsShader (GLuint shader)
{

}
void mglLinkProgram (GLuint program)
{

}
void mglShaderSource (GLuint shader, GLsizei count, const GLchar *  * string, const GLint * length)
{

}
void mglUseProgram (GLuint program)
{

}
void mglUniform1f (GLint location, GLfloat v0)
{

}
void mglUniform2f (GLint location, GLfloat v0, GLfloat v1)
{

}
void mglUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{

}
void mglUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{

}
void mglUniform1i (GLint location, GLint v0)
{

}
void mglUniform2i (GLint location, GLint v0, GLint v1)
{

}
void mglUniform3i (GLint location, GLint v0, GLint v1, GLint v2)
{

}
void mglUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{

}
void mglUniform1fv (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform2fv (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform3fv (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform4fv (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform1iv (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform2iv (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform3iv (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform4iv (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglValidateProgram (GLuint program)
{

}
void mglVertexAttrib1d (GLuint index, GLdouble x)
{

}
void mglVertexAttrib1dv (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib1f (GLuint index, GLfloat x)
{

}
void mglVertexAttrib1fv (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib1s (GLuint index, GLshort x)
{

}
void mglVertexAttrib1sv (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib2d (GLuint index, GLdouble x, GLdouble y)
{

}
void mglVertexAttrib2dv (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib2f (GLuint index, GLfloat x, GLfloat y)
{

}
void mglVertexAttrib2fv (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib2s (GLuint index, GLshort x, GLshort y)
{

}
void mglVertexAttrib2sv (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z)
{

}
void mglVertexAttrib3dv (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z)
{

}
void mglVertexAttrib3fv (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z)
{

}
void mglVertexAttrib3sv (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4Nbv (GLuint index, const GLbyte * v)
{

}
void mglVertexAttrib4Niv (GLuint index, const GLint * v)
{

}
void mglVertexAttrib4Nsv (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{

}
void mglVertexAttrib4Nubv (GLuint index, const GLubyte * v)
{

}
void mglVertexAttrib4Nuiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttrib4Nusv (GLuint index, const GLushort * v)
{

}
void mglVertexAttrib4bv (GLuint index, const GLbyte * v)
{

}
void mglVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglVertexAttrib4dv (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglVertexAttrib4fv (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib4iv (GLuint index, const GLint * v)
{

}
void mglVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglVertexAttrib4sv (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4ubv (GLuint index, const GLubyte * v)
{

}
void mglVertexAttrib4uiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttrib4usv (GLuint index, const GLushort * v)
{

}
void mglVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{

}
void mglUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglLoadTransposeMatrixfARB (const GLfloat * m)
{

}
void mglLoadTransposeMatrixdARB (const GLdouble * m)
{

}
void mglMultTransposeMatrixfARB (const GLfloat * m)
{

}
void mglMultTransposeMatrixdARB (const GLdouble * m)
{

}
void mglSampleCoverageARB (GLclampf value, GLboolean invert)
{

}
void mglCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data)
{

}
void mglGetCompressedTexImageARB (GLenum target, GLint level, GLvoid * img)
{

}
void mglPointParameterfARB (GLenum pname, GLfloat param)
{

}
void mglPointParameterfvARB (GLenum pname, const GLfloat * params)
{

}
void mglWindowPos2dARB (GLdouble x, GLdouble y)
{

}
void mglWindowPos2dvARB (const GLdouble * v)
{

}
void mglWindowPos2fARB (GLfloat x, GLfloat y)
{

}
void mglWindowPos2fvARB (const GLfloat * v)
{

}
void mglWindowPos2iARB (GLint x, GLint y)
{

}
void mglWindowPos2ivARB (const GLint * v)
{

}
void mglWindowPos2sARB (GLshort x, GLshort y)
{

}
void mglWindowPos2svARB (const GLshort * v)
{

}
void mglWindowPos3dARB (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglWindowPos3dvARB (const GLdouble * v)
{

}
void mglWindowPos3fARB (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglWindowPos3fvARB (const GLfloat * v)
{

}
void mglWindowPos3iARB (GLint x, GLint y, GLint z)
{

}
void mglWindowPos3ivARB (const GLint * v)
{

}
void mglWindowPos3sARB (GLshort x, GLshort y, GLshort z)
{

}
void mglWindowPos3svARB (const GLshort * v)
{

}
void mglVertexAttrib1dARB (GLuint index, GLdouble x)
{

}
void mglVertexAttrib1dvARB (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib1fARB (GLuint index, GLfloat x)
{

}
void mglVertexAttrib1fvARB (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib1sARB (GLuint index, GLshort x)
{

}
void mglVertexAttrib1svARB (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble y)
{

}
void mglVertexAttrib2dvARB (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y)
{

}
void mglVertexAttrib2fvARB (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib2sARB (GLuint index, GLshort x, GLshort y)
{

}
void mglVertexAttrib2svARB (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z)
{

}
void mglVertexAttrib3dvARB (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z)
{

}
void mglVertexAttrib3fvARB (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib3sARB (GLuint index, GLshort x, GLshort y, GLshort z)
{

}
void mglVertexAttrib3svARB (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4NbvARB (GLuint index, const GLbyte * v)
{

}
void mglVertexAttrib4NivARB (GLuint index, const GLint * v)
{

}
void mglVertexAttrib4NsvARB (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{

}
void mglVertexAttrib4NubvARB (GLuint index, const GLubyte * v)
{

}
void mglVertexAttrib4NuivARB (GLuint index, const GLuint * v)
{

}
void mglVertexAttrib4NusvARB (GLuint index, const GLushort * v)
{

}
void mglVertexAttrib4bvARB (GLuint index, const GLbyte * v)
{

}
void mglVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglVertexAttrib4dvARB (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglVertexAttrib4fvARB (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib4ivARB (GLuint index, const GLint * v)
{

}
void mglVertexAttrib4sARB (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglVertexAttrib4svARB (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4ubvARB (GLuint index, const GLubyte * v)
{

}
void mglVertexAttrib4uivARB (GLuint index, const GLuint * v)
{

}
void mglVertexAttrib4usvARB (GLuint index, const GLushort * v)
{

}
void mglVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{

}
void mglEnableVertexAttribArrayARB (GLuint index)
{

}
void mglDisableVertexAttribArrayARB (GLuint index)
{

}
void mglProgramStringARB (GLenum target, GLenum format, GLsizei len, const GLvoid * string)
{

}
void mglBindProgramARB (GLenum target, GLuint program)
{

}
void mglDeleteProgramsARB (GLsizei n, const GLuint * programs)
{

}
void mglGenProgramsARB (GLsizei n, GLuint * programs)
{

}
void mglProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble * params)
{

}
void mglProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat * params)
{

}
void mglProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble * params)
{

}
void mglProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat * params)
{

}
void mglGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble * params)
{

}
void mglGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat * params)
{

}
void mglGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble * params)
{

}
void mglGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat * params)
{

}
void mglGetProgramivARB (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetProgramStringARB (GLenum target, GLenum pname, GLvoid * string)
{

}
void mglGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble * params)
{

}
void mglGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat * params)
{

}
void mglGetVertexAttribivARB (GLuint index, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribPointervARB (GLuint index, GLenum pname, GLvoid *  * pointer)
{

}
GLboolean mglIsProgramARB (GLuint program)
{

}
void mglBindBufferARB (GLenum target, GLuint buffer)
{

}
void mglDeleteBuffersARB (GLsizei n, const GLuint * buffers)
{

}
void mglGenBuffersARB (GLsizei n, GLuint * buffers)
{

}
GLboolean mglIsBufferARB (GLuint buffer)
{

}
void mglBufferDataARB (GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage)
{

}
void mglBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data)
{

}
void mglGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid * data)
{

}
GLvoid* mglMapBufferARB (GLenum target, GLenum access)
{

}
GLboolean mglUnmapBufferARB (GLenum target)
{

}
void mglGetBufferParameterivARB (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetBufferPointervARB (GLenum target, GLenum pname, GLvoid *  * params)
{

}
void mglGenQueriesARB (GLsizei n, GLuint * ids)
{

}
void mglDeleteQueriesARB (GLsizei n, const GLuint * ids)
{

}
GLboolean mglIsQueryARB (GLuint id)
{

}
void mglBeginQueryARB (GLenum target, GLuint id)
{

}
void mglEndQueryARB (GLenum target)
{

}
void mglGetQueryivARB (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetQueryObjectivARB (GLuint id, GLenum pname, GLint * params)
{

}
void mglGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint * params)
{

}
void mglDeleteObjectARB (GLhandleARB obj)
{

}
GLhandleARB mglGetHandleARB (GLenum pname)
{

}
void mglDetachObjectARB (GLhandleARB containerObj, GLhandleARB attachedObj)
{

}
GLhandleARB mglCreateShaderObjectARB (GLenum shaderType)
{

}
void mglShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB *  * string, const GLint * length)
{

}
void mglCompileShaderARB (GLhandleARB shaderObj)
{

}
GLhandleARB mglCreateProgramObjectARB ()
{

}
void mglAttachObjectARB (GLhandleARB containerObj, GLhandleARB obj)
{

}
void mglLinkProgramARB (GLhandleARB programObj)
{

}
void mglUseProgramObjectARB (GLhandleARB programObj)
{

}
void mglValidateProgramARB (GLhandleARB programObj)
{

}
void mglUniform1fARB (GLint location, GLfloat v0)
{

}
void mglUniform2fARB (GLint location, GLfloat v0, GLfloat v1)
{

}
void mglUniform3fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{

}
void mglUniform4fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{

}
void mglUniform1iARB (GLint location, GLint v0)
{

}
void mglUniform2iARB (GLint location, GLint v0, GLint v1)
{

}
void mglUniform3iARB (GLint location, GLint v0, GLint v1, GLint v2)
{

}
void mglUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{

}
void mglUniform1fvARB (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform2fvARB (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform3fvARB (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform4fvARB (GLint location, GLsizei count, const GLfloat * value)
{

}
void mglUniform1ivARB (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform2ivARB (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform3ivARB (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniform4ivARB (GLint location, GLsizei count, const GLint * value)
{

}
void mglUniformMatrix2fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix3fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglUniformMatrix4fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{

}
void mglGetObjectParameterfvARB (GLhandleARB obj, GLenum pname, GLfloat * params)
{

}
void mglGetObjectParameterivARB (GLhandleARB obj, GLenum pname, GLint * params)
{

}
void mglGetInfoLogARB (GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{

}
void mglGetAttachedObjectsARB (GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{

}
GLint mglGetUniformLocationARB (GLhandleARB programObj, const GLcharARB * name)
{

}
void mglGetActiveUniformARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{

}
void mglGetUniformfvARB (GLhandleARB programObj, GLint location, GLfloat * params)
{

}
void mglGetUniformivARB (GLhandleARB programObj, GLint location, GLint * params)
{

}
void mglGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{

}
void mglBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB * name)
{

}
void mglGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{

}
GLint mglGetAttribLocationARB (GLhandleARB programObj, const GLcharARB * name)
{

}
void mglDrawBuffersARB (GLsizei n, const GLenum * bufs)
{

}
GLboolean mglIsRenderbuffer (GLuint renderbuffer)
{

}
void mglBindRenderbuffer (GLenum target, GLuint renderbuffer)
{

}
void mglDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers)
{

}
void mglGenRenderbuffers (GLsizei n, GLuint * renderbuffers)
{

}
void mglRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{

}
void mglGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params)
{

}
GLboolean mglIsFramebuffer (GLuint framebuffer)
{

}
void mglBindFramebuffer (GLenum target, GLuint framebuffer)
{

}
void mglDeleteFramebuffers (GLsizei n, const GLuint * framebuffers)
{

}
void mglGenFramebuffers (GLsizei n, GLuint * framebuffers)
{

}
GLenum mglCheckFramebufferStatus (GLenum target)
{

}
void mglFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{

}
void mglFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{

}
void mglFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{

}
void mglFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{

}
void mglGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params)
{

}
void mglGenerateMipmap (GLenum target)
{

}
void mglBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{

}
void mglRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{

}
void mglFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{

}
void mglBlendColorEXT (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{

}
void mglPolygonOffsetEXT (GLfloat factor, GLfloat bias)
{

}
void mglTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{

}
void mglCopyTexImage1DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{

}
void mglCopyTexImage2DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{

}
void mglCopyTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{

}
void mglCopyTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglCopyTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
GLboolean mglAreTexturesResidentEXT (GLsizei n, const GLuint * textures, GLboolean * residences)
{

}
void mglBindTextureEXT (GLenum target, GLuint texture)
{

}
void mglDeleteTexturesEXT (GLsizei n, const GLuint * textures)
{

}
void mglGenTexturesEXT (GLsizei n, GLuint * textures)
{

}
GLboolean mglIsTextureEXT (GLuint texture)
{

}
void mglPrioritizeTexturesEXT (GLsizei n, const GLuint * textures, const GLclampf * priorities)
{

}
void mglArrayElementEXT (GLint i)
{

}
void mglColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer)
{

}
void mglDrawArraysEXT (GLenum mode, GLint first, GLsizei count)
{

}
void mglEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean * pointer)
{

}
void mglGetPointervEXT (GLenum pname, GLvoid *  * params)
{

}
void mglIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer)
{

}
void mglNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer)
{

}
void mglTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer)
{

}
void mglVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid * pointer)
{

}
void mglBlendEquationEXT (GLenum mode)
{

}
void mglPointParameterfEXT (GLenum pname, GLfloat param)
{

}
void mglPointParameterfvEXT (GLenum pname, const GLfloat * params)
{

}
void mglColorTableEXT (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * table)
{

}
void mglGetColorTableEXT (GLenum target, GLenum format, GLenum type, GLvoid * data)
{

}
void mglGetColorTableParameterivEXT (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetColorTableParameterfvEXT (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglLockArraysEXT (GLint first, GLsizei count)
{

}
void mglUnlockArraysEXT ()
{

}
void mglDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{

}
void mglSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue)
{

}
void mglSecondaryColor3bvEXT (const GLbyte * v)
{

}
void mglSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue)
{

}
void mglSecondaryColor3dvEXT (const GLdouble * v)
{

}
void mglSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue)
{

}
void mglSecondaryColor3fvEXT (const GLfloat * v)
{

}
void mglSecondaryColor3iEXT (GLint red, GLint green, GLint blue)
{

}
void mglSecondaryColor3ivEXT (const GLint * v)
{

}
void mglSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue)
{

}
void mglSecondaryColor3svEXT (const GLshort * v)
{

}
void mglSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue)
{

}
void mglSecondaryColor3ubvEXT (const GLubyte * v)
{

}
void mglSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue)
{

}
void mglSecondaryColor3uivEXT (const GLuint * v)
{

}
void mglSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue)
{

}
void mglSecondaryColor3usvEXT (const GLushort * v)
{

}
void mglSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglMultiDrawArraysEXT (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{

}
void mglMultiDrawElementsEXT (GLenum mode, const GLsizei * count, GLenum type, const GLvoid *  * indices, GLsizei primcount)
{

}
void mglFogCoordfEXT (GLfloat coord)
{

}
void mglFogCoordfvEXT (const GLfloat * coord)
{

}
void mglFogCoorddEXT (GLdouble coord)
{

}
void mglFogCoorddvEXT (const GLdouble * coord)
{

}
void mglFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{

}
void mglFlushVertexArrayRangeNV ()
{

}
void mglVertexArrayRangeNV (GLsizei length, const GLvoid * pointer)
{

}
void mglCombinerParameterfvNV (GLenum pname, const GLfloat * params)
{

}
void mglCombinerParameterfNV (GLenum pname, GLfloat param)
{

}
void mglCombinerParameterivNV (GLenum pname, const GLint * params)
{

}
void mglCombinerParameteriNV (GLenum pname, GLint param)
{

}
void mglCombinerInputNV (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{

}
void mglCombinerOutputNV (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{

}
void mglFinalCombinerInputNV (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{

}
void mglGetCombinerInputParameterfvNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{

}
void mglGetCombinerInputParameterivNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{

}
void mglGetCombinerOutputParameterfvNV (GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{

}
void mglGetCombinerOutputParameterivNV (GLenum stage, GLenum portion, GLenum pname, GLint * params)
{

}
void mglGetFinalCombinerInputParameterfvNV (GLenum variable, GLenum pname, GLfloat * params)
{

}
void mglGetFinalCombinerInputParameterivNV (GLenum variable, GLenum pname, GLint * params)
{

}
void mglResizeBuffersMESA ()
{

}
void mglWindowPos2dMESA (GLdouble x, GLdouble y)
{

}
void mglWindowPos2dvMESA (const GLdouble * v)
{

}
void mglWindowPos2fMESA (GLfloat x, GLfloat y)
{

}
void mglWindowPos2fvMESA (const GLfloat * v)
{

}
void mglWindowPos2iMESA (GLint x, GLint y)
{

}
void mglWindowPos2ivMESA (const GLint * v)
{

}
void mglWindowPos2sMESA (GLshort x, GLshort y)
{

}
void mglWindowPos2svMESA (const GLshort * v)
{

}
void mglWindowPos3dMESA (GLdouble x, GLdouble y, GLdouble z)
{

}
void mglWindowPos3dvMESA (const GLdouble * v)
{

}
void mglWindowPos3fMESA (GLfloat x, GLfloat y, GLfloat z)
{

}
void mglWindowPos3fvMESA (const GLfloat * v)
{

}
void mglWindowPos3iMESA (GLint x, GLint y, GLint z)
{

}
void mglWindowPos3ivMESA (const GLint * v)
{

}
void mglWindowPos3sMESA (GLshort x, GLshort y, GLshort z)
{

}
void mglWindowPos3svMESA (const GLshort * v)
{

}
void mglWindowPos4dMESA (GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglWindowPos4dvMESA (const GLdouble * v)
{

}
void mglWindowPos4fMESA (GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglWindowPos4fvMESA (const GLfloat * v)
{

}
void mglWindowPos4iMESA (GLint x, GLint y, GLint z, GLint w)
{

}
void mglWindowPos4ivMESA (const GLint * v)
{

}
void mglWindowPos4sMESA (GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglWindowPos4svMESA (const GLshort * v)
{

}
GLboolean mglAreProgramsResidentNV (GLsizei n, const GLuint * programs, GLboolean * residences)
{

}
void mglBindProgramNV (GLenum target, GLuint id)
{

}
void mglDeleteProgramsNV (GLsizei n, const GLuint * programs)
{

}
void mglExecuteProgramNV (GLenum target, GLuint id, const GLfloat * params)
{

}
void mglGenProgramsNV (GLsizei n, GLuint * programs)
{

}
void mglGetProgramParameterdvNV (GLenum target, GLuint index, GLenum pname, GLdouble * params)
{

}
void mglGetProgramParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat * params)
{

}
void mglGetProgramivNV (GLuint id, GLenum pname, GLint * params)
{

}
void mglGetProgramStringNV (GLuint id, GLenum pname, GLubyte * program)
{

}
void mglGetTrackMatrixivNV (GLenum target, GLuint address, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribdvNV (GLuint index, GLenum pname, GLdouble * params)
{

}
void mglGetVertexAttribfvNV (GLuint index, GLenum pname, GLfloat * params)
{

}
void mglGetVertexAttribivNV (GLuint index, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribPointervNV (GLuint index, GLenum pname, GLvoid *  * pointer)
{

}
GLboolean mglIsProgramNV (GLuint id)
{

}
void mglLoadProgramNV (GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{

}
void mglProgramParameter4dNV (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglProgramParameter4dvNV (GLenum target, GLuint index, const GLdouble * v)
{

}
void mglProgramParameter4fNV (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglProgramParameter4fvNV (GLenum target, GLuint index, const GLfloat * v)
{

}
void mglProgramParameters4dvNV (GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{

}
void mglProgramParameters4fvNV (GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{

}
void mglRequestResidentProgramsNV (GLsizei n, const GLuint * programs)
{

}
void mglTrackMatrixNV (GLenum target, GLuint address, GLenum matrix, GLenum transform)
{

}
void mglVertexAttribPointerNV (GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglVertexAttrib1dNV (GLuint index, GLdouble x)
{

}
void mglVertexAttrib1dvNV (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib1fNV (GLuint index, GLfloat x)
{

}
void mglVertexAttrib1fvNV (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib1sNV (GLuint index, GLshort x)
{

}
void mglVertexAttrib1svNV (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib2dNV (GLuint index, GLdouble x, GLdouble y)
{

}
void mglVertexAttrib2dvNV (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib2fNV (GLuint index, GLfloat x, GLfloat y)
{

}
void mglVertexAttrib2fvNV (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib2sNV (GLuint index, GLshort x, GLshort y)
{

}
void mglVertexAttrib2svNV (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib3dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z)
{

}
void mglVertexAttrib3dvNV (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib3fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z)
{

}
void mglVertexAttrib3fvNV (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib3sNV (GLuint index, GLshort x, GLshort y, GLshort z)
{

}
void mglVertexAttrib3svNV (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglVertexAttrib4dvNV (GLuint index, const GLdouble * v)
{

}
void mglVertexAttrib4fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglVertexAttrib4fvNV (GLuint index, const GLfloat * v)
{

}
void mglVertexAttrib4sNV (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{

}
void mglVertexAttrib4svNV (GLuint index, const GLshort * v)
{

}
void mglVertexAttrib4ubNV (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{

}
void mglVertexAttrib4ubvNV (GLuint index, const GLubyte * v)
{

}
void mglVertexAttribs1dvNV (GLuint index, GLsizei count, const GLdouble * v)
{

}
void mglVertexAttribs1fvNV (GLuint index, GLsizei count, const GLfloat * v)
{

}
void mglVertexAttribs1svNV (GLuint index, GLsizei count, const GLshort * v)
{

}
void mglVertexAttribs2dvNV (GLuint index, GLsizei count, const GLdouble * v)
{

}
void mglVertexAttribs2fvNV (GLuint index, GLsizei count, const GLfloat * v)
{

}
void mglVertexAttribs2svNV (GLuint index, GLsizei count, const GLshort * v)
{

}
void mglVertexAttribs3dvNV (GLuint index, GLsizei count, const GLdouble * v)
{

}
void mglVertexAttribs3fvNV (GLuint index, GLsizei count, const GLfloat * v)
{

}
void mglVertexAttribs3svNV (GLuint index, GLsizei count, const GLshort * v)
{

}
void mglVertexAttribs4dvNV (GLuint index, GLsizei count, const GLdouble * v)
{

}
void mglVertexAttribs4fvNV (GLuint index, GLsizei count, const GLfloat * v)
{

}
void mglVertexAttribs4svNV (GLuint index, GLsizei count, const GLshort * v)
{

}
void mglVertexAttribs4ubvNV (GLuint index, GLsizei count, const GLubyte * v)
{

}
void mglTexBumpParameterivATI (GLenum pname, const GLint * param)
{

}
void mglTexBumpParameterfvATI (GLenum pname, const GLfloat * param)
{

}
void mglGetTexBumpParameterivATI (GLenum pname, GLint * param)
{

}
void mglGetTexBumpParameterfvATI (GLenum pname, GLfloat * param)
{

}
GLuint mglGenFragmentShadersATI (GLuint range)
{

}
void mglBindFragmentShaderATI (GLuint id)
{

}
void mglDeleteFragmentShaderATI (GLuint id)
{

}
void mglBeginFragmentShaderATI ()
{

}
void mglEndFragmentShaderATI ()
{

}
void mglPassTexCoordATI (GLuint dst, GLuint coord, GLenum swizzle)
{

}
void mglSampleMapATI (GLuint dst, GLuint interp, GLenum swizzle)
{

}
void mglColorFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{

}
void mglColorFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{

}
void mglColorFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{

}
void mglAlphaFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{

}
void mglAlphaFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{

}
void mglAlphaFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{

}
void mglSetFragmentShaderConstantATI (GLuint dst, const GLfloat * value)
{

}
void mglPointParameteriNV (GLenum pname, GLint param)
{

}
void mglPointParameterivNV (GLenum pname, const GLint * params)
{

}
void mglDrawBuffersATI (GLsizei n, const GLenum * bufs)
{

}
void mglProgramNamedParameter4fNV (GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{

}
void mglProgramNamedParameter4dNV (GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{

}
void mglProgramNamedParameter4fvNV (GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{

}
void mglProgramNamedParameter4dvNV (GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{

}
void mglGetProgramNamedParameterfvNV (GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{

}
void mglGetProgramNamedParameterdvNV (GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{

}
GLboolean mglIsRenderbufferEXT (GLuint renderbuffer)
{

}
void mglBindRenderbufferEXT (GLenum target, GLuint renderbuffer)
{

}
void mglDeleteRenderbuffersEXT (GLsizei n, const GLuint * renderbuffers)
{

}
void mglGenRenderbuffersEXT (GLsizei n, GLuint * renderbuffers)
{

}
void mglRenderbufferStorageEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{

}
void mglGetRenderbufferParameterivEXT (GLenum target, GLenum pname, GLint * params)
{

}
GLboolean mglIsFramebufferEXT (GLuint framebuffer)
{

}
void mglBindFramebufferEXT (GLenum target, GLuint framebuffer)
{

}
void mglDeleteFramebuffersEXT (GLsizei n, const GLuint * framebuffers)
{

}
void mglGenFramebuffersEXT (GLsizei n, GLuint * framebuffers)
{

}
GLenum mglCheckFramebufferStatusEXT (GLenum target)
{

}
void mglFramebufferTexture1DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{

}
void mglFramebufferTexture2DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{

}
void mglFramebufferTexture3DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{

}
void mglFramebufferRenderbufferEXT (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{

}
void mglGetFramebufferAttachmentParameterivEXT (GLenum target, GLenum attachment, GLenum pname, GLint * params)
{

}
void mglGenerateMipmapEXT (GLenum target)
{

}
void mglFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{

}
GLvoid* mglMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{

}
void mglFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length)
{

}
void mglBindVertexArray (GLuint array)
{

}
void mglDeleteVertexArrays (GLsizei n, const GLuint * arrays)
{

}
void mglGenVertexArrays (GLsizei n, GLuint * arrays)
{

}
GLboolean mglIsVertexArray (GLuint array)
{

}
void mglCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{

}
GLsync mglFenceSync (GLenum condition, GLbitfield flags)
{

}
GLboolean mglIsSync (GLsync sync)
{

}
void mglDeleteSync (GLsync sync)
{

}
GLenum mglClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{

}
void mglWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{

}
void mglGetInteger64v (GLenum pname, GLint64 * params)
{

}
void mglGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{

}
void mglProvokingVertexEXT (GLenum mode)
{

}
void mglDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices, GLint basevertex)
{

}
void mglDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices, GLint basevertex)
{

}
void mglMultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const GLvoid *  * indices, GLsizei primcount, const GLint * basevertex)
{

}
void mglProvokingVertex (GLenum mode)
{

}
void mglRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{

}
void mglColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{

}
void mglGetBooleanIndexedvEXT (GLenum target, GLuint index, GLboolean * data)
{

}
void mglGetIntegerIndexedvEXT (GLenum target, GLuint index, GLint * data)
{

}
void mglEnableIndexedEXT (GLenum target, GLuint index)
{

}
void mglDisableIndexedEXT (GLenum target, GLuint index)
{

}
GLboolean mglIsEnabledIndexedEXT (GLenum target, GLuint index)
{

}
void mglBeginConditionalRenderNV (GLuint id, GLenum mode)
{

}
void mglEndConditionalRenderNV ()
{

}
GLenum mglObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
{

}
GLenum mglObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option)
{

}
void mglGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint * params)
{

}
void mglBeginTransformFeedback (GLenum primitiveMode)
{

}
void mglEndTransformFeedback ()
{

}
void mglBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{

}
void mglBindBufferBase (GLenum target, GLuint index, GLuint buffer)
{

}
void mglTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *  * varyings, GLenum bufferMode)
{

}
void mglGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{

}
void mglDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{

}
void mglDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices, GLsizei primcount)
{

}
void mglDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{

}
void mglDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices, GLsizei primcount)
{

}
void mglProgramParameteriARB (GLuint program, GLenum pname, GLint value)
{

}
void mglFramebufferTextureARB (GLenum target, GLenum attachment, GLuint texture, GLint level)
{

}
void mglFramebufferTextureFaceARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{

}
void mglBindTransformFeedback (GLenum target, GLuint id)
{

}
void mglDeleteTransformFeedbacks (GLsizei n, const GLuint * ids)
{

}
void mglGenTransformFeedbacks (GLsizei n, GLuint * ids)
{

}
GLboolean mglIsTransformFeedback (GLuint id)
{

}
void mglPauseTransformFeedback ()
{

}
void mglResumeTransformFeedback ()
{

}
void mglDrawTransformFeedback (GLenum mode, GLuint id)
{

}
void mglDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{

}
void mglDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices, GLsizei primcount)
{

}
void mglBeginTransformFeedbackEXT (GLenum primitiveMode)
{

}
void mglEndTransformFeedbackEXT ()
{

}
void mglBindBufferRangeEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{

}
void mglBindBufferOffsetEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{

}
void mglBindBufferBaseEXT (GLenum target, GLuint index, GLuint buffer)
{

}
void mglTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar *  * varyings, GLenum bufferMode)
{

}
void mglGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{

}
void mglEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image)
{

}
void mglEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image)
{

}
void mglColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{

}
void mglGetBooleani_v (GLenum target, GLuint index, GLboolean * data)
{

}
void mglGetIntegeri_v (GLenum target, GLuint index, GLint * data)
{

}
void mglEnablei (GLenum target, GLuint index)
{

}
void mglDisablei (GLenum target, GLuint index)
{

}
GLboolean mglIsEnabledi (GLenum target, GLuint index)
{

}
void mglClampColor (GLenum target, GLenum clamp)
{

}
void mglBeginConditionalRender (GLuint id, GLenum mode)
{

}
void mglEndConditionalRender ()
{

}
void mglVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglGetVertexAttribIiv (GLuint index, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params)
{

}
void mglVertexAttribI1i (GLuint index, GLint x)
{

}
void mglVertexAttribI2i (GLuint index, GLint x, GLint y)
{

}
void mglVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z)
{

}
void mglVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w)
{

}
void mglVertexAttribI1ui (GLuint index, GLuint x)
{

}
void mglVertexAttribI2ui (GLuint index, GLuint x, GLuint y)
{

}
void mglVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z)
{

}
void mglVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{

}
void mglVertexAttribI1iv (GLuint index, const GLint * v)
{

}
void mglVertexAttribI2iv (GLuint index, const GLint * v)
{

}
void mglVertexAttribI3iv (GLuint index, const GLint * v)
{

}
void mglVertexAttribI4iv (GLuint index, const GLint * v)
{

}
void mglVertexAttribI1uiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI2uiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI3uiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI4uiv (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI4bv (GLuint index, const GLbyte * v)
{

}
void mglVertexAttribI4sv (GLuint index, const GLshort * v)
{

}
void mglVertexAttribI4ubv (GLuint index, const GLubyte * v)
{

}
void mglVertexAttribI4usv (GLuint index, const GLushort * v)
{

}
void mglGetUniformuiv (GLuint program, GLint location, GLuint * params)
{

}
void mglBindFragDataLocation (GLuint program, GLuint color, const GLchar * name)
{

}
GLint mglGetFragDataLocation (GLuint program, const GLchar * name)
{

}
void mglUniform1ui (GLint location, GLuint v0)
{

}
void mglUniform2ui (GLint location, GLuint v0, GLuint v1)
{

}
void mglUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2)
{

}
void mglUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{

}
void mglUniform1uiv (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform2uiv (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform3uiv (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform4uiv (GLint location, GLsizei count, const GLuint * value)
{

}
void mglTexParameterIiv (GLenum target, GLenum pname, const GLint * params)
{

}
void mglTexParameterIuiv (GLenum target, GLenum pname, const GLuint * params)
{

}
void mglGetTexParameterIiv (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetTexParameterIuiv (GLenum target, GLenum pname, GLuint * params)
{

}
void mglClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value)
{

}
void mglClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value)
{

}
void mglClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value)
{

}
void mglClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{

}
const GLubyte * mglGetStringi (GLenum name, GLuint index)
{

}
void mglTexBuffer (GLenum target, GLenum internalformat, GLuint buffer)
{

}
void mglPrimitiveRestartIndex (GLuint index)
{

}
void mglGetInteger64i_v (GLenum target, GLuint index, GLint64 * data)
{

}
void mglGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params)
{

}
void mglFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level)
{

}
void mglVertexAttribDivisor (GLuint index, GLuint divisor)
{

}
void mglPrimitiveRestartNV ()
{

}
void mglPrimitiveRestartIndexNV (GLuint index)
{

}
void mglVertexAttribI1iEXT (GLuint index, GLint x)
{

}
void mglVertexAttribI2iEXT (GLuint index, GLint x, GLint y)
{

}
void mglVertexAttribI3iEXT (GLuint index, GLint x, GLint y, GLint z)
{

}
void mglVertexAttribI4iEXT (GLuint index, GLint x, GLint y, GLint z, GLint w)
{

}
void mglVertexAttribI1uiEXT (GLuint index, GLuint x)
{

}
void mglVertexAttribI2uiEXT (GLuint index, GLuint x, GLuint y)
{

}
void mglVertexAttribI3uiEXT (GLuint index, GLuint x, GLuint y, GLuint z)
{

}
void mglVertexAttribI4uiEXT (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{

}
void mglVertexAttribI1ivEXT (GLuint index, const GLint * v)
{

}
void mglVertexAttribI2ivEXT (GLuint index, const GLint * v)
{

}
void mglVertexAttribI3ivEXT (GLuint index, const GLint * v)
{

}
void mglVertexAttribI4ivEXT (GLuint index, const GLint * v)
{

}
void mglVertexAttribI1uivEXT (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI2uivEXT (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI3uivEXT (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI4uivEXT (GLuint index, const GLuint * v)
{

}
void mglVertexAttribI4bvEXT (GLuint index, const GLbyte * v)
{

}
void mglVertexAttribI4svEXT (GLuint index, const GLshort * v)
{

}
void mglVertexAttribI4ubvEXT (GLuint index, const GLubyte * v)
{

}
void mglVertexAttribI4usvEXT (GLuint index, const GLushort * v)
{

}
void mglVertexAttribIPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{

}
void mglGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint * params)
{

}
void mglGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint * params)
{

}
void mglGetUniformuivEXT (GLuint program, GLint location, GLuint * params)
{

}
void mglBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar * name)
{

}
GLint mglGetFragDataLocationEXT (GLuint program, const GLchar * name)
{

}
void mglUniform1uiEXT (GLint location, GLuint v0)
{

}
void mglUniform2uiEXT (GLint location, GLuint v0, GLuint v1)
{

}
void mglUniform3uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2)
{

}
void mglUniform4uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{

}
void mglUniform1uivEXT (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform2uivEXT (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform3uivEXT (GLint location, GLsizei count, const GLuint * value)
{

}
void mglUniform4uivEXT (GLint location, GLsizei count, const GLuint * value)
{

}
void mglTexParameterIivEXT (GLenum target, GLenum pname, const GLint * params)
{

}
void mglTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint * params)
{

}
void mglGetTexParameterIivEXT (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint * params)
{

}
void mglClearColorIiEXT (GLint red, GLint green, GLint blue, GLint alpha)
{

}
void mglClearColorIuiEXT (GLuint red, GLuint green, GLuint blue, GLuint alpha)
{

}
void mglUseShaderProgramEXT (GLenum type, GLuint program)
{

}
void mglActiveProgramEXT (GLuint program)
{

}
GLuint mglCreateShaderProgramEXT (GLenum type, const GLchar * string)
{

}
void mglProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{

}
void mglProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{

}
void mglBlendEquationSeparateATI (GLenum modeRGB, GLenum modeA)
{

}
void mglGetHistogramEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{

}
void mglGetHistogramParameterfvEXT (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetHistogramParameterivEXT (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetMinmaxEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{

}
void mglGetMinmaxParameterfvEXT (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetMinmaxParameterivEXT (GLenum target, GLenum pname, GLint * params)
{

}
void mglHistogramEXT (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{

}
void mglMinmaxEXT (GLenum target, GLenum internalformat, GLboolean sink)
{

}
void mglResetHistogramEXT (GLenum target)
{

}
void mglResetMinmaxEXT (GLenum target)
{

}
void mglConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image)
{

}
void mglConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image)
{

}
void mglConvolutionParameterfEXT (GLenum target, GLenum pname, GLfloat params)
{

}
void mglConvolutionParameterfvEXT (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglConvolutionParameteriEXT (GLenum target, GLenum pname, GLint params)
{

}
void mglConvolutionParameterivEXT (GLenum target, GLenum pname, const GLint * params)
{

}
void mglCopyConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{

}
void mglCopyConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{

}
void mglGetConvolutionFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid * image)
{

}
void mglGetConvolutionParameterfvEXT (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetConvolutionParameterivEXT (GLenum target, GLenum pname, GLint * params)
{

}
void mglGetSeparableFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span)
{

}
void mglSeparableFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column)
{

}
void mglColorTableSGI (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table)
{

}
void mglColorTableParameterfvSGI (GLenum target, GLenum pname, const GLfloat * params)
{

}
void mglColorTableParameterivSGI (GLenum target, GLenum pname, const GLint * params)
{

}
void mglCopyColorTableSGI (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{

}
void mglGetColorTableSGI (GLenum target, GLenum format, GLenum type, GLvoid * table)
{

}
void mglGetColorTableParameterfvSGI (GLenum target, GLenum pname, GLfloat * params)
{

}
void mglGetColorTableParameterivSGI (GLenum target, GLenum pname, GLint * params)
{

}
void mglPixelTexGenSGIX (GLenum mode)
{

}
void mglPixelTexGenParameteriSGIS (GLenum pname, GLint param)
{

}
void mglPixelTexGenParameterivSGIS (GLenum pname, const GLint * params)
{

}
void mglPixelTexGenParameterfSGIS (GLenum pname, GLfloat param)
{

}
void mglPixelTexGenParameterfvSGIS (GLenum pname, const GLfloat * params)
{

}
void mglGetPixelTexGenParameterivSGIS (GLenum pname, GLint * params)
{

}
void mglGetPixelTexGenParameterfvSGIS (GLenum pname, GLfloat * params)
{

}
void mglSampleMaskSGIS (GLclampf value, GLboolean invert)
{

}
void mglSamplePatternSGIS (GLenum pattern)
{

}
void mglPointParameterfSGIS (GLenum pname, GLfloat param)
{

}
void mglPointParameterfvSGIS (GLenum pname, const GLfloat * params)
{

}
void mglColorSubTableEXT (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data)
{

}
void mglCopyColorSubTableEXT (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{

}
void mglBlendFuncSeparateINGR (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{

}
void mglMultiModeDrawArraysIBM (const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{

}
void mglMultiModeDrawElementsIBM (const GLenum * mode, const GLsizei * count, GLenum type, const GLvoid * const * indices, GLsizei primcount, GLint modestride)
{

}
void mglSampleMaskEXT (GLclampf value, GLboolean invert)
{

}
void mglSamplePatternEXT (GLenum pattern)
{

}
void mglDeleteFencesNV (GLsizei n, const GLuint * fences)
{

}
void mglGenFencesNV (GLsizei n, GLuint * fences)
{

}
GLboolean mglIsFenceNV (GLuint fence)
{

}
GLboolean mglTestFenceNV (GLuint fence)
{

}
void mglGetFenceivNV (GLuint fence, GLenum pname, GLint * params)
{

}
void mglFinishFenceNV (GLuint fence)
{

}
void mglSetFenceNV (GLuint fence, GLenum condition)
{

}
void mglActiveStencilFaceEXT (GLenum face)
{

}
void mglBindVertexArrayAPPLE (GLuint array)
{

}
void mglDeleteVertexArraysAPPLE (GLsizei n, const GLuint * arrays)
{

}
void mglGenVertexArraysAPPLE (GLsizei n, GLuint * arrays)
{

}
GLboolean mglIsVertexArrayAPPLE (GLuint array)
{

}
void mglStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{

}
void mglStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{

}
void mglDepthBoundsEXT (GLclampd zmin, GLclampd zmax)
{

}
void mglBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha)
{

}
void mglBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{

}
void mglGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64EXT * params)
{

}
void mglGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64EXT * params)
{

}
void mglBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param)
{

}
void mglFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size)
{

}
void mglTextureRangeAPPLE (GLenum target, GLsizei length, const GLvoid * pointer)
{

}
void mglGetTexParameterPointervAPPLE (GLenum target, GLenum pname, GLvoid *  * params)
{

}
