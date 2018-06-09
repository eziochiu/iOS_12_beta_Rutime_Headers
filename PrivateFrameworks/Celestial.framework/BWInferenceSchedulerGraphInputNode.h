/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceSchedulerGraphNode> {
    NSSet * _videoPropagatedToStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWInferenceSchedulerInference *inference;
@property (nonatomic, readonly) NSArray *requirementsNeedingPixelBufferPools;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)inference;
- (id)initWithVideoPropagatedToStorage:(id)arg1;
- (int)performOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)prepare;
- (id)requirementsNeedingPixelBufferPools;

@end
