/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSystemAppProxy : FBSServiceFacilityClient {
    FBSProcessHandle * _processHandle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleConnect:(id)arg1;
- (void)_sendMessageType:(long long)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(bool)arg4;
- (id)badgeValueForBundleID:(id)arg1;
- (bool)canActivateApplication:(id)arg1 reason:(out long long*)arg2;
- (void)checkInUIApplication;
- (id)clientCallbackQueue;
- (void)dataResetWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllSnapshotsForApplication:(id)arg1;
- (void)fireCompletion:(id /* block */)arg1 error:(id)arg2;
- (void)fireCompletion:(id /* block */)arg1 openAppErrorCode:(long long)arg2;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)init;
- (bool)isPasscodeLockedOrBlocked;
- (void)openApplication:(id)arg1 options:(id)arg2 clientHandle:(id)arg3 withResult:(id /* block */)arg4;
- (id)processHandleForApplication:(id)arg1;
- (void)sendActions:(id)arg1 withResult:(id /* block */)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(id /* block */)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (void)suspendCurrentApplication;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;

@end