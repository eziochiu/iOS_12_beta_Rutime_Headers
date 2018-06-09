/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessChargingMonitor : NSObject {
    NSMutableDictionary * _allWirelessChargingPowerSources;
    bool  _anyCharger;
    NSURL * _cacheDirectory;
    NSDictionary * _cachedDisengagementHistory;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _engagementBudgetTime;
    id /* block */  _invalidationHandler;
    SFPowerSource * _mePowerSource;
    SFPowerSourceMonitor * _monitor;
    NSMutableDictionary * _onMatWithMePowerSources;
    id /* block */  _powerSourceChangedHandler;
    id /* block */  _powerSourceFoundHandler;
    id /* block */  _powerSourceLostHandler;
    bool  _updateDisengagementHistory;
    id /* block */  _wirelessPowerSourceChangedHandler;
    id /* block */  _wirelessPowerSourceFoundHandler;
    id /* block */  _wirelessPowerSourceLostHandler;
}

@property (nonatomic, retain) NSMutableDictionary *allWirelessChargingPowerSources;
@property (nonatomic) bool anyCharger;
@property (nonatomic, retain) NSURL *cacheDirectory;
@property (nonatomic, retain) NSDictionary *cachedDisengagementHistory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long engagementBudgetTime;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) SFPowerSource *mePowerSource;
@property (nonatomic, retain) SFPowerSourceMonitor *monitor;
@property (nonatomic, retain) NSMutableDictionary *onMatWithMePowerSources;
@property (nonatomic, copy) id /* block */ powerSourceChangedHandler;
@property (nonatomic, copy) id /* block */ powerSourceFoundHandler;
@property (nonatomic, copy) id /* block */ powerSourceLostHandler;
@property (nonatomic) bool updateDisengagementHistory;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceChangedHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceFoundHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceLostHandler;
@property (nonatomic, readonly, copy) NSDictionary *wirelessPowerSources;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addNewChargingPowerSource:(id)arg1;
- (id)allWirelessChargingPowerSources;
- (bool)anyCharger;
- (id)cacheDirectory;
- (id)cachedDisengagementHistory;
- (void)checkDefaults;
- (void)clearDisengagementHistoryForReason:(id)arg1;
- (id)disengagementHistory;
- (id)dispatchQueue;
- (bool)engagementAdmissionCheckForPowerSource:(id)arg1;
- (long long)engagementBudgetTime;
- (void)evaluatePowerSource:(id)arg1 found:(bool)arg2 changed:(bool)arg3 lost:(bool)arg4 changes:(unsigned int)arg5;
- (id)identifierForPowerSource:(id)arg1;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)mePowerSource;
- (id)monitor;
- (id)onMatWithMePowerSources;
- (id /* block */)powerSourceChangedHandler;
- (id /* block */)powerSourceFoundHandler;
- (bool)powerSourceHasAppleWirelessCharging:(id)arg1;
- (bool)powerSourceHasWirelessCharging:(id)arg1;
- (id /* block */)powerSourceLostHandler;
- (void)removeNoLongerChargingPowerSource:(id)arg1 forKeys:(id)arg2;
- (void)setAllWirelessChargingPowerSources:(id)arg1;
- (void)setAnyCharger:(bool)arg1;
- (void)setCacheDirectory:(id)arg1;
- (void)setCachedDisengagementHistory:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEngagementBudgetTime:(long long)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMePowerSource:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setOnMatWithMePowerSources:(id)arg1;
- (void)setPowerSourceChangedHandler:(id /* block */)arg1;
- (void)setPowerSourceFoundHandler:(id /* block */)arg1;
- (void)setPowerSourceLostHandler:(id /* block */)arg1;
- (void)setUpMonitor;
- (void)setUpdateDisengagementHistory:(bool)arg1;
- (void)setWirelessPowerSourceChangedHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceFoundHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceLostHandler:(id /* block */)arg1;
- (void)storeDisengagementHistoryInCache:(id)arg1;
- (bool)updateDisengagementHistory;
- (void)updateDisengagementHistoryEntryForIdentifier:(id)arg1;
- (void)updateDisengagementHistoryEntryForPowerSource:(id)arg1;
- (void)updateGroupedPowerSources;
- (id /* block */)wirelessPowerSourceChangedHandler;
- (id /* block */)wirelessPowerSourceFoundHandler;
- (id /* block */)wirelessPowerSourceLostHandler;
- (id)wirelessPowerSources;

@end
