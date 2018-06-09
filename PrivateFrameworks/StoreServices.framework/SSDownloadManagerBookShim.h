/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManagerBookShim : SSDownloadManagerAppShim {
    <SSBookDownloadQueue> * _downloadQueue;
}

- (void).cxx_destruct;
- (void)__book_cancelDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__book_dispatchBlock:(id /* block */)arg1 withError:(id)arg2;
- (id)__book_downloadsForStati:(id)arg1 overrideFinished:(bool)arg2 overrideFailed:(bool)arg3;
- (void)__book_filterDownloads:(id)arg1 withResult:(id /* block */)arg2;
- (id)__book_getAllDownloads;
- (void)__book_pauseDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__book_resumeDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__book_sendDownloadsChanged:(id)arg1 filterBooks:(bool)arg2;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (void)_pauseDownloads:(id)arg1 forced:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendDownloadsChanged:(id)arg1;
- (id)bookDownloads;
- (void)cancelDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)initWithManagerOptions:(id)arg1;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)restartDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resumeDownloads:(id)arg1 completionBlock:(id /* block */)arg2;

@end
