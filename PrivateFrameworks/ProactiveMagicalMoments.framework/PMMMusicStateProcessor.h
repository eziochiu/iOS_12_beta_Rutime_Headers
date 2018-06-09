/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMMusicStateProcessor : NSObject {
    bool  _inCar;
    PMMMusicContainer * _lastPlayed;
    PMMMusicContainer * _lastPlayedInCar;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool inCar;
@property (nonatomic, retain) PMMMusicContainer *lastPlayed;
@property (nonatomic, retain) PMMMusicContainer *lastPlayedInCar;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void).cxx_destruct;
- (void)_handlePause;
- (void)_handlePlay;
- (id)_init;
- (void)_initNowPlayingPause;
- (void)_initNowPlayingPlay;
- (void)_initStarkConnect;
- (void)_initStarkDisconnect;
- (void)_persist;
- (bool)inCar;
- (id)init;
- (id)lastPlayed;
- (id)lastPlayedInCar;
- (void)lastPlayedInCarWithHandler:(id /* block */)arg1;
- (void)lastPlayedWithHandler:(id /* block */)arg1;
- (id)queue;
- (void)setInCar:(bool)arg1;
- (void)setLastPlayed:(id)arg1;
- (void)setLastPlayedInCar:(id)arg1;
- (void)setQueue:(id)arg1;

@end
