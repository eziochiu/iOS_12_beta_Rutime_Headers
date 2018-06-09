/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 additionalDescription:(id)arg2;
+ (bool)isValidationErrorCode:(long long)arg1;

@end
