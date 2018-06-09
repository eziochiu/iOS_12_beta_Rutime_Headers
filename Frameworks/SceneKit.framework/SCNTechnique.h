/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTechnique : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    unsigned int  _isPresentationInstance;
    <MTLLibrary> * _library;
    NSArray * _passes;
    struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; long long x2; long long x3; struct __C3DFXPass {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10; struct { /* ? */ } *x11; struct __CFDictionary {} *x12; struct __C3DNode {} *x13; struct __CFArray {} *x14; struct __C3DFXTechnique {} *x15; void *x16; } * _technique;
    NSMutableDictionary * _valueForSymbol;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; long long x2; long long x3; struct __C3DFXPass {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10; struct { /* ? */ } *x11; struct __CFDictionary {} *x12; struct __C3DNode {} *x13; struct __CFArray {} *x14; struct __C3DFXTechnique {} *x15; void *x16; }*)arg1;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)_didInstallInEngineContext:(struct __C3DEngineContext { }*)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setupPasses;
- (id)_symbolsAssignedValues;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; long long x2; long long x3; struct __C3DFXPass {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10; struct { /* ? */ } *x11; struct __CFDictionary {} *x12; struct __C3DNode {} *x13; struct __CFArray {} *x14; struct __C3DFXTechnique {} *x15; void *x16; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; long long x2; long long x3; struct __C3DFXPass {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10; struct { /* ? */ } *x11; struct __CFDictionary {} *x12; struct __C3DNode {} *x13; struct __CFArray {} *x14; struct __C3DFXTechnique {} *x15; void *x16; }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (id)library;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)passAtIndex:(unsigned long long)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (void)removeAllAnimations;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setLibrary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; long long x2; long long x3; struct __C3DFXPass {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10; struct { /* ? */ } *x11; struct __CFDictionary {} *x12; struct __C3DNode {} *x13; struct __CFArray {} *x14; struct __C3DFXTechnique {} *x15; void *x16; }*)techniqueRef;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForSymbolNamed:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
