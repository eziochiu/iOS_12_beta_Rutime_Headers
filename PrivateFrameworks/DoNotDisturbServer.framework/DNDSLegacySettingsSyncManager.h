/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager> {
    NPSDomainAccessor * _accessor;
    NPSManager * _npsManager;
    BBSettingsGateway * _settingsGateway;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (void)_propagateBehaviorOverrides:(id)arg1;
- (void)_propagatePrivilegedSenderTypes:(unsigned long long)arg1;
- (void)_updateEffectiveOverrides;
- (void)_updatePrivilegedSenderTypes;
- (void)dealloc;
- (id)init;
- (void)resume;

@end
