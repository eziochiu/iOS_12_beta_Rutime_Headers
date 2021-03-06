/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentProcessTerminationManager : NSObject <SXWebContentProcessTerminationManager> {
    <SXWebContentErrorReporting> * _errorReporter;
    NSMutableArray * _onRetryBlocks;
    <SXWebContentProcessTerminationPolicyDecider> * _throttler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXWebContentErrorReporting> *errorReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *onRetryBlocks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXWebContentProcessTerminationPolicyDecider> *throttler;

- (void).cxx_destruct;
- (id)errorReporter;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;
- (void)onRetry:(id /* block */)arg1;
- (id)onRetryBlocks;
- (id)throttler;
- (void)webContentProcessTerminated;

@end
