/* made by EzioChiu.
 */

@protocol HKDataProviderValue <NSObject>

@required

- (NSAttributedString *)attributedStringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2 valueFont:(UIFont *)arg3 unitFont:(UIFont *)arg4 dateCache:(HKDateCache *)arg5;

@optional

- (NSString *)contextualDescriptionWithDateCache:(HKDateCache *)arg1;
- (NSDate *)date;
- (NSString *)stringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2;

@end
