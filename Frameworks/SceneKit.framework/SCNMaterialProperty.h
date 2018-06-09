/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMaterialProperty : NSObject <NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    UIColor * _borderColor;
    struct __C3DImage { } * _c3dImage;
    struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } * _contentTransform;
    unsigned char  _contentType;
    id  _contents;
    struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; } * _customSlot;
    NSString * _customSlotName;
    float  _intensity;
    unsigned int  _isCommonProfileProperty;
    unsigned int  _isPresentationInstance;
    unsigned char  _magnificationFilter;
    long long  _mappingChannel;
    float  _maxAnisotropy;
    unsigned char  _minificationFilter;
    unsigned char  _mipFilter;
    id  _parent;
    unsigned int  _preventWarmup;
    BOOL  _propertyType;
    id  _runtimeResolvedPath;
    unsigned int  _sRGB;
    unsigned char  _textureComponents;
    unsigned char  _wrapS;
    unsigned char  _wrapT;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic, retain) id borderColor;
@property (nonatomic, retain) id contents;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } contentsTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double intensity;
@property (nonatomic) long long magnificationFilter;
@property (nonatomic) long long mappingChannel;
@property (nonatomic) double maxAnisotropy;
@property (nonatomic) long long minificationFilter;
@property (nonatomic) long long mipFilter;
@property (readonly) Class superclass;
@property (nonatomic) long long textureComponents;
@property (nonatomic) long long wrapS;
@property (nonatomic) long long wrapT;

+ (struct __C3DImage { }*)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2;
+ (id)_copyImageFromC3DImage:(struct __C3DImage { }*)arg1;
+ (id)captureDeviceOutputConsumer;
+ (struct __C3DImage { }*)copyC3DImageFromImage:(id)arg1;
+ (struct __C3DImage { }*)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2;
+ (struct __C3DImage { }*)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 wasCached:(bool*)arg3;
+ (id)copyImageFromC3DImage:(struct __C3DImage { }*)arg1;
+ (id)dvt_supportedTypesForPropertyContents;
+ (id)materialPropertyWithContents:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)UIView;
- (const void*)__CFObject;
- (void)__allocateContentTransformIfNeeded;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)_animationPathForKey:(id)arg1;
- (void)_clearContents;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (bool)_hasDefaultValues;
- (void)_layerDidChange:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (long long)_presentationMappingChannel;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_setC3DImageRef:(struct __C3DImage { }*)arg1;
- (void)_setColor:(id)arg1;
- (void)_setImagePath:(id)arg1 withResolvedPath:(id)arg2;
- (void)_setParent:(id)arg1;
- (void)_setupContentsFromC3DImage;
- (void)_skSceneDidChange:(id)arg1;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (int)_textureOptions;
- (void)_updateC3DImageWithContents:(id)arg1;
- (void)_updateMaterialAVPlayer:(id)arg1;
- (void)_updateMaterialAttachment:(id)arg1;
- (void)_updateMaterialBorderColor:(id)arg1;
- (void)_updateMaterialCaptureDevice:(id)arg1;
- (void)_updateMaterialCaptureDeviceOutputConsumerSource:(id)arg1;
- (void)_updateMaterialColor:(id)arg1;
- (void)_updateMaterialFilters;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialMTLTexture:(id)arg1;
- (void)_updateMaterialNumber:(id)arg1;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (void)_updateMaterialPropertyTransform:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; })arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialUIComponent:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (id)attachment;
- (id)avPlayer;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)borderColor;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })borderColor4;
- (id)captureDevice;
- (id)captureDeviceOutputConsumerSource;
- (id)color;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })color4;
- (struct __C3DEffectCommonProfile { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __C3DMaterial {} *x2; int x3; struct __C3DEffectSlot {} *x4; struct __C3DEffectSlot {} *x5; struct __C3DEffectSlot {} *x6; struct __C3DEffectSlot {} *x7; struct __C3DEffectSlot {} *x8; struct __C3DEffectSlot {} *x9; struct __C3DEffectSlot {} *x10; struct __C3DEffectSlot {} *x11; struct __C3DEffectSlot {} *x12; struct __C3DEffectSlot {} *x13; struct __C3DEffectSlot {} *x14; struct __C3DEffectSlot {} *x15; struct __C3DEffectSlot {} *x16; float x17; float x18; float x19; float x20; float x21; unsigned char x22; long long x23; bool x24; bool x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 13; }*)commonProfile;
- (id)content;
- (id)contents;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })contentsTransform;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)copyPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)effectSlot;
- (struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)effectSlotCreateIfNeeded:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floatValue;
- (void*)getC3DImageRef;
- (id)image;
- (id)init;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 propertyType:(BOOL)arg2;
- (double)intensity;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (id)layer;
- (void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (long long)magnificationFilter;
- (long long)mappingChannel;
- (double)maxAnisotropy;
- (long long)minificationFilter;
- (long long)mipFilter;
- (id)mtlTexture;
- (id)parent;
- (void)parentWillDie:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationMaterialProperty;
- (id)proceduralContents;
- (id)propertyName;
- (BOOL)propertyType;
- (id)pvrtcData;
- (void)removeAllAnimations;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (bool)sRGBTexture;
- (struct __C3DScene { }*)sceneRef;
- (void)setAttachment:(id)arg1;
- (void)setAvPlayer:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setCaptureDevice:(id)arg1;
- (void)setCaptureDeviceOutputConsumerSource:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setFloatValue:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIntensity:(double)arg1;
- (void)setLayer:(id)arg1;
- (void)setMagnificationFilter:(long long)arg1;
- (void)setMappingChannel:(long long)arg1;
- (void)setMaxAnisotropy:(double)arg1;
- (void)setMinificationFilter:(long long)arg1;
- (void)setMipFilter:(long long)arg1;
- (void)setMtlTexture:(id)arg1;
- (void)setProceduralContents:(id)arg1;
- (void)setSRGBTexture:(bool)arg1;
- (void)setSkScene:(id)arg1;
- (void)setSkTexture:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setTextureComponents:(long long)arg1;
- (void)setUIView:(id)arg1;
- (void)setUIWindow:(id)arg1;
- (void)setWrapS:(long long)arg1;
- (void)setWrapT:(long long)arg1;
- (id)skScene;
- (id)skTexture;
- (id)slotName;
- (long long)textureComponents;
- (struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)textureSampler;
- (void)unbindAnimatablePath:(id)arg1;
- (void)unlinkCustomPropertyWithParent:(id)arg1;
- (long long)wrapS;
- (long long)wrapT;

@end
