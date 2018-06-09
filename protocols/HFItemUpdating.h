/* made by EzioChiu.
 */

@protocol HFItemUpdating <NSObject>

@required

- (NSSet *)childItemsForItem:(HFItem *)arg1;
- (NAFuture *)performItemUpdateRequest:(HFItemUpdateRequest *)arg1;

@end
