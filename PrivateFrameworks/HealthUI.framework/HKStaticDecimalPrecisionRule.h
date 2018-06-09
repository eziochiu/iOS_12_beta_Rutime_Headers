/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule> {
    long long  _decimalPrecision;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long decimalPrecision;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)decimalPrecision;
- (long long)decimalPrecisionForValue:(double)arg1;
- (id)initWithDecimalPrecision:(long long)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;
- (id)numberFormatter;
- (void)setDecimalPrecision:(long long)arg1;

@end
