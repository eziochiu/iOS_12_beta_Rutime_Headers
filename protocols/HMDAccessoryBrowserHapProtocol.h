/* made by EzioChiu.
 */

@protocol HMDAccessoryBrowserHapProtocol

@required

- (void)configureAccessory:(HMDHAPAccessory *)arg1 trackState:(bool)arg2 connectionPriority:(bool)arg3;
- (void)retrieveCurrentStateForIdentifer:(void *)arg1 onQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, bool, unsigned long long, void*
- (void)updateBroadcastKeyForIdentifer:(NSString *)arg1 key:(NSData *)arg2 keyUpdatedStateNumber:(NSNumber *)arg3 keyUpdatedTime:(double)arg4;
- (void)updateStateForIdentifier:(NSString *)arg1 stateNumber:(NSNumber *)arg2;

@end
