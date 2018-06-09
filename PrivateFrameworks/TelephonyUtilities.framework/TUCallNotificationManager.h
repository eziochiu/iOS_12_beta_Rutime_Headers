/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallNotificationManager : NSObject {
    NSMutableArray * _deferredNotificationBlocks;
}

@property (nonatomic, retain) NSMutableArray *deferredNotificationBlocks;

- (void).cxx_destruct;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)audioPropertiesChangedForCall:(id)arg1;
- (void)cameraTypeChangedForCall:(id)arg1;
- (void)conferenceParticipantCallsChangedForCallContainer:(id)arg1 conferenceParticipantCalls:(id)arg2;
- (void)connectedChangedForCall:(id)arg1;
- (void)connectingChangedForCall:(id)arg1;
- (void)deferNotificationsUntilAfterPerformingBlock:(id /* block */)arg1;
- (id)deferredNotificationBlocks;
- (void)destinationIDChangedForCall:(id)arg1;
- (void)displayContextChangedForCall:(id)arg1;
- (void)endpointOnCurrentDeviceChangedForCall:(id)arg1;
- (void)faceTimeIDStatusChangedForCall:(id)arg1;
- (void)hardPauseDigitsStateChangedForCall:(id)arg1;
- (void)hasSentInvitationChangedForCall:(id)arg1;
- (void)isEmergencyChangedForCall:(id)arg1;
- (void)isOnHoldChangedForCall:(id)arg1;
- (void)isSendingAudioChangedForCall:(id)arg1;
- (void)isThirdPartyVideoChangedForCall:(id)arg1;
- (void)isUplinkMutedChangedForCall:(id)arg1;
- (void)isUsingBasebandChangedForCall:(id)arg1;
- (void)mediaPropertiesChangedForCall:(id)arg1 remoteAspectRatioDidChange:(bool)arg2 remoteCameraOrientationDidChange:(bool)arg3;
- (void)mediaStalledChangedForCall:(id)arg1;
- (void)modelChangedForCall:(id)arg1;
- (void)needsManualInCallSoundsChangedForCall:(id)arg1;
- (void)postNotificationsForCall:(id)arg1 afterUpdatesInBlock:(id /* block */)arg2;
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2;
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 afterUpdatesInBlock:(id /* block */)arg3;
- (void)postNotificationsForCallContainer:(id)arg1 afterUpdatesInBlock:(id /* block */)arg2;
- (void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)arg1;
- (void)providerContextChangedForCall:(id)arg1;
- (void)remoteAspectRatioChangedForCall:(id)arg1;
- (void)remoteCameraOrientationChangedForCall:(id)arg1;
- (void)remoteParticipantHandlesChangedForCall:(id)arg1;
- (void)remoteScreenAspectRatioChangedForCall:(id)arg1;
- (void)remoteScreenOrientationChangedForCall:(id)arg1;
- (void)remoteUplinkMutedChangedForCall:(id)arg1;
- (void)remoteVideoContentRectChangedForCall:(id)arg1;
- (void)setDeferredNotificationBlocks:(id)arg1;
- (void)shouldSuppressRingtoneChangedForCall:(id)arg1;
- (void)statusChangedForCall:(id)arg1;
- (void)supportsTTYWithVoiceChangedForCall:(id)arg1;
- (void)ttyTypeChangedForCall:(id)arg1;
- (void)videoDegradedChangedForCall:(id)arg1;
- (void)videoPausedChangedForCall:(id)arg1;
- (void)wantsHoldMusicChangedForCall:(id)arg1;

@end
