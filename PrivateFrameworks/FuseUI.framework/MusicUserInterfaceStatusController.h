/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUserInterfaceStatusController : NSObject <ISURLBagObserver, MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _canShowConnect;
    bool  _canShowRadio;
    bool  _canShowSubscriptionContent;
    bool  _displayingLocalLibrary;
    bool  _hasSuccessfullyLoadedBagOnce;
    unsigned long long  _observersCount;
    RadioAvailabilityController * _radioAvailabilityController;
    MusicStoreBag * _storeBag;
    NSString * _storeFrontID;
    NSArray * _supportedTabIdentifiers;
    NSDictionary * _tabConfigurations;
    long long  _tabState;
}

@property (nonatomic, readonly) bool canShowConnect;
@property (nonatomic, readonly) bool canShowRadio;
@property (nonatomic, readonly) bool canShowSubscriptionContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingLocalLibrary, nonatomic, readonly) bool displayingLocalLibrary;
@property (nonatomic, readonly) bool hasLoadedStoreBagOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RadioAvailabilityController *radioAvailabilityController;
@property (nonatomic, readonly) NSString *storeFrontID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tabState;

+ (id)sharedUserInterfaceStatusController;

- (void).cxx_destruct;
- (id)_calculateCurrentStoreFrontID;
- (id)_defaultTabConfigurations;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleDefaultLibraryDidDhangeNotification:(id)arg1;
- (void)_handleDefaultsDidChangeNotification:(id)arg1;
- (void)_handleRadioAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (bool)_iOSVersions:(id)arg1 traverseCurrentVersionSinceVersion:(id)arg2;
- (bool)_isConnectRestricted;
- (bool)_isMusicSubscriptionServiceRestricted;
- (void)_updateAllowedUserInterfaceComponents;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBag:(id)arg1;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBagDictionary:(id)arg1;
- (void)bagDidChange:(id)arg1;
- (void)beginObservingAllowedUserInterfaceComponents;
- (bool)canShowConnect;
- (bool)canShowRadio;
- (bool)canShowSubscriptionContent;
- (void)dealloc;
- (void)endObservingAllowedUserInterfaceComponents;
- (bool)hasLoadedStoreBagOnce;
- (id)init;
- (bool)isDisplayingLocalLibrary;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)radioAvailabilityController;
- (long long)reasonForWelcomScreenPresentation;
- (id)storeFrontID;
- (id)supportedTabIdentifiersForTraitCollection:(id)arg1;
- (long long)tabState;
- (void)updateWelcomeScreenAcknowledgmentDefaults:(bool)arg1;

@end
