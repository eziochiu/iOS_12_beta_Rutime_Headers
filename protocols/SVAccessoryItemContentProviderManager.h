/* made by EzioChiu.
 */

@protocol SVAccessoryItemContentProviderManager <NSObject>

@required

- (void)registerAccessoryItem:(id <SVAccessoryItem>)arg1 withContentProvider:(id <SVAccessoryItemContentProviding>)arg2;

@end
