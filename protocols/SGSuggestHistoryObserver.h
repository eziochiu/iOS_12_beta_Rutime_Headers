/* made by EzioChiu.
 */

@protocol SGSuggestHistoryObserver <NSObject>

@required

- (void)hashesDidChange;
- (void)processNewConfirmOrRejectEventHashes:(NSSet *)arg1;

@end
