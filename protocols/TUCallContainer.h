/* made by EzioChiu.
 */

@protocol TUCallContainer <NSObject>

@required

- (TUCall *)activeVideoCall;
- (bool)allCallsAreOfService:(int)arg1;
- (bool)allCallsPassTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (bool)anyCallIsEndpointOnCurrentDevice;
- (bool)anyCallIsHostedOnCurrentDevice;
- (bool)anyCallPassesTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (NSArray *)audioAndVideoCallsWithStatus:(int)arg1;
- (TUCall *)audioOrVideoCallWithStatus:(int)arg1;
- (unsigned long long)callCountOnDefaultPairedDevice;
- (NSArray *)callGroupsOnDefaultPairedDevice;
- (TUCall *)callPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (TUCall *)callWithCallUUID:(NSString *)arg1;
- (TUCall *)callWithStatus:(int)arg1;
- (TUCall *)callWithUniqueProxyIdentifier:(NSString *)arg1;
- (NSArray *)callsHostedElsewhere;
- (NSArray *)callsHostedOrAnEndpointElsewhere;
- (NSArray *)callsOnDefaultPairedDevice;
- (NSArray *)callsPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (NSArray *)callsWithAnEndpointElsewhere;
- (NSArray *)callsWithGroupUUID:(NSUUID *)arg1;
- (NSArray *)callsWithStatus:(int)arg1;
- (NSArray *)conferenceParticipantCalls;
- (unsigned long long)countOfCallsPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (unsigned long long)currentAudioAndVideoCallCount;
- (NSArray *)currentAudioAndVideoCalls;
- (unsigned long long)currentCallCount;
- (NSArray *)currentCallGroups;
- (NSArray *)currentCalls;
- (TUCall *)currentVideoCall;
- (unsigned long long)currentVideoCallCount;
- (NSArray *)currentVideoCalls;
- (TUCall *)displayedCallFromCalls:(NSArray *)arg1;
- (NSArray *)displayedCalls;
- (bool)hasCurrentAudioCalls;
- (bool)hasCurrentCalls;
- (bool)hasCurrentVideoCalls;
- (TUCall *)incomingCall;
- (NSArray *)incomingCalls;
- (TUCall *)incomingVideoCall;
- (TUCall *)videoCallWithStatus:(int)arg1;

@end
