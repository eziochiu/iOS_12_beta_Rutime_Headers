/* made by EzioChiu.
 */

@protocol CNContactSuggestionViewControllerDataSource <NSObject>

@required

- (NSString *)appName;
- (NSString *)date;
- (NSAttributedString *)formattedSnippet;
- (NSString *)from;
- (NSString *)title;
- (unsigned long long)type;
- (NSURL *)url;

@end
