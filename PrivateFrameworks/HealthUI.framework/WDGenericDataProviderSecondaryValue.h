/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue> {
    NSNumber * _average;
    NSDate * _date;
    NSString * _formatString;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *formatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)contextualDescriptionWithDateCache:(id)arg1;
- (id)date;
- (id)formatString;
- (id)initWithAverage:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFormatString:(id)arg1;

@end
