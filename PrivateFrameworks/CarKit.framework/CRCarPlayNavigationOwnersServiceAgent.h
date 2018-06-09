/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayNavigationOwnersServiceAgent : NSObject <CARSessionObserving, CRCarPlayNavigationOwnersService, NSXPCListenerDelegate> {
    bool  _cachedDoWeOwnNavigation;
    NSMutableSet * _owners;
    CARSessionStatus * _sessionStatus;
}

@property (nonatomic) bool cachedDoWeOwnNavigation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *owners;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_doWeHaveOwners;
- (void)_navigationOwnershipChangedFromCar:(id)arg1;
- (void)_removeOwnersForConnection:(id)arg1;
- (void)_updateNavigationStateForRemoval;
- (void)_updateOwnershipToiOS;
- (void)addNavigationOwnerWithIdentifier:(id)arg1;
- (bool)cachedDoWeOwnNavigation;
- (void)fetchNavigationOwnerWithReply:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)owners;
- (void)removeNavigationOwnerWithIdentifier:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (id)sessionStatus;
- (void)setCachedDoWeOwnNavigation:(bool)arg1;
- (void)setOwners:(id)arg1;
- (void)setSessionStatus:(id)arg1;

@end
