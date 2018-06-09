/* made by EzioChiu.
 */

@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate <NSObject>

@required

- (NSString *)discoverabilityHUDColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 descriptionStringForKeyCommand:(id)arg2;
- (NSString *)discoverabilityHUDColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 inputStringForKeyCommand:(id)arg2;
- (NSString *)discoverabilityHUDColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 modifiersStringForKeyCommand:(id)arg2;

@end
