/* made by EzioChiu.
 */

@protocol RTIInputSystemSessionProtocol <NSObject>

@required

- (oneway void)beginRemoteTextInputSessionWithID:(NSUUID *)arg1 documentTraits:(RTIDocumentTraits *)arg2 initialDocumentState:(RTIDocumentState *)arg3;
- (oneway void)endRemoteTextInputSessionWithID:(NSUUID *)arg1;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentDidChange:(RTIDocumentState *)arg2;

@optional

- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didChangePause:(bool)arg2 withReason:(NSString *)arg3;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;

@end
