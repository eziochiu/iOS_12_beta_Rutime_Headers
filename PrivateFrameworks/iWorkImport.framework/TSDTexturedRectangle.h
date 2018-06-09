/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTexturedRectangle : NSObject <NSCopying> {
    NSMutableDictionary * mAttributes;
    struct CGImage { } * mBakedImage;
    struct CGColorSpace { } * mColorSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mContentRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameOnCanvas;
    bool  mIsFlattened;
    CALayer * mLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOriginalFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOriginalPosition;
    TSDTextureSet * mParent;
    id /* block */  mRenderBlock;
    bool  mSingleTextureContainsMipmaps;
    unsigned int  mSingleTextureName;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    struct CGImage { } * mSourceImage;
    NSMutableArray * mTags;
    double  mTextureOpacity;
    int  mTextureType;
}

@property (nonatomic, retain) NSMutableDictionary *attributes;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOnCanvas;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) bool isBackgroundTexture;
@property (nonatomic) bool isFlattened;
@property (nonatomic, readonly) bool isRenderable;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) float opacityFromAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPosition;
@property (nonatomic) TSDTextureSet *parent;
@property (nonatomic, readonly) CALayer *parentLayer;
@property (nonatomic, readonly) unsigned int singleTextureName;
@property (nonatomic, readonly) double singleTextureOpacity;
@property (nonatomic, readonly) unsigned int singleTextureTarget;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic) double textureOpacity;
@property (nonatomic) int textureType;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transformFromAttributes;

- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint { double x1; double x2; })arg1 isMagicMove:(bool)arg2;
- (id)attributes;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStage:(long long)arg1 isBuildIn:(bool)arg2;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOnCanvas;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 renderBlock:(id /* block */)arg3;
- (bool)isBackgroundTexture;
- (bool)isFlattened;
- (bool)isRenderable;
- (id)layer;
- (struct CGPoint { double x1; double x2; })offset;
- (float)opacityFromAttributes;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (struct CGColorSpace { }*)p_colorSpace;
- (struct CGImage { }*)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (id)parent;
- (id)parentLayer;
- (void)releaseSingleTexture;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)resetToSourceImage;
- (void)setAttributes:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameOnCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsFlattened:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParent:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTextureOpacity:(double)arg1;
- (void)setTextureType:(int)arg1;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(bool)arg1;
- (unsigned int)singleTextureName;
- (double)singleTextureOpacity;
- (unsigned int)singleTextureTarget;
- (struct CGSize { double x1; double x2; })size;
- (id)tags;
- (void)teardown;
- (double)textureOpacity;
- (int)textureType;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformFromAttributes;

@end
