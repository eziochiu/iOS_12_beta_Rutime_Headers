/* made by EzioChiu.
 */

@protocol SFActivityAdvertiserClient <NSObject>

@required

- (void)activityPayloadForAdvertisementPayload:(void *)arg1 command:(void *)arg2 requestedByDevice:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 11: NSData *, NSString *, SFPeerDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSData *, NSError *, void*
- (void)didSendPayloadForActivityIdentifier:(NSUUID *)arg1 toDevice:(SFPeerDevice *)arg2 error:(NSError *)arg3;
- (void)pairedDevicesChanged:(NSSet *)arg1;

@end
