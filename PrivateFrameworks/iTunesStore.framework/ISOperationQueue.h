/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOperationQueue : NSObject {
    NSOperationQueue * _queue;
}

@property bool adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (bool)adjustsMaxConcurrentOperationCount;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)operationCount;
- (id)operations;
- (void)setAdjustsMaxConcurrentOperationCount:(bool)arg1;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSuspended:(bool)arg1;

@end
