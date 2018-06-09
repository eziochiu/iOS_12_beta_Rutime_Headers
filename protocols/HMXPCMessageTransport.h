/* made by EzioChiu.
 */

@protocol HMXPCMessageTransport <NSObject>

@required

- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4;
- (void)handleMessageWithName:(void *)arg1 messageIdentifier:(void *)arg2 messagePayload:(void *)arg3 target:(void *)arg4 responseHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSUUID *, NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*

@end
