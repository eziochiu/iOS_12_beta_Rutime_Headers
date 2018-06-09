/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetSuggestionItem : HFItem {
    NSString * _builtInActionSetType;
    HMHome * _home;
}

@property (nonatomic, readonly) NSString *builtInActionSetType;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetPowerState:(bool)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(bool)arg1;
- (id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_actionSetBuilderForBuiltInActionSetType:(id)arg1 outDependentServiceTypes:(out id*)arg2;
- (id)_builtInActionSetOfType:(id)arg1;
- (id)_controlItemValueSourceForService:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)builtInActionSetType;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 builtInActionSetType:(id)arg2;

@end
