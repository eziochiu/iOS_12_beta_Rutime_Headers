/* made by EzioChiu.
 */

@protocol NCAuxiliaryOptionsSupporting <NSObject>

@required

- (bool)auxiliaryOptionsVisible;
- (unsigned long long)numberOfOptionButtons;
- (NSArray *)optionButtons;
- (NSString *)optionsSummaryText;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setNumberOfOptionButtons:(unsigned long long)arg1;
- (void)setOptionsSummaryText:(NSString *)arg1;

@end
