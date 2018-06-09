/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

@interface SLGLog : NSObject {
    <SLGLogClientProtocol> * _client;
    NSDateFormatter * _dateFormatter;
    bool  _isEnabled;
    NSNumber * _pid;
    NSString * _processName;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchProcessInfo;
- (id)_serializeObjectAsLogEntry:(id)arg1 tags:(id)arg2 error:(id*)arg3;
- (void)_setClient:(id)arg1;
- (id)_wrapObjectWithEntryMetadata:(id)arg1 tags:(id)arg2;
- (void)beginSession;
- (void)beginSessionWithCompletion:(id /* block */)arg1;
- (void)endSession;
- (void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithClient:(id)arg1 enabled:(bool)arg2;
- (bool)isEnabled;
- (void)log:(id)arg1;
- (void)log:(id)arg1 completion:(id /* block */)arg2;
- (void)log:(id)arg1 tags:(id)arg2;
- (void)log:(id)arg1 tags:(id)arg2 completion:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1;
- (void)logBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)logBlock:(id /* block */)arg1 tags:(id /* block */)arg2;
- (void)logBlock:(id /* block */)arg1 tags:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)reset;
- (void)resetWithCompletion:(id /* block */)arg1;

@end
