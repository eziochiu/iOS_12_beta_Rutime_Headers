/* made by EzioChiu.
 */

@protocol SearchUIDragObject

@required

- (NSString *)dragAppBundleID;
- (NSString *)dragSubtitle;
- (NSString *)dragText;
- (NSString *)dragTitle;
- (NSURL *)dragURL;
- (SFSearchResult *)identifyingResult;
- (bool)isDraggable;
- (bool)isSuggestion;

@end
