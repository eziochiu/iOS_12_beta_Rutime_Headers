/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeValueFormatter : NSObject {
    <HKNumberFormatter> * _numberFormatter;
}

- (void).cxx_destruct;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)initWithNumberFormatter:(id)arg1;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
