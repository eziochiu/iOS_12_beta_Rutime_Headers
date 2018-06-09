/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCumulativeQuantitySeriesSample : HKQuantitySample

@property (setter=_setSum:, nonatomic, copy) HKQuantity *sum;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)supportsSecureCoding;

- (void)_setSum:(id)arg1;
- (id)sum;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end
