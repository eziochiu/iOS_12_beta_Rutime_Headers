/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricOptInOperation : ISOperation {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _promptUser;
    id /* block */  _resultBlock;
    NSString * _topicName;
    ISURLBag * _urlBag;
    NSString * _userAgent;
}

@property bool promptUser;
@property (copy) id /* block */ resultBlock;
@property (copy) NSString *topicName;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (void)_loadURLBag;
- (id)_newSourceByStartingTimeoutTimer;
- (void)_performOptInDialogMetricsWithResult:(bool)arg1 error:(id)arg2;
- (bool)_performOptInDialogOperationWithError:(id*)arg1;
- (bool)_performPasscodeDialogOperationWithError:(id*)arg1;
- (void)_updateTouchIDSettingsForAccount:(id)arg1;
- (id)init;
- (bool)promptUser;
- (id /* block */)resultBlock;
- (void)run;
- (void)setPromptUser:(bool)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setTopicName:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)topicName;
- (id)userAgent;

@end
