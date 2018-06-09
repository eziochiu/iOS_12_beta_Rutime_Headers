/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver> {
    HFHomePodAlarmItemProvider * _alarmItemProvider;
    NSSet * _itemProviders;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) HFHomePodAlarmItemProvider *alarmItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)itemProviders;
- (id)mediaProfileContainer;
- (id)mobileTimerAdapter;
- (void)mobileTimerAdapter:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;

@end
