/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNError : NSObject

+ (id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForCancellationOfRequest:(id)arg1;
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForGPURequiredByRequest:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForMissingOptionNamed:(id)arg1;
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedProcessingDevice:(id)arg1;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (void)logInternalError:(id)arg1;

@end
