/* made by EzioChiu.
 */

@protocol CXProviderHostProtocol <NSObject>

@required

- (oneway void)actionCompleted:(CXAction *)arg1;
- (oneway void)registerWithConfiguration:(CXProviderConfiguration *)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(NSUUID *)arg1;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 changedFrequencyData:(NSData *)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 crossDeviceIdentifier:(NSString *)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 endedAtDate:(NSDate *)arg2 privateReason:(long long)arg3 failureContext:(CXCallFailureContext *)arg4;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 updated:(CXCallUpdate *)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(void *)arg1 update:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, CXCallUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 connectedAtDate:(NSDate *)arg2;
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 sentInvitationAtDate:(NSDate *)arg2;
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 startedConnectingAtDate:(NSDate *)arg2;
- (oneway void)requestTransaction:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
