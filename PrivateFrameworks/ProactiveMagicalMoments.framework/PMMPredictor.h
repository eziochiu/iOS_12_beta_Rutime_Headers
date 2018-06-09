/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMPredictor : NSObject <CXCallObserverDelegate, PMMDataProtectionMonitorDelegate> {
    bool  _callInProgress;
    CXCallObserver * _callObserver;
    PMMTelephonyConnection * _ctConnection;
    PMMDataProtectionMonitor * _dataProtectionMonitor;
    long long  _dataProtectionStatus;
    NSDate * _dateOfLastNowPlayingEvent;
    PMMAudioDisconnectListener * _disconnectListener;
    long long  _encryptedDataAvailability;
    PETScalarEventTracker * _heroAppSuggestion;
    PETScalarEventTracker * _mmAppSuggestion;
    NSString * _mostRecentNowPlayingApp;
    RTPredictedApplication * _mostRecentPrediction;
    PMMMusicStateProcessor * _musicStateProcessor;
    PMMAppsSettingsMonitor * _myAppsSettingsMonitor;
    NSObject<OS_dispatch_queue> * _nowPlayingStatusQueue;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    bool  _unlockedSinceBoot;
}

@property (nonatomic, retain) PMMTelephonyConnection *ctConnection;
@property (nonatomic, retain) PMMDataProtectionMonitor *dataProtectionMonitor;
@property (nonatomic) long long dataProtectionStatus;
@property (nonatomic, retain) NSDate *dateOfLastNowPlayingEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PMMAudioDisconnectListener *disconnectListener;
@property (nonatomic) long long encryptedDataAvailability;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PETScalarEventTracker *heroAppSuggestion;
@property (nonatomic, retain) PETScalarEventTracker *mmAppSuggestion;
@property (nonatomic, retain) NSString *mostRecentNowPlayingApp;
@property (nonatomic, retain) RTPredictedApplication *mostRecentPrediction;
@property (nonatomic, retain) PMMMusicStateProcessor *musicStateProcessor;
@property (nonatomic, retain) PMMAppsSettingsMonitor *myAppsSettingsMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nowPlayingStatusQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RTRoutineManager *routineManager;
@property (readonly) Class superclass;
@property (nonatomic) bool unlockedSinceBoot;

+ (bool)_predictionIsAudio:(id)arg1;
+ (bool)_predictionPopulatesContinuity:(id)arg1;
+ (bool)_predictionPopulatesNowPlaying:(id)arg1;
+ (bool)_predictionPopulatesSpringboard:(id)arg1;
+ (bool)_predictionPopulatesStark:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearAllRecommendations;
- (void)_handleNowPlayingInfoDidChange;
- (void)_notifyAppPredictionAboutMMUpdate:(id)arg1;
- (void)_publishPredictionWithPredictedApplication:(id)arg1;
- (bool)_recommendingAudioWhileAlreadyPlaying:(id)arg1;
- (void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)ctConnection;
- (id)dataProtectionMonitor;
- (void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2;
- (void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2;
- (void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(bool)arg2;
- (long long)dataProtectionStatus;
- (id)dateOfLastNowPlayingEvent;
- (id)disconnectListener;
- (long long)encryptedDataAvailability;
- (id)expirationForReason:(long long)arg1;
- (void)fetchMediaRemoteNowPlayingApplicationBundleId:(id /* block */)arg1;
- (void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(id /* block */)arg1;
- (void)handleNowPlayingInfoDidChange;
- (void)handlePredictedApplications:(id)arg1 error:(id)arg2;
- (id)heroAppSuggestion;
- (id)init;
- (id)metadataForPredictionApplication:(id)arg1;
- (id)mmAppSuggestion;
- (id)mostRecentNowPlayingApp;
- (id)mostRecentPrediction;
- (id)musicStateProcessor;
- (id)myAppsSettingsMonitor;
- (id)nowPlayingStatusQueue;
- (id)queue;
- (id)routineManager;
- (long long)rtReasonToDECReason:(long long)arg1;
- (long long)rtReasonToMMReason:(long long)arg1;
- (void)setCtConnection:(id)arg1;
- (void)setDataProtectionMonitor:(id)arg1;
- (void)setDataProtectionStatus:(long long)arg1;
- (void)setDateOfLastNowPlayingEvent:(id)arg1;
- (void)setDisconnectListener:(id)arg1;
- (void)setEncryptedDataAvailability:(long long)arg1;
- (void)setHeroAppSuggestion:(id)arg1;
- (void)setMmAppSuggestion:(id)arg1;
- (void)setMostRecentNowPlayingApp:(id)arg1;
- (void)setMostRecentPrediction:(id)arg1;
- (void)setMusicStateProcessor:(id)arg1;
- (void)setMyAppsSettingsMonitor:(id)arg1;
- (void)setNowPlayingStatusQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRoutineManager:(id)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (bool)unlockedSinceBoot;

@end
