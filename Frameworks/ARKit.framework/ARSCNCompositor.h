/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSCNCompositor : NSObject {
    ARFrame * _currentFrame;
    long long  _currentOrientation;
    <MTLComputePipelineState> * _depthStencilPSO;
    <MTLDevice> * _device;
    <MTLTexture> * _dilatedDepthDownsampled;
    <MTLTexture> * _dilatedStencilDownsampled;
    <MTLBuffer> * _dilation;
    MPSImageGuidedFilter * _guidedFilter;
    <MTLLibrary> * _mattingLibrary;
    <MTLComputePipelineState> * _muxPSO;
    int  _n;
    <MTLTexture> * _occluderCoefficients;
    <MTLTexture> * _occluderMatte;
    <MTLTexture> * _occluderMatting;
    <MTLTexture> * _occluderStencilDownsampled;
    <MTLComputePipelineState> * _occlusionPSO;
    <MTLTexture> * _overlayCoefficients;
    <MTLTexture> * _overlayMatte;
    <MTLTexture> * _overlayStencilDownsampled;
    <MTLRenderPipelineState> * _resampleML;
    bool  _showOcclusionGeometry;
    SCNTechnique * _technique;
    unsigned int  _uncertaintyRadius;
    ARSCNView * _view;
}

@property (nonatomic) ARFrame *currentFrame;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) bool showOcclusionGeometry;

+ (id)mattingDictionary;
+ (id)nonIntrusiveMattingTechnique;

- (void).cxx_destruct;
- (id)currentFrame;
- (long long)currentOrientation;
- (void)executeCallback:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)setCurrentFrame:(id)arg1;
- (void)setCurrentOrientation:(long long)arg1;
- (void)setShowOcclusionGeometry:(bool)arg1;
- (void)setupBuffers:(struct CGSize { double x1; double x2; })arg1 device:(id)arg2;
- (bool)showOcclusionGeometry;

@end
