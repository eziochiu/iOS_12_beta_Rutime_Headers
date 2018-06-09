/* made by EzioChiu.
 */

@protocol BKEnrollOperationDelegate <BKOperationDelegate>

@optional

- (void)enrollOperation:(BKEnrollOperation *)arg1 failedWithReason:(long long)arg2;
- (void)enrollOperation:(BKEnrollOperation *)arg1 finishedWithIdentity:(BKIdentity *)arg2;
- (void)enrollOperation:(BKEnrollOperation *)arg1 percentCompleted:(long long)arg2;

@end
