/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabaseBackupActivity : NSObject {
    NSObject<OS_xpc_object> * _activityExecutionCriteria;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _xpcActivityPending;
}

+ (id)sharedActivity;

- (void).cxx_destruct;
- (void)_registerActivity;
- (id)activityCriteria;
- (id)init;
- (void)registerActivityIfNeeded;

@end
