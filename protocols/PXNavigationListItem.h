/* made by EzioChiu.
 */

@protocol PXNavigationListItem <NSObject, NSCopying>

@required

- (NSString *)accessoryTitle;
- (PHCollection *)collection;
- (NSString *)identifier;
- (NSString *)imageName;
- (long long)indentationLevel;
- (bool)isExpandable;
- (bool)isExpanded;
- (NSString *)title;
- (NSString *)visualDescription;

@optional

- (const struct __CFString { }*)aggregateDictionaryKey;
- (struct NSObject { Class x1; }*)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1;

@end
