/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {
    bool  _alwaysReportFailures;
    NSConditionLock * _doneCondition;
    bool  _shouldRetryRequest;
}

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithAlwaysReportFailures:(bool)arg1;
- (void)setDone:(bool)arg1;
- (bool)shouldRetryRequest;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (bool)waitUntilDoneBeforeDate:(id)arg1;

@end
