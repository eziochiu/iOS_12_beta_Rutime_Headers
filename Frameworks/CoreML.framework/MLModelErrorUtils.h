/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelErrorUtils : NSObject

+ (id)IOErrorWithString:(id)arg1;
+ (id)customLayerErrorWithUnderlyingError:(id)arg1 withString:(id)arg2;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char *)arg3;
+ (id)errorWithCode:(long long)arg1 string:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char *)arg4;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 string:(id)arg3;
+ (id)featureTypeErrorWithString:(id)arg1;
+ (id)genericErrorWithString:(id)arg1;

@end
