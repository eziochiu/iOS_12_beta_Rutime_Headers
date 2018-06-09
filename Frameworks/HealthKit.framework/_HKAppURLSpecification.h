/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAppURLSpecification : NSObject

+ (bool)isClinicalLoginRedirectURL:(id)arg1;
+ (bool)isClinicalOnboardingURL:(id)arg1;
+ (bool)isViewHealthRecordsURL:(id)arg1;
+ (bool)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
+ (bool)parseClinicalOnboardingURL:(id)arg1 resultHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;

@end
