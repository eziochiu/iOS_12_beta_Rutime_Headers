/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration {
    HKQuantitySample * _quantitySample;
    long long  _seriesAnchor;
}

@property (nonatomic, copy) HKQuantitySample *quantitySample;
@property (nonatomic) long long seriesAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantitySample;
- (long long)seriesAnchor;
- (void)setQuantitySample:(id)arg1;
- (void)setSeriesAnchor:(long long)arg1;

@end
