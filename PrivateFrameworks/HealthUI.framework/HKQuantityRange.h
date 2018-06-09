/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityRange : NSObject {
    HKQuantity * _maximum;
    HKQuantity * _minimum;
}

@property (nonatomic, readonly) HKQuantity *maximum;
@property (nonatomic, readonly) HKQuantity *minimum;

- (void).cxx_destruct;
- (bool)containsQuantityInclusive:(id)arg1;
- (id)init;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2;
- (id)maximum;
- (id)minimum;

@end
