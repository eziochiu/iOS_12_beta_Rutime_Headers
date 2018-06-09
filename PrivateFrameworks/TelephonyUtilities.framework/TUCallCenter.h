/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCenter : NSObject <TUCallContainer> {
    TUAudioDeviceController * _audioDeviceController;
    TUCallServicesInterface * _callServicesInterface;
    CNContactStore * _contactStore;
    TUConversationManager * _conversationManager;
    id /* block */  _disconnectCallPreflight;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    TUCallProviderManager * _providerManager;
    NSObject<OS_dispatch_queue> * _queue;
    TURouteController * _routeController;
    TUVideoDeviceController * _videoDeviceController;
}

@property (nonatomic, readonly) TUCall *activeVideoCall;
@property (getter=isAddCallAllowed, nonatomic, readonly) bool addCallAllowed;
@property (getter=isAmbiguous, nonatomic, readonly) bool ambiguous;
@property (nonatomic, readonly) bool anyCallIsEndpointOnCurrentDevice;
@property (nonatomic, readonly) bool anyCallIsHostedOnCurrentDevice;
@property (nonatomic, retain) TUAudioDeviceController *audioDeviceController;
@property (nonatomic, readonly) <TUCallContainerPrivate> *callContainer;
@property (nonatomic, readonly) unsigned long long callCountOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callGroupsOnDefaultPairedDevice;
@property (nonatomic, retain) TUCallServicesInterface *callServicesInterface;
@property (nonatomic, readonly, copy) NSArray *callsHostedElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsHostedOrAnEndpointElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callsWithAnEndpointElsewhere;
@property (nonatomic, readonly) bool canMergeCalls;
@property (nonatomic, readonly, copy) NSArray *conferenceParticipantCalls;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) TUConversationManager *conversationManager;
@property (nonatomic, readonly) unsigned long long currentAudioAndVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentAudioAndVideoCalls;
@property (nonatomic, readonly) unsigned long long currentCallCount;
@property (nonatomic, readonly, copy) NSArray *currentCallGroups;
@property (nonatomic, readonly, copy) NSArray *currentCalls;
@property (nonatomic, readonly) TUCall *currentVideoCall;
@property (nonatomic, readonly) unsigned long long currentVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ disconnectCallPreflight;
@property (nonatomic, readonly, copy) NSArray *displayedCalls;
@property (getter=isEndAndAnswerAllowed, nonatomic, readonly) bool endAndAnswerAllowed;
@property (nonatomic, readonly) bool hasCurrentAudioCalls;
@property (nonatomic, readonly) bool hasCurrentCalls;
@property (nonatomic, readonly) bool hasCurrentVideoCalls;
@property (readonly) unsigned long long hash;
@property (getter=isHoldAndAnswerAllowed, nonatomic, readonly) bool holdAndAnswerAllowed;
@property (nonatomic, readonly) TUCall *incomingCall;
@property (nonatomic, readonly, copy) NSArray *incomingCalls;
@property (nonatomic, readonly) TUCall *incomingVideoCall;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic, retain) TUCallProviderManager *providerManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) TURouteController *routeController;
@property (readonly) Class superclass;
@property (nonatomic, retain) TUVideoDeviceController *videoDeviceController;

+ (id)callCenterWithQueue:(id)arg1;
+ (id)callCenterWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(bool)arg3;
+ (const void*)sharedAddressBook;
+ (id)sharedContactStore;
+ (id)sharedInstance;
+ (id)sharedInstanceWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(bool)arg3;

- (void).cxx_destruct;
- (id)_allCalls;
- (unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2;
- (bool)_canDialWithRequest:(id)arg1 shouldUseRelay:(bool*)arg2;
- (id)_dialWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(bool)arg2;
- (bool)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(bool)arg2 isRelayAllowed:(bool)arg3 isEmergency:(bool)arg4 supportsBasebandCalling:(bool)arg5 shouldUseRelay:(bool*)arg6;
- (void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg1 isRelayCallingSupported:(bool)arg2 isEmergencyCallbackPossible:(bool)arg3;
- (id)activeConversationForCall:(id)arg1;
- (id)activeVideoCall;
- (bool)allCallsAreOfService:(int)arg1;
- (bool)allCallsPassTest:(id /* block */)arg1;
- (void)answerCall:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(bool)arg3;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)answerWithRequest:(id)arg1;
- (bool)anyCallIsEndpointOnCurrentDevice;
- (bool)anyCallIsHostedOnCurrentDevice;
- (bool)anyCallPassesTest:(id /* block */)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)audioDeviceController;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (id)callContainer;
- (unsigned long long)callCountOnDefaultPairedDevice;
- (id)callGroupsOnDefaultPairedDevice;
- (id)callPassingTest:(id /* block */)arg1;
- (id)callPassingTest:(id /* block */)arg1 sortedUsingComparator:(id /* block */)arg2;
- (id)callServicesClientCapabilities;
- (id)callServicesInterface;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callsHostedElsewhere;
- (id)callsHostedOrAnEndpointElsewhere;
- (id)callsOnDefaultPairedDevice;
- (id)callsPassingTest:(id /* block */)arg1;
- (id)callsWithAnEndpointElsewhere;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (bool)canDialWithRequest:(id)arg1;
- (bool)canGroupCall:(id)arg1 withCall:(id)arg2;
- (bool)canMergeCalls;
- (id)conferenceCall;
- (id)conferenceParticipantCalls;
- (id)contactStore;
- (id)conversationManager;
- (unsigned long long)countOfCallsPassingTest:(id /* block */)arg1;
- (unsigned long long)currentAudioAndVideoCallCount;
- (id)currentAudioAndVideoCalls;
- (unsigned long long)currentCallCount;
- (id)currentCallGroups;
- (id)currentCalls;
- (id)currentVideoCall;
- (unsigned long long)currentVideoCallCount;
- (id)currentVideoCalls;
- (void)dealloc;
- (id)debugDescription;
- (id)dialWithRequest:(id)arg1;
- (void)dialWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)disconnectAllCalls;
- (void)disconnectCall:(id)arg1;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (id /* block */)disconnectCallPreflight;
- (void)disconnectCurrentCallAndActivateHeld;
- (id)displayedCall;
- (id)displayedCallFromCalls:(id)arg1;
- (id)displayedCalls;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endActiveOrHeldAndAnswerCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCall:(id)arg1;
- (bool)existingCallsHaveMultipleProviders;
- (id)frontmostAudioOrVideoCall;
- (id)frontmostCall;
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;
- (void)handleActionForWiredHeadsetMiddleButtonLongPress;
- (void)handleActionForWiredHeadsetMiddleButtonPress;
- (bool)hasCurrentAudioCalls;
- (bool)hasCurrentCalls;
- (bool)hasCurrentVideoCalls;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)holdCall:(id)arg1;
- (id)incomingCall;
- (id)incomingCalls;
- (id)incomingVideoCall;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isAddCallAllowed;
- (bool)isAmbiguous;
- (bool)isDirectCallingCurrentlyAvailableForProvider:(id)arg1 isVideo:(bool)arg2;
- (bool)isEndAndAnswerAllowed;
- (bool)isHardPauseAvailable;
- (bool)isHoldAllowed;
- (bool)isHoldAndAnswerAllowed;
- (bool)isMergeable;
- (bool)isRelayCallingSupportedForProvider:(id)arg1 isVideo:(bool)arg2;
- (bool)isSendToVoicemailAllowed;
- (bool)isSwappable;
- (bool)isTakingCallsPrivateAllowed;
- (id)joinConversationWithConversationRequest:(id)arg1;
- (void)joinConversationWithRequest:(id)arg1;
- (void)launchAppForDialRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)launchAppForJoinRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (id)providerManager;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToDestination:(id)arg1;
- (void)pushRelayingCallsToHost;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (id)queue;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (void)reportLocalPreviewStoppedForCall:(id)arg1;
- (void)resumeCall:(id)arg1;
- (id)routeController;
- (void)sendFieldModeDigits:(id)arg1 forProvider:(id)arg2;
- (void)setAudioDeviceController:(id)arg1;
- (void)setCallServicesInterface:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setConversationManager:(id)arg1;
- (void)setDisconnectCallPreflight:(id /* block */)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setProviderManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRouteController:(id)arg1;
- (void)setTTYType:(int)arg1 forCall:(id)arg2;
- (void)setVideoDeviceController:(id)arg1;
- (bool)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1 isVideo:(bool)arg2;
- (void)swapCalls;
- (void)ungroupCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (void)updateCall:(id)arg1 withAnswerRequest:(id)arg2;
- (id)videoCallWithStatus:(int)arg1;
- (id)videoDeviceController;
- (void)willEnterBackgroundForAllCalls;

@end
