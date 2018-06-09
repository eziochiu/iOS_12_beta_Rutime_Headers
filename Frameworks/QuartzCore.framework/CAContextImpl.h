/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContextImpl : CAContext {
    struct Context { unsigned int x1; struct Context {} *x2; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; struct Weak<const void *> { id x_4_1_1; } x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; struct Context {} x9; struct CGColorSpace {} *x10; int x11; struct __CFDictionary {} *x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; struct ObjectCache {} *x17; id x18; unsigned int x19; float x20; struct Commit {} *x21; struct Generic { int (**x_22_1_1)(); struct Context {} *x_22_1_2; } x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; } * _impl;
}

- (bool)colorMatchUntaggedContent;
- (struct CGColorSpace { }*)colorSpace;
- (unsigned int)commitPriority;
- (id)contentsFormat;
- (unsigned int)contextId;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2 extendedColors:(bool)arg3;
- (unsigned int)createSlot;
- (void)dealloc;
- (void)deleteSlot:(unsigned int)arg1;
- (float)desiredDynamicRange;
- (unsigned int)hitTestContext:(struct CGPoint { double x1; double x2; })arg1;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 localContext:(bool)arg2;
- (void)invalidate;
- (void)invalidateFences;
- (bool)isSecure;
- (id)layer;
- (float)level;
- (id)options;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (struct Context { }*)renderContext;
- (void)setColorMatchUntaggedContent:(bool)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setCommitPriority:(unsigned int)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setDesiredDynamicRange:(float)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id /* block */)arg2;
- (void)setLayer:(id)arg1;
- (void)setLevel:(float)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)setSecure:(bool)arg1;
- (bool)valid;

@end
