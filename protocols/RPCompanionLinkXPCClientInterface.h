/* made by EzioChiu.
 */

@protocol RPCompanionLinkXPCClientInterface

@required

- (void)companionLinkChangedDevice:(RPCompanionLinkDevice *)arg1 changes:(unsigned int)arg2;
- (void)companionLinkFoundDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLocalDeviceUpdated:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLostDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)companionLinkReceivedRequestID:(void *)arg1 request:(void *)arg2 options:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*

@end
