/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLReduceDepthPass : SCNMTLRenderPass {
    SCNMTLComputePipeline * _initCS;
    <MTLBuffer> * _reduceResult;
    <MTLTexture> * _reduceTmpTexture;
    SCNMTLComputePipeline * _stepCS;
    SCNMTLComputePipeline * _tailCS;
}

- (void)dealloc;
- (void)execute:(id)arg1;
- (void)setup:(id)arg1;

@end
