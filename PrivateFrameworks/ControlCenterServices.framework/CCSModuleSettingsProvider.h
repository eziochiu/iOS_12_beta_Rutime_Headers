/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_source> * _configurationChangedSource;
    NSHashTable * _observers;
    NSArray * _orderedFixedModuleIdentifiers;
    NSArray * _orderedUserEnabledModuleIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _userDisabledModuleIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *orderedFixedModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *orderedUserEnabledModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *userDisabledModuleIdentifiers;

+ (id)_configurationDirectoryURL;
+ (id)_configurationFileURL;
+ (id)_defaultEnabledModuleOrder;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_readSettings;
+ (void)_writeOrderedIdentifiers:(id)arg1 userDisabledIdentifiers:(id)arg2;
+ (void)initialize;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_queue_handleConfigurationFileUpdate;
- (void)_queue_loadSettings;
- (void)_queue_runBlockOnListeners:(id /* block */)arg1;
- (void)_queue_saveSettings;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_startMonitoringConfigurationUpdates;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)orderedFixedModuleIdentifiers;
- (id)orderedUserEnabledModuleIdentifiers;
- (void)removeObserver:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;
- (id)userDisabledModuleIdentifiers;

@end
