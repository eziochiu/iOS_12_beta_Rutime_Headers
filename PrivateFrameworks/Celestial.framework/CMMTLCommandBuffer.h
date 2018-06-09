/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {
    CMMTLCommandQueue * _cmCommandQueue;
    NSMutableString * _cmLabel;
    <MTLCommandBuffer> * _commandBuffer;
    bool  _unretained;
}

@property (readonly) double GPUEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) double kernelEndTime;
@property (readonly) double kernelStartTime;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic) unsigned long long listIndex;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) bool retainedReferences;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

- (void).cxx_destruct;
- (id)commandQueue;
- (void)commit;
- (id)computeCommandEncoder;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLCommandQueue:(id)arg1 unretained:(bool)arg2;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
