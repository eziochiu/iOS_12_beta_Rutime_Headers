/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSErrorRecoveryAttempter : NSObject {
    NSArray * _options;
    NSOperationQueue * _recoveryAttemptingQueue;
}

@property (nonatomic, copy) NSArray *options;
@property (nonatomic, retain) NSOperationQueue *recoveryAttemptingQueue;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (id)init;
- (id)options;
- (id)recoveryAttemptingQueue;
- (void)setOptions:(id)arg1;
- (void)setRecoveryAttemptingQueue:(id)arg1;

@end
