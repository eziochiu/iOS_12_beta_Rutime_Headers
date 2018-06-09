/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol> {
    id /* block */  _activationCompletion;
    unsigned short  _activationState;
    NSTimer * _activationTimeout;
    bool  _canBeginActivation;
    <PBBridgeConnectionDelegate> * _delegate;
    id /* block */  _enableSiriCompletion;
    NSString * _internalLastSendMessageID;
    NSString * _languageIdentifer;
    bool  _readyToCreatePasscode;
    NSString * _regionIdentifer;
    id /* block */  _sessionCompletion;
    id /* block */  _siriStateCompletion;
    id /* block */  _updateLanguageCompletion;
    id /* block */  _updateRegionCompletion;
}

@property (nonatomic, copy) id /* block */ activationCompletion;
@property (nonatomic) unsigned short activationState;
@property (nonatomic, retain) NSTimer *activationTimeout;
@property (nonatomic, readonly) bool canBeginActivation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBBridgeConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ enableSiriCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *internalLastSendMessageID;
@property (nonatomic, readonly) NSString *languageIdentifer;
@property (nonatomic, readonly) bool readyToCreatePasscode;
@property (nonatomic, readonly) NSString *regionIdentifer;
@property (nonatomic, copy) id /* block */ sessionCompletion;
@property (nonatomic, copy) id /* block */ siriStateCompletion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateLanguageCompletion;
@property (nonatomic, copy) id /* block */ updateRegionCompletion;

+ (id)licensePathForAppleLanguages:(id)arg1;
+ (id)prepareOfflineTermsResponse:(id)arg1;
+ (id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2;

- (void).cxx_destruct;
- (bool)_getActivationData:(bool)arg1 forRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_recordThatWatchFinishedActivating;
- (bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (id /* block */)activationCompletion;
- (unsigned short)activationState;
- (id)activationTimeout;
- (void)activationTimeout:(id)arg1;
- (void)beganAwaitingAbilityToActivate;
- (bool)canBeginActivation;
- (void)companionBecameAvailableWantsConfirmation:(id)arg1;
- (void)companionDidSendLanguageAndLocale:(id)arg1;
- (void)companionDidSendWirelessCredentials:(id)arg1;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (id)delegate;
- (void)doInitialSyncPrep:(id)arg1;
- (id /* block */)enableSiriCompletion;
- (void)enableSiriForGizmoWithCompletion:(id /* block */)arg1;
- (void)enabledSiri:(id)arg1;
- (void)endSetupTransaction;
- (bool)getActivationDataAndHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)getActivationDataForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)getSessionDataForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSiriStateWithCompletion:(id /* block */)arg1;
- (void)gotSiriState:(id)arg1;
- (void)handleActivationData:(id)arg1;
- (void)handleOfflineTermsRequest:(id)arg1;
- (void)handleWarrantySentinelRequest:(id)arg1;
- (id)init;
- (id)internalLastSendMessageID;
- (void)invalidateTimeoutTimer;
- (id)languageIdentifer;
- (void)popToControllerType:(id)arg1;
- (void)prepareForForcedWatchSU:(id)arg1;
- (void)pushControllerType:(id)arg1;
- (bool)readyToCreatePasscode;
- (void)refreshTimeoutTimer;
- (id)regionIdentifer;
- (void)remoteRequestToKeepAlive:(id)arg1;
- (void)retryActivation:(id)arg1;
- (bool)sendCompanionPerformanceResults;
- (id)serviceIdentifier;
- (id /* block */)sessionCompletion;
- (void)setActivationCompletion:(id /* block */)arg1;
- (void)setActivationState:(unsigned short)arg1;
- (void)setActivationTimeout:(id)arg1;
- (void)setCanBeginActivating:(id)arg1;
- (void)setCompanionLanguage:(id)arg1;
- (void)setCompanionRegion:(id)arg1;
- (void)setCrownOrientationRight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiagnosticsEnabled:(id)arg1;
- (void)setEnableSiriCompletion:(id /* block */)arg1;
- (void)setInternalLastSendMessageID:(id)arg1;
- (void)setLocationEnabled:(id)arg1;
- (void)setPasscodeRestrictions:(id)arg1;
- (void)setSessionCompletion:(id /* block */)arg1;
- (void)setSiriStateCompletion:(id /* block */)arg1;
- (void)setUpdateLanguageCompletion:(id /* block */)arg1;
- (void)setUpdateRegionCompletion:(id /* block */)arg1;
- (void)setupServiceMessageSelectorMappings;
- (void)showLockedOnAnimation:(id)arg1;
- (id /* block */)siriStateCompletion;
- (bool)tellCompanionGizmoBeganActivating;
- (bool)tellCompanionGizmoFailedActivating:(id)arg1;
- (bool)tellCompanionGizmoFinishedActivating;
- (bool)tellCompanionGizmoFinishedActivatingAsDeKOTA;
- (void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1;
- (void)tellCompanionThatGizmoFinishedSettingPasscode:(bool)arg1 isLong:(bool)arg2;
- (void)tellCompanionThatGizmoFinishedUnlockPairing:(bool)arg1;
- (void)tellCompanionThatGizmoStartedUnlockPairing;
- (bool)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)arg1;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (id /* block */)updateLanguageCompletion;
- (bool)updateLanguageIdentifierWithCompletion:(id /* block */)arg1;
- (id /* block */)updateRegionCompletion;
- (bool)updateRegionIdentifierWithCompletion:(id /* block */)arg1;
- (void)updateSynchProgress:(id)arg1;
- (void)waitForDynamicActivationEventPresentation:(id)arg1;
- (void)waitForUserResponseToDynamicEventPresentation:(id)arg1;

@end
