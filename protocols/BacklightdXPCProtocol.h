/* made by EzioChiu.
 */

@protocol BacklightdXPCProtocol <NSObject>

@required

- (void)clientCopyPropertyWithKey:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clientSetPropertyWithKey:(id)arg1 property:(NSArray *)arg2;
- (void)reconnect;
- (void)registerNotificationForProperties:(NSArray *)arg1;

@end
