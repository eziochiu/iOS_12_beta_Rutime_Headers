/* made by EzioChiu.
 */

@protocol NSPNetworkAgentDelegate

@required

- (void)receiveAssertionForUUID:(NSUUID *)arg1;
- (void)receiveUnassertionForUUID:(NSUUID *)arg1;

@end
