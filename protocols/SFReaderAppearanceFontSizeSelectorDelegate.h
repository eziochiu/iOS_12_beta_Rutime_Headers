/* made by EzioChiu.
 */

@protocol SFReaderAppearanceFontSizeSelectorDelegate <NSObject>

@required

- (void)readerAppearanceFontSizeDidDecrease:(SFReaderAppearanceFontSizeSelectorTableViewCell *)arg1;
- (void)readerAppearanceFontSizeDidIncrease:(SFReaderAppearanceFontSizeSelectorTableViewCell *)arg1;

@end
