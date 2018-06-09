/* made by EzioChiu.
 */

@protocol CFXEffectPickerViewControllerDelegate

@required

- (void)effectPickerViewController:(CFXEffectPickerViewController *)arg1 didPickEffect:(CFXEffect *)arg2;
- (NSString *)selectedFilterIdentifierForEffectPickerViewController:(CFXEffectPickerViewController *)arg1;

@end
