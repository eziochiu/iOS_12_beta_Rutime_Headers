/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting> {
    id /* block */  _completionHandler;
    NSProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (id)init;
- (void)performRequestOnOperationQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performRequestWithCompletionHandler:(id /* block */)arg1;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
