/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface LKTGPU : NSObject {
    <MTLBuffer> * _Adiagb_buf;
    struct __CVBuffer { } * _C0_pxbuf;
    <MTLTexture> * _C0_tex;
    struct __CVBuffer { } * _C1_pxbuf;
    <MTLTexture> * _C1_tex;
    struct __CVBuffer { } * _G0_pxbuf;
    <MTLTexture> * _G0_tex;
    struct __CVBuffer { } * _G1_pxbuf;
    <MTLTexture> * _G1_tex;
    <MTLTexture> * _I_tex;
    <MTLTexture> * _I_u32_alias_tex;
    <MTLBuffer> * _Ixy_buf;
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _computePipelines;
    int  _current_frame_index;
    int  _height;
    bool  _isValid;
    unsigned long long  _maxThreadExecutionWidth;
    LKTMetalContext * _mtlContext;
    bool  _needConversionBGRA2YUVA;
    int  _nlreg_padding;
    int  _nlreg_radius;
    float  _nlreg_sigma_c;
    float  _nlreg_sigma_l;
    float  _nlreg_sigma_w;
    int  _nscales;
    int  _nwarpings;
    struct CGSize { 
        double width; 
        double height; 
    }  _pyramid_size;
    int  _streamFrameCount;
    bool  _useNonLocalRegularization;
    struct __CVBuffer {} * _uv_pxbuf;
    <MTLTexture> * _uv_tex;
    <MTLTexture> * _uv_tex_user_ref;
    <MTLTexture> * _uv_u32_alias_tex;
    struct __CVBuffer { } * _w_pxbuf;
    <MTLTexture> * _w_tex;
    int  _width;
}

@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) bool needConversionBGRA2YUVA;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_w;
@property (nonatomic, readonly) int nscales;
@property (nonatomic) int nwarpings;
@property (nonatomic, readonly) int streamFrameCount;
@property (nonatomic) bool useNonLocalRegularization;
@property (nonatomic, readonly) int width;

- (void).cxx_destruct;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeOpticalFlow;
- (bool)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(struct __CVBuffer { }*)arg2 I_idx:(int)arg3 error:(id*)arg4;
- (int)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (int)_doSolverWithCommandBuffer:(void *)arg1 scale:(void *)arg2 scale_factor:(void *)arg3 in_uv_tex:(void *)arg4 out_uv_tex:(void *)arg5 out_w_tex:(void *)arg6; // needs 6 arg types, found 5: id, int, id, id, id
- (int)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3;
- (bool)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3 error:(id*)arg4;
- (void)_setDefaultParameters;
- (bool)_setupBufferAndReturnError:(id*)arg1;
- (void)_setupPipelines;
- (int)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (void)dealloc;
- (int)estimateFlowFromReference:(struct __CVBuffer { }*)arg1 target:(struct __CVBuffer { }*)arg2;
- (int)estimateFlowStream:(struct __CVBuffer { }*)arg1;
- (int)height;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4 error:(id*)arg5;
- (bool)isValid;
- (bool)needConversionBGRA2YUVA;
- (int)nlreg_padding;
- (int)nlreg_radius;
- (float)nlreg_sigma_c;
- (float)nlreg_sigma_l;
- (float)nlreg_sigma_w;
- (int)nscales;
- (int)nwarpings;
- (void)reset;
- (void)setNeedConversionBGRA2YUVA:(bool)arg1;
- (void)setNlreg_padding:(int)arg1;
- (void)setNlreg_radius:(int)arg1;
- (void)setNlreg_sigma_c:(float)arg1;
- (void)setNlreg_sigma_l:(float)arg1;
- (void)setNlreg_sigma_w:(float)arg1;
- (void)setNwarpings:(int)arg1;
- (bool)setOutputUV:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (void)setPreset:(long long)arg1;
- (void)setUseNonLocalRegularization:(bool)arg1;
- (int)streamFrameCount;
- (bool)useNonLocalRegularization;
- (void)waitUntilCompleted;
- (int)width;

@end
