/* made by EzioChiu.
 */

@protocol SSItemLookupRequestDelegate <SSRequestDelegate>

@optional

- (void)itemLookupRequest:(SSItemLookupRequest *)arg1 didFindItems:(NSArray *)arg2;

@end
