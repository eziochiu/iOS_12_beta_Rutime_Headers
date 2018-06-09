/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _allowsAccountModification;
    bool  _allowsDeletion;
    bool  _allowsExplicitContent;
    bool  _allowsRadioPurchases;
    bool  _allowsStorePurchases;
    NSMutableDictionary * _cachedSettings;
    MCProfileConnection * _connection;
    long long  _maximumMovieRatingForAgeGate;
    long long  _maximumTVShowRatingForAgeGate;
}

@property (nonatomic, readonly) bool allowsAccountModification;
@property (nonatomic, readonly) bool allowsDeletion;
@property (nonatomic, readonly) bool allowsExplicitContent;
@property (nonatomic, readonly) bool allowsRadioPurchases;
@property (nonatomic, readonly) bool allowsStorePurchases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRestrictionsPasscode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long maximumMovieRating;
@property (nonatomic) long long maximumMovieRatingForAgeGate;
@property (nonatomic, readonly) long long maximumTVShowRating;
@property (nonatomic) long long maximumTVShowRatingForAgeGate;
@property (readonly) Class superclass;

+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (bool)_isRunningInStoreDemoMode;
- (void)_updateWithCanPostNotifications:(bool)arg1;
- (bool)allowsAccountModification;
- (bool)allowsDeletion;
- (bool)allowsExplicitContent;
- (bool)allowsRadioPurchases;
- (bool)allowsStorePurchases;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)arg1;
- (bool)hasRestrictionsPasscode;
- (id)init;
- (long long)maximumMovieRating;
- (long long)maximumMovieRatingForAgeGate;
- (long long)maximumTVShowRating;
- (long long)maximumTVShowRatingForAgeGate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setMaximumMovieRatingForAgeGate:(long long)arg1;
- (void)setMaximumTVShowRatingForAgeGate:(long long)arg1;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

@end
