/* made by EzioChiu.
 */

@protocol SiriUICardSnippetViewDataSource <NSObject>

@required

- (double)contentHeightForWidth:(double)arg1;
- (NSLocale *)localeForCardSnippetView:(SiriUICardSnippetView *)arg1;
- (SiriUISashItem *)sashItemForCardSnippetView:(SiriUICardSnippetView *)arg1;

@end
