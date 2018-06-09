/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDownload : NSObject <WBSFluidProgressStateSource, _WKDownloadDelegate> {
    long long  _bytesExpected;
    unsigned long long  _bytesLoaded;
    <_SFDownloadDelegate> * _delegate;
    _WKDownload * _download;
    unsigned long long  _downloadBackgroundTaskIdentifier;
    NSString * _fileDownloadPath;
    long long  _fileType;
    WBSFluidProgressController * _fluidProgressController;
    WBSFluidProgressState * _fluidProgressState;
    bool  _hasFailed;
    NSURL * _sourceURL;
    double  _timeLastProgressNotificationWasSent;
    _WKUserInitiatedAction * _userInitiatedAction;
    bool  _wasCanceled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileDownloadPath;
@property (nonatomic, readonly) long long fileType;
@property (nonatomic) WBSFluidProgressController *fluidProgressController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _WKUserInitiatedAction *userInitiatedAction;

+ (id)provisionalDownloadWithType:(long long)arg1 userInitiatedAction:(id)arg2;

- (void).cxx_destruct;
- (void)_beginDownloadBackgroundTask;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_endDownloadBackgroundTask;
- (void)cancel;
- (void)clearFluidProgressState;
- (bool)createFluidProgressState;
- (id)delegate;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (id)fileDownloadPath;
- (long long)fileType;
- (id)fluidProgressController;
- (bool)hasFailedURL;
- (id)progressState;
- (bool)removeFromDisk;
- (void)setDelegate:(id)arg1;
- (void)setFluidProgressController:(id)arg1;
- (id)sourceURL;
- (id)userInitiatedAction;

@end
