/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate> {
    NSMapTable * _activeDownloadMap;
    NSMapTable * _pendingDownloadMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDownloadDispatcher;

- (void).cxx_destruct;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (id)init;
- (id)startDownloadFromWebView:(id)arg1 type:(long long)arg2 userInitiatedAction:(id)arg3;

@end
