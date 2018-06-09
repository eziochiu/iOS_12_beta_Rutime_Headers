/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNValidationUtilities : NSObject

+ (bool)_validateFaceObservations:(id)arg1 withMinimumCount:(unsigned long long)arg2 forOptionalRequest:(id)arg3 error:(id*)arg4;
+ (bool)getArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 requiredMinimumCount:(unsigned long long)arg5 allowedMaximumCount:(unsigned long long)arg6 error:(id*)arg7;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5;
+ (bool)getNSUIntegerValue:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5;
+ (bool)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (bool)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (bool)getRequiredRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getRequiredRequestRevision:(unsigned long long*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (id)requiredArrayForKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(id*)arg4;
+ (id)requiredFaceObservationInOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3;
+ (id)requiredInputFacesArrayInOptions:(id)arg1 error:(id*)arg2;
+ (id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)validateArray:(id)arg1 named:(id)arg2 hasElementsOfClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6;
+ (bool)validateClassArray:(id)arg1 named:(id)arg2 hasElementsAncestoredFromClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6;
+ (bool)validateFaceprintedFaceObservation:(id)arg1 error:(id*)arg2;
+ (bool)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(id /* block */)arg3 error:(id*)arg4;
+ (bool)validateOptionalFaceObservations:(id)arg1 error:(id*)arg2;
+ (bool)validateOptionalFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3;
+ (bool)validateRequiredClusterIDs:(id)arg1 error:(id*)arg2;
+ (bool)validateRequiredFaceObservations:(id)arg1 error:(id*)arg2;
+ (bool)validateRequiredFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3;

@end
