/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartSettingsUtilities : NSObject

+ (id)heartRateSettingsURL;
+ (bool)isHeartRateEnabled;
+ (bool)isTachycardiaDetectionEnabled;
+ (long long)tachycardiaThresholdHeartRate;

@end
