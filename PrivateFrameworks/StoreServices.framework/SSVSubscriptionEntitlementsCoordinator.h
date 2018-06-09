/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {
    SSVSubscriptionEntitlements * _cachedEntitlements;
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)_cachedSubscriptionEntitlements;
- (id)_connection;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:(bool)arg1 error:(id*)arg2;
- (void)_setCachedSubscriptionEntitlements:(id)arg1;
- (void)dealloc;
- (void)getSubscriptionEntitlements:(id /* block */)arg1;
- (void)getSubscriptionEntitlementsIgnoreCaches:(bool)arg1 entitlementsBlock:(id /* block */)arg2;
- (id)init;

@end
