/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TROperation : NSOperation {
    NSError * _error;
    NSDictionary * _result;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    TRSession * _session;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSDictionary *result;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) TRSession *session;

+ (id)userCancelledError;

- (void).cxx_destruct;
- (id)error;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)main;
- (id)result;
- (id)semaphore;
- (id)session;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setSession:(id)arg1;

@end
