/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppSettingsFacade : NSObject {
    NSOperation * _currentPresentationOperation;
    NSArray * _decidedApps;
    NSArray * _featuredAdamIDs;
    VSIdentityProvider * _identityProvider;
    VSOptional * _identityProviderID;
    NSArray * _knownAppBundles;
    bool  _needsUpdateApps;
    NSOperationQueue * _privateQueue;
    int  _registrationToken;
    VSRestrictionsCenter * _restrictionsCenter;
    VSPersistentStorage * _storage;
    NSArray * _unredeemedVouchers;
    NSArray * _voucherApps;
}

@property (nonatomic, retain) NSOperation *currentPresentationOperation;
@property (nonatomic, copy) NSArray *decidedApps;
@property (nonatomic, copy) NSArray *featuredAdamIDs;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, copy) VSOptional *identityProviderID;
@property (nonatomic, copy) NSArray *knownAppBundles;
@property (nonatomic) bool needsUpdateApps;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic) int registrationToken;
@property (nonatomic, retain) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic, copy) NSArray *unredeemedVouchers;
@property (nonatomic, copy) NSArray *voucherApps;

- (void).cxx_destruct;
- (id)_fetchOperationForAdamIDs:(id)arg1;
- (void)_setNeedsUpdateApps;
- (void)_updateApps;
- (id)autorelease;
- (id)currentPresentationOperation;
- (void)dealloc;
- (id)decidedApps;
- (id)featuredAdamIDs;
- (id)identityProvider;
- (id)identityProviderID;
- (id)init;
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2;
- (id)knownAppBundles;
- (bool)needsUpdateApps;
- (id)privateQueue;
- (int)registrationToken;
- (oneway void)release;
- (id)restrictionsCenter;
- (id)retain;
- (void)setCurrentPresentationOperation:(id)arg1;
- (void)setDecidedApps:(id)arg1;
- (void)setFeaturedAdamIDs:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setKnownAppBundles:(id)arg1;
- (void)setNeedsUpdateApps:(bool)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRegistrationToken:(int)arg1;
- (void)setRestrictionsCenter:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setUnredeemedVouchers:(id)arg1;
- (void)setVoucherApps:(id)arg1;
- (id)storage;
- (id)unredeemedVouchers;
- (id)voucherApps;

@end
