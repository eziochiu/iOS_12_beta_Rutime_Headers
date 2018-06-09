/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _refreshPeriod;
}

@property (nonatomic, readonly) bool isCurrentUserAdmin;
@property double refreshPeriod;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)_adminStatusForAccountID:(id)arg1;
- (void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2;
- (bool)_statusIsFresh:(id)arg1;
- (void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)getAdminStatusWithOptions:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)init;
- (bool)isCurrentUserAdmin;
- (double)refreshPeriod;
- (void)reset;
- (void)setRefreshPeriod:(double)arg1;

@end
