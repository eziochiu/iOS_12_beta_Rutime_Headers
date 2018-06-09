/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomePodAlarmItemProvider : HFItemProvider {
    NSMutableDictionary * _alarmIDToItemMap;
    NSMutableSet * _alarmItems;
    <HFHomePodAlarmItemProviderDelegate> * _delegate;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HFAccessorySettingMobileTimerAdapter * _mobileTimerAdapter;
}

@property (nonatomic, readonly) NSMutableDictionary *alarmIDToItemMap;
@property (nonatomic, readonly) NSMutableSet *alarmItems;
@property (nonatomic) <HFHomePodAlarmItemProviderDelegate> *delegate;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;

- (void).cxx_destruct;
- (id)alarmIDToItemMap;
- (id)alarmItems;
- (id)delegate;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)items;
- (id)mediaProfileContainer;
- (id)mobileTimerAdapter;
- (id)reloadItems;
- (void)setDelegate:(id)arg1;

@end
