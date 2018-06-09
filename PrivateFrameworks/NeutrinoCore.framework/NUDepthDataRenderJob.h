/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDepthDataRenderJob : NURenderJob {
    AVDepthData * _depthData;
    NUCVPixelBuffer * _depthMap;
    long long  _depthType;
    unsigned int  _pixelFormat;
    CIRenderTask * _renderTask;
}

@property (retain) AVDepthData *depthData;

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)depthData;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setDepthData:(id)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsPrepareNodeCached;
- (bool)wantsRenderNodeCached;
- (bool)wantsRenderScaleClampedToNativeScale;

@end
