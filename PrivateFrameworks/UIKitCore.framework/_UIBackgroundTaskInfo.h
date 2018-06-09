/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackgroundTaskInfo : NSObject {
    int  _count;
    id /* block */  _expireHandler;
    BKSProcessAssertion * _processAssertion;
    unsigned long long  _taskId;
    NSString * _taskName;
}

+ (id)backgroundTaskAssertionQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)fireExpirationHandler;
- (id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(id /* block */)arg3;
- (void)invalidate;

@end
