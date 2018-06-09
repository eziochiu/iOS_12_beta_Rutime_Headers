/* made by EzioChiu.
 */

@protocol CKContactsSearchManagerDelegate <NSObject>

@required

- (void)contactsSearchManager:(CKContactsSearchManager *)arg1 finishedSearchingWithResults:(NSArray *)arg2;
- (NSArray *)conversationCacheForCcontactsSearchManager:(CKContactsSearchManager *)arg1;

@end
