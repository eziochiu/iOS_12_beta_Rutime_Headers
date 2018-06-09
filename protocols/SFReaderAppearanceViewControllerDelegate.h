/* made by EzioChiu.
 */

@protocol SFReaderAppearanceViewControllerDelegate <NSObject>

@required

- (void)readerAppearanceViewControllerDidChangeFont:(_SFReaderAppearanceViewController *)arg1;
- (void)readerAppearanceViewControllerDidChangeTheme:(_SFReaderAppearanceViewController *)arg1;
- (void)readerAppearanceViewControllerDidDecreaseTextSize:(_SFReaderAppearanceViewController *)arg1;
- (void)readerAppearanceViewControllerDidIncreaseTextSize:(_SFReaderAppearanceViewController *)arg1;

@end
