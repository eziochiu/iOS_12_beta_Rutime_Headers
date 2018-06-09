/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver> {
    NSString * _clientName;
    int  _clientType;
    long long  _clientVersion;
    long long  _currentInterfaceType;
    MPAVItem * _currentItem;
    bool  _isReloadingWithPlaybackContext;
    MPQueueFeeder * _pendingFailureQueueFeeder;
    MPAVController * _player;
    NSNumber * _tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent * _tracklistSummaryEvent;
    NSMutableDictionary * _uniqueIdentifierToReportingSession;
    NSMutableDictionary * _uniqueIdentifierToSummaryEvent;
}

@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) int clientType;
@property (nonatomic, readonly) long long clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPAVController *player;
@property (readonly) Class superclass;

+ (long long)defaultClientVersion;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (void).cxx_destruct;
- (void)_avControllerBufferingStateDidChangeNotification:(id)arg1;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerItemWillChangeNotification:(id)arg1;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avItemAssetLoadedNotification:(id)arg1;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3;
- (void)_configureBaseEventPropertiesForEvent:(id)arg1;
- (void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2;
- (void)_handleDeallocationForUniqueIdentifier:(id)arg1;
- (void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2;
- (bool)_isAVItemReadyForReportingSessionInitialization:(id)arg1;
- (bool)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_newReportingSession;
- (id)_preparedSummaryEventForAVItem:(id)arg1;
- (id)_reportingSessionForAVItem:(id)arg1;
- (void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2;
- (id)_uniqueIdentifierForAVItem:(id)arg1;
- (id)clientName;
- (int)clientType;
- (long long)clientVersion;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4;
- (id)player;

@end
