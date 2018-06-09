/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLComputePipeline : NSObject {
    <MTLFunction> * _computeFunction;
    <MTLComputePipelineState> * _state;
}

@property (nonatomic, retain) <MTLFunction> *computeFunction;
@property (nonatomic, retain) <MTLComputePipelineState> *state;

- (id)computeFunction;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setComputeFunction:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
