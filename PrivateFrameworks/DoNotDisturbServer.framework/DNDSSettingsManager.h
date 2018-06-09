/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate> {
    <DNDSBackingStore> * _backingStore;
    CNContactStore * _contactStore;
    <DNDSSettingsManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    BBSettingsGateway * _settingsGateway;
    DNDSSyncSettingsProvider * _syncSettingsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSSettingsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastScheduleLastModifiedDate;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addEventListeners;
- (void)_saveScheduleSettings:(id)arg1;
- (id)behaviorSettingsWithError:(id*)arg1;
- (id)delegate;
- (id)initWithBackingStore:(id)arg1 settingsGateway:(id)arg2 contactStore:(id)arg3;
- (id)lastScheduleLastModifiedDate;
- (id)phoneCallBypassSettingsWithError:(id*)arg1;
- (id)scheduleSettingsWithError:(id*)arg1;
- (bool)setBehaviorSettings:(id)arg1 withError:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setPhoneCallBypassSettings:(id)arg1 withError:(id*)arg2;
- (bool)setScheduleSettings:(id)arg1 withError:(id*)arg2;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (id)syncSettingsWithError:(id*)arg1;

@end
