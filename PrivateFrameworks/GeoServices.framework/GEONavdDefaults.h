/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdDefaults : NSObject

@property (nonatomic, readonly) unsigned long long accessValueThresholdToUpdateCacheEntries;
@property (nonatomic, readonly) double ageForRefresh;
@property (nonatomic, readonly) double automaticTrafficIncidentRerouteDelay;
@property (nonatomic, readonly) double averageWalkingSpeed;
@property (nonatomic, readonly) double defaultExpirationOffset;
@property (nonatomic, readonly) double exitRegionSize;
@property (nonatomic, readonly) double extraLocationWaitTimeInterval;
@property (nonatomic, readonly) double fastWalkingSpeed;
@property (nonatomic, readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds;
@property (nonatomic, readonly) double hypothesisShouldPersistThresholdInSeconds;
@property (nonatomic, readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue;
@property (nonatomic, readonly) double locationFreshnessThreshold;
@property (nonatomic, readonly) double locationReuseThreshold;
@property (nonatomic, readonly) double locationUpdateTimerInterval;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyForWalking;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving;
@property (nonatomic, readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking;
@property (nonatomic, readonly) double maxDistanceFromOriginToSuppressReroute;
@property (nonatomic, readonly) unsigned long long maxRandomJitterForHypothesisWakeup;
@property (nonatomic, readonly) long long maximumNumberOfDestinationsToMonitor;
@property (nonatomic, readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
@property (nonatomic, readonly) unsigned long long maximumNumberOfLeechedLocations;
@property (nonatomic, readonly) unsigned long long maximumNumberOfProcessingLoopRepeats;
@property (nonatomic, readonly) double maximumRefreshIntervalLeeway;
@property (nonatomic, readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
@property (nonatomic, readonly) unsigned long long maximumTraceFileCount;
@property (nonatomic, readonly) double maximumUserRoutingPreferencesAge;
@property (nonatomic, readonly) unsigned long long minRandomJitterForHypothesisWakeup;
@property (nonatomic, readonly) double minimumDistanceToCompareAgainstLocationAccuracy;
@property (nonatomic, readonly) double minimumDistanceToGetLocationUpdatesInMeters;
@property (nonatomic, readonly) double minimumExpirationOffset;
@property (nonatomic, readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
@property (nonatomic, readonly) double minimumTimerTimeStampFudge;
@property (nonatomic, readonly) double pendingStopTimeToLive;
@property (nonatomic, readonly) double predictionsWatchdogInterval;
@property (nonatomic, readonly) unsigned long long refreshEquationHighestFrequency;
@property (nonatomic, readonly) unsigned long long refreshEquationLowestFrequency;
@property (nonatomic, readonly) unsigned long long refreshEquationLowestFrequencyTransit;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffBase;
@property (nonatomic, readonly) double refreshTimeIntervalBackoffMax;
@property (nonatomic, readonly) double refreshTimeIntervalToUseIfError;
@property (nonatomic, readonly) bool shouldAutomaticallyRerouteTrafficIncidents;
@property (nonatomic, readonly) bool shouldLazyLoadRoutes;
@property (nonatomic, readonly) bool shouldPreloadSubscriptions;
@property (nonatomic, readonly) bool shouldRequestInlineShields;
@property (nonatomic, readonly) bool shouldRequestLaneGuidance;
@property (nonatomic, readonly) bool shouldRunNavigationInDaemon;
@property (nonatomic, readonly) bool shouldShowServiceErrorAlert;
@property (nonatomic, readonly) bool shouldUseGuidanceEventManager;
@property (nonatomic, readonly) bool shouldUseServerSideETAs;
@property (nonatomic, readonly) double slowWalkingSpeed;
@property (nonatomic, readonly) double staleLocationUseTimerInterval;
@property (nonatomic, readonly) bool transitTTLSupported;
@property (nonatomic, readonly) double updateTimeout;
@property (nonatomic, readonly) bool useConservativeDepartureForRefreshTimer;

+ (id)sharedInstance;

- (unsigned long long)accessValueThresholdToUpdateCacheEntries;
- (double)ageForRefresh;
- (double)automaticTrafficIncidentRerouteDelay;
- (double)averageWalkingSpeed;
- (double)defaultExpirationOffset;
- (double)exitRegionSize;
- (double)extraLocationWaitTimeInterval;
- (double)fastWalkingSpeed;
- (double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
- (double)hypothesisResponseStaleToRefreshThresholdInSeconds;
- (double)hypothesisShouldPersistThresholdInSeconds;
- (unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
- (unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
- (double)locationFreshnessThreshold;
- (double)locationReuseThreshold;
- (double)locationUpdateTimerInterval;
- (double)locationUpdatesDesiredAccuracyForDriving;
- (double)locationUpdatesDesiredAccuracyForWalking;
- (double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
- (double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
- (double)maxDistanceFromOriginToSuppressReroute;
- (unsigned long long)maxRandomJitterForHypothesisWakeup;
- (long long)maximumNumberOfDestinationsToMonitor;
- (unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
- (unsigned long long)maximumNumberOfLeechedLocations;
- (unsigned long long)maximumNumberOfProcessingLoopRepeats;
- (double)maximumRefreshIntervalLeeway;
- (double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
- (unsigned long long)maximumTraceFileCount;
- (double)maximumUserRoutingPreferencesAge;
- (unsigned long long)minRandomJitterForHypothesisWakeup;
- (double)minimumDistanceToCompareAgainstLocationAccuracy;
- (double)minimumDistanceToGetLocationUpdatesInMeters;
- (double)minimumExpirationOffset;
- (double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
- (double)minimumTimerTimeStampFudge;
- (double)pendingStopTimeToLive;
- (double)predictionsWatchdogInterval;
- (unsigned long long)refreshEquationHighestFrequency;
- (unsigned long long)refreshEquationLowestFrequency;
- (unsigned long long)refreshEquationLowestFrequencyTransit;
- (double)refreshTimeIntervalBackoffBase;
- (double)refreshTimeIntervalBackoffMax;
- (double)refreshTimeIntervalToUseIfError;
- (bool)shouldAutomaticallyRerouteTrafficIncidents;
- (bool)shouldLazyLoadRoutes;
- (bool)shouldPreloadSubscriptions;
- (bool)shouldRequestInlineShields;
- (bool)shouldRequestLaneGuidance;
- (bool)shouldRunNavigationInDaemon;
- (bool)shouldShowServiceErrorAlert;
- (bool)shouldUseGuidanceEventManager;
- (bool)shouldUseServerSideETAs;
- (double)slowWalkingSpeed;
- (double)staleLocationUseTimerInterval;
- (bool)transitTTLSupported;
- (double)updateTimeout;
- (bool)useConservativeDepartureForRefreshTimer;

@end
