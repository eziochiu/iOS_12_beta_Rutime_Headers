/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMNumberRange : NSObject {
    NSNumber * _maxValue;
    NSNumber * _minValue;
}

@property (nonatomic, readonly) NSNumber *hf_representativeValue;
@property (nonatomic, readonly) NSNumber *maxValue;
@property (nonatomic, readonly) NSNumber *minValue;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)numberRangeWithMaxValue:(id)arg1;
+ (id)numberRangeWithMinValue:(id)arg1;
+ (id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;
- (id)maxValue;
- (id)minValue;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_representativeValue;

@end
