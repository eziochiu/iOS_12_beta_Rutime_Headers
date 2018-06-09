/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate> {
    unsigned long long  _activeControllerType;
    HUQuickControlViewController * _alternateViewController;
    HUQuickControlContentCharacteristicWritingUpdateAdapter * _characteristicWritingAdapter;
    <HUQuickControlContentHosting> * _controlHost;
    <HUQuickControlViewControllerCoordinatorDelegate> * _delegate;
    HMHome * _home;
    <HFIconDescriptor> * _iconDescriptor;
    HFItem<NSCopying> * _item;
    HFSimpleItemManager * _itemManager;
    NSString * _primaryStatusText;
    HUQuickControlViewController * _primaryViewController;
    HFItem * _reachabilityItem;
    HFSimpleItemManager * _reachabilityItemManager;
    bool  _reachable;
    NSString * _secondaryStatusText;
    bool  _showIconOffState;
    HFOverrideCharacteristicValueSource * _valueSource;
}

@property (nonatomic, readonly) HUQuickControlViewController *activeController;
@property (nonatomic) unsigned long long activeControllerType;
@property (nonatomic, readonly) NSArray *allControllers;
@property (nonatomic, readonly) HUQuickControlViewController *alternateController;
@property (nonatomic, readonly) HUQuickControlViewController *alternateViewController;
@property (nonatomic, readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (nonatomic) <HUQuickControlContentHosting> *controlHost;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlViewControllerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, readonly) HFSimpleItemManager *itemManager;
@property (nonatomic, copy) NSString *primaryStatusText;
@property (nonatomic, readonly) HUQuickControlViewController *primaryViewController;
@property (nonatomic, readonly) HFItem *reachabilityItem;
@property (nonatomic, readonly) HFSimpleItemManager *reachabilityItemManager;
@property (getter=isReachable, nonatomic, readonly) bool reachable;
@property (nonatomic, copy) NSString *secondaryStatusText;
@property (nonatomic, readonly) bool showIconOffState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFOverrideCharacteristicValueSource *valueSource;

- (void).cxx_destruct;
- (id)_controllerForControllableCharacteristic:(id)arg1;
- (void)_createControlViewControllersForControlItems:(id)arg1;
- (id)_itemToUseForIconAndStatus;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(bool)arg2;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (void)_updateIconDescriptorNotifyingDelegate:(bool)arg1;
- (void)_updateReachabilityStateNotifiyingDelegate:(bool)arg1;
- (void)_updateStatusTextNotifyingDelegate:(bool)arg1;
- (id)activeController;
- (unsigned long long)activeControllerType;
- (id)allControllers;
- (id)alternateController;
- (id)alternateViewController;
- (id)characteristicWritingAdapter;
- (id)controlHost;
- (id)delegate;
- (id)home;
- (id)iconDescriptor;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 delegate:(id)arg4;
- (bool)isReachable;
- (id)item;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)primaryStatusText;
- (id)primaryViewController;
- (void)quickControlViewControllerDidUpdateStatusOverrides:(id)arg1;
- (id)reachabilityItem;
- (id)reachabilityItemManager;
- (id)secondaryStatusText;
- (void)setActiveControllerType:(unsigned long long)arg1;
- (void)setControlHost:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryStatusText:(id)arg1;
- (void)setSecondaryStatusText:(id)arg1;
- (bool)showIconOffState;
- (id)valueSource;
- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;
- (bool)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;
- (id)viewControllerOfType:(unsigned long long)arg1;

@end
