/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKView : UIView <CALayerDelegate, NSCoding> {
    bool  _autoResizeDrawable;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _clearColor;
    double  _clearDepth;
    unsigned int  _clearStencil;
    unsigned long long  _colorPixelFormats;
    <MTLTexture> * _colorTextures;
    <CAMetalDrawable> * _currentDrawable;
    <MTKViewDelegate> * _delegate;
    unsigned long long  _depthStencilPixelFormat;
    <MTLTexture> * _depthStencilTexture;
    <MTLDevice> * _device;
    bool  _deviceReset;
    CADisplayLink * _displayLink;
    bool  _drawOffscreen;
    int (* _drawRectSubIMP;
    unsigned long long  _drawableAttachmentIndex;
    unsigned long long  _drawableIdx;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableScaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableSize;
    bool  _dumpFirstFrame;
    unsigned long long  _dumpFrameAtFrame;
    unsigned long long  _dumpFrameAtSeconds;
    NSString * _dumpPath;
    bool  _enableSetNeedsDisplay;
    long long  _forceOrientation;
    unsigned int  _frameNum;
    bool  _framebufferOnly;
    long long  _maxValidAttachmentIndex;
    unsigned long long  _measureAfterFrame;
    unsigned long long  _measureAfterSeconds;
    CAMetalLayer * _metalLayer;
    <MTLTexture> * _multisampleColorTexture;
    <MTLTexture> * _multisampleColorTextures;
    long long  _nominalFramesPerSecond;
    MTKOffscreenDrawable * _offscreenSwapChain;
    bool  _paused;
    bool  _pausedOnBackgrounding;
    long long  _preferredFramesPerSecond;
    int  _renderAttachmentDirtyState;
    unsigned long long  _sampleCount;
    bool  _sizeDirty;
    double  _startTime;
    bool  _subClassOverridesDrawRect;
    unsigned long long  _terminateAfterFrame;
    unsigned long long  _terminateAfterSeconds;
}

@property (nonatomic) bool autoResizeDrawable;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } clearColor;
@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) struct CGColorSpace { }*colorspace;
@property (nonatomic, readonly) <CAMetalDrawable> *currentDrawable;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTKViewDelegate> *delegate;
@property (nonatomic) unsigned long long depthStencilPixelFormat;
@property (nonatomic, readonly) <MTLTexture> *depthStencilTexture;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic) bool enableSetNeedsDisplay;
@property (nonatomic) bool framebufferOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTLTexture> *multisampleColorTexture;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) bool presentsWithTransaction;
@property (nonatomic) unsigned long long sampleCount;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)__initCommon;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (long long)_calculateRefeshesPerSecond;
- (bool)_canDrawContent;
- (bool)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_dumpFrameImageWithFilename:(id)arg1;
- (void)_dumpFramerate:(double)arg1 withFilename:(id)arg2;
- (struct CGSize { double x1; double x2; })_pixelSizeFromPointSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resizeDrawable;
- (void)_resizeMetalLayerDrawable;
- (bool)autoResizeDrawable;
- (struct { double x1; double x2; double x3; double x4; })clearColor;
- (double)clearDepth;
- (unsigned int)clearStencil;
- (unsigned long long)colorPixelFormat;
- (const id*)colorTextures;
- (struct CGColorSpace { }*)colorspace;
- (id)currentDrawable;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)depthStencilPixelFormat;
- (id)depthStencilTexture;
- (id)device;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)draw;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned long long)drawableAttachmentIndex;
- (struct CGSize { double x1; double x2; })drawableSize;
- (bool)enableSetNeedsDisplay;
- (void)encodeWithCoder:(id)arg1;
- (bool)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void*)arg5;
- (bool)framebufferOnly;
- (void)getEnvironmentSettings;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (bool)isPaused;
- (void)layoutSubviews;
- (id)multisampleColorTexture;
- (const id*)multisampleColorTextures;
- (long long)nominalFramesPerSecond;
- (long long)preferredFramesPerSecond;
- (bool)presentsWithTransaction;
- (void)releaseDrawables;
- (unsigned long long)sampleCount;
- (void)setAutoResizeDrawable:(bool)arg1;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setClearDepth:(double)arg1;
- (void)setClearStencil:(unsigned int)arg1;
- (void)setColorPixelFormat:(unsigned long long)arg1;
- (void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthStencilPixelFormat:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setDrawableAttachmentIndex:(unsigned long long)arg1;
- (void)setDrawableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEnableSetNeedsDisplay:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFramebufferOnly:(bool)arg1;
- (void)setNominalFramesPerSecond:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (void)setSampleCount:(unsigned long long)arg1;

@end
