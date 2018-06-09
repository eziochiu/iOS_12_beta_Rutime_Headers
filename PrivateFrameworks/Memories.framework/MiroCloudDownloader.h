/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroCloudDownloader : NSObject {
    id /* block */  _itemCompletedBlock;
    float  _progress;
    id /* block */  _progressBlock;
    NSMutableArray * _requests;
    double  _totalInitialDownloadSize;
}

@property (readonly) NSObject<OS_dispatch_queue> *cancellationQueueFor26820423;
@property (nonatomic, copy) id /* block */ itemCompletedBlock;
@property (nonatomic, readonly) NSArray *localAssets;
@property (nonatomic, readonly) unsigned long long nonLocalCount;
@property (nonatomic, readonly) float progress;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSMutableArray *requests;
@property (nonatomic) double totalInitialDownloadSize;

+ (id)cloudDownloaderWithAssets:(id)arg1;

- (void).cxx_destruct;
- (void)cancelDownloads;
- (id)cancellationQueueFor26820423;
- (id)initWithAssets:(id)arg1;
- (id /* block */)itemCompletedBlock;
- (id)localAssets;
- (unsigned long long)nonLocalCount;
- (float)progress;
- (id /* block */)progressBlock;
- (id)requests;
- (void)setItemCompletedBlock:(id /* block */)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setRequests:(id)arg1;
- (void)setTotalInitialDownloadSize:(double)arg1;
- (void)startDownloadsWithCompletionHandler:(id /* block */)arg1;
- (double)totalInitialDownloadSize;

@end
