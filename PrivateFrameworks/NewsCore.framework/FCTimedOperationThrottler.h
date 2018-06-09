/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottler, FCOperationThrottlerDelegate> {
    double  _cooldownTime;
    <FCOperationThrottlerDelegate> * _delegate;
    FCOperationThrottler * _operationThrottler;
}

@property double cooldownTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCOperationThrottlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCOperationThrottler *operationThrottler;
@property (readonly) Class superclass;
@property bool suspended;

- (void).cxx_destruct;
- (double)cooldownTime;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)operationThrottler;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (void)setCooldownTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationThrottler:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)arg1;

@end
