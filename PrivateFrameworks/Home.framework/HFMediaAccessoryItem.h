/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem> {
    <HFHomeKitObject> * _homeKitObject;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) NSSet *accessoriesSupportingSoftwareUpdate;
@property (nonatomic, readonly) NSSet *availableSoftwareUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (void)_decorateServiceLikeItemKeys:(id)arg1;
- (void)_decorateWithMediaSessionKeys:(id)arg1;
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (bool)_isInstallingSoftwareUpdate;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)availableSoftwareUpdates;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createControlItems;
- (id)description;
- (id)homeKitObject;
- (id)iconDescriptor;
- (id)init;
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;
- (bool)isAirPort;
- (bool)isAppleTV;
- (bool)isContainedWithinItemGroup;
- (bool)isContainedWithinMediaSystem;
- (bool)isHomePod;
- (bool)isHomePodAndIsInMediaSystem;
- (bool)isHomePodMediaSystem;
- (bool)isItemGroup;
- (bool)isSiriDisabled;
- (bool)isSpeaker;
- (id)mediaProfileContainer;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)performStandardUpdateWithOptions:(id)arg1;
- (id)room;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)serviceNameComponents;
- (id)services;
- (id)settings;
- (bool)supportsAlarmQuickControls;
- (bool)supportsMediaQuickControls;
- (id)valueSource;

@end
