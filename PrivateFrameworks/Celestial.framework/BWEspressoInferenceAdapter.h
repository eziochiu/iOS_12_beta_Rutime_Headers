/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWEspressoInferenceAdapter : NSObject

+ (void)initialize;

- (unsigned long long)_contextOptionsForExecutionTarget:(int)arg1 priority:(unsigned int)arg2;
- (int)_mostAcceleratedExecutionTargetForPersonSegmentation;
- (int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)arg1;
- (id)inferenceProviderForType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5;

@end
