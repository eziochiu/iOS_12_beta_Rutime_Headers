/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkOperation : FCOperation

@property (nonatomic, readonly) double preferredTimeoutIntervalForRequest;

+ (bool)isNetworkOperationThrottlingEnabled;

- (bool)_canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (unsigned long long)maxRetries;
- (double)preferredTimeoutIntervalForRequest;
- (bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2;

@end
