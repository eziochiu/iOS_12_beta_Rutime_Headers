/* made by EzioChiu.
 */

@protocol PKPassPersonalizationCellDelegate <NSObject>

@required

- (void)personalizationCellDidChangeValue:(PKPassPersonalizationCell *)arg1;
- (bool)personalizationCellShouldBeginEditing:(PKPassPersonalizationCell *)arg1;
- (bool)personalizationCellShouldReturn:(PKPassPersonalizationCell *)arg1;

@end
