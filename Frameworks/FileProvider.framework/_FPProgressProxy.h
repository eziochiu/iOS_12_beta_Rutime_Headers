/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPProgressProxy : NSProgress {
    NSURL * _fileURL;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldStopAccessingURL;
    id  _subscriber;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startTrackingFileURL:(id)arg1;
- (void)stopTrackingIfStarted;

@end
