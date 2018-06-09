/* made by EzioChiu.
 */

@protocol ICSearchIndexableNote <ICSearchIndexable>

@required

- (NSString *)accountName;
- (NSString *)contentInfoText;
- (NSDate *)dateForCurrentSortType;
- (NSString *)folderName;
- (bool)isModernNote;
- (bool)isPasswordProtected;
- (bool)isSharedViaICloud;
- (NSString *)noteAsPlainTextWithoutTitle;
- (NSArray *)searchableContentKeyPaths;
- (NSString *)title;
- (NSString *)trimmedTitle;

@end
