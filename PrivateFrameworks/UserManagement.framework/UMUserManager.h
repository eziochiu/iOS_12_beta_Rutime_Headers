/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement> {
    NSArray * _allUsers;
    bool  _switchIsOccurring;
    <UMUserListUpdateObserver> * _userListUpdateObserver;
}

@property (nonatomic, readonly, copy) UMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoginSession;
@property (nonatomic, readonly) bool isMultiUser;
@property (nonatomic, readonly) unsigned long long maxNumberOfUsers;
@property (readonly) Class superclass;
@property (nonatomic) bool switchIsOccurring;
@property (nonatomic) <UMUserListUpdateObserver> *userListUpdateObserver;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_allUsersDidChange;
- (id)allUsers;
- (bool)canAccessUserProperties;
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentUser;
- (id)currentUserSwitchContext;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)deleteUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)disableUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isLoginSession;
- (bool)isMultiUser;
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)maxNumberOfUsers;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserListUpdateObserver:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)setSwitchIsOccurring:(bool)arg1;
- (void)setUserListUpdateObserver:(id)arg1;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (bool)switchIsOccurring;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (bool)userExists:(id)arg1;
- (void)userInteractionIsEnabled;
- (void)userListDidUpdate;
- (id)userListUpdateObserver;

@end
