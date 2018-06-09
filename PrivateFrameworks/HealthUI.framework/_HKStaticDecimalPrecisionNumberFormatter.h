/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter> {
    long long  _decimalPrecision;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long decimalPrecision;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)formatterWithDecimalPrecision:(long long)arg1;

- (long long)decimalPrecision;
- (bool)returnsUnitWithValueForDisplay;
- (void)setDecimalPrecision:(long long)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
