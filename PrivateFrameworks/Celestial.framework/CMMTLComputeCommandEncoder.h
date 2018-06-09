/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLComputeCommandEncoder : NSObject <MTLComputeCommandEncoderSPI> {
    CMMTLCommandBuffer * _cmCommandBuffer;
    CMMTLComputePipelineState * _cmComputePipelineState;
    <MTLComputeCommandEncoder> * _computeEncoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long dispatchType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)endEncoding;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLCommandBuffer:(id)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;

@end
