/* made by EzioChiu.
 */

@protocol RPRemoteDisplayXPCClientInterface

@optional

- (void)remoteDisplayChangedDevice:(RPRemoteDisplayDevice *)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayFoundDevice:(RPRemoteDisplayDevice *)arg1;
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg1;
- (void)remoteDisplayLostDevice:(RPRemoteDisplayDevice *)arg1;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)remoteDisplayReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)remoteDisplayReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 sessionID:(NSNumber *)arg4;
- (void)remoteDisplayReceivedRequestID:(void *)arg1 request:(void *)arg2 options:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)remoteDisplayReceivedRequestID:(void *)arg1 request:(void *)arg2 options:(void *)arg3 responseHandler:(void *)arg4 sessionID:(void *)arg5; // needs 5 arg types, found 12: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*, NSNumber *
- (void)remoteDisplaySessionEndedWithID:(NSNumber *)arg1;
- (void)remoteDisplayShowPassword:(NSString *)arg1 flags:(unsigned int)arg2;
- (void)remoteDisplayStartServerSessionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
