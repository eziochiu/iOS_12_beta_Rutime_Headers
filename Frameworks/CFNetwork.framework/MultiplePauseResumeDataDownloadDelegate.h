/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    bool  _result;
    long long  _sizeOfEntity;
    long long  _totalBytesWritten;
    NSObject<OS_dispatch_semaphore> * _wait;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (bool)didTestPass;
- (long long)getSizeOfEntity;
- (id)getWaiter;
- (id)init;

@end
