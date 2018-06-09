/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMatchMoveAnimation : CAAnimation

@property (getter=isAdditive) bool additive;
@property bool appliesRotation;
@property bool appliesScale;
@property bool appliesX;
@property bool appliesY;
@property (copy) NSString *keyPath;
@property unsigned int sourceContextId;
@property CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property (copy) NSArray *sourcePoints;
@property bool targetsSuperlayer;

+ (id)defaultValueForKey:(id)arg1;

- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (bool)appliesRotation;
- (bool)appliesScale;
- (bool)appliesX;
- (bool)appliesY;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)isAdditive;
- (id)keyPath;
- (void)setAdditive:(bool)arg1;
- (void)setAppliesRotation:(bool)arg1;
- (void)setAppliesScale:(bool)arg1;
- (void)setAppliesX:(bool)arg1;
- (void)setAppliesY:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourceLayerRenderId:(unsigned long long)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setTargetsSuperlayer:(bool)arg1;
- (unsigned int)sourceContextId;
- (id)sourceLayer;
- (unsigned long long)sourceLayerRenderId;
- (id)sourcePoints;
- (bool)targetsSuperlayer;

@end
