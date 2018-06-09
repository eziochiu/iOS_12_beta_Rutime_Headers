/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridDataSource : NSObject {
    NSSet * _assetUUIDs;
    <PUSearchGridDataSourceDelegate> * _delegate;
    PHFetchResult * _fetchResult;
    bool  _finished;
    bool  _hasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _searchCategories;
    unsigned long long  _taskId;
    NSString * _title;
}

@property (nonatomic, retain) NSSet *assetUUIDs;
@property (nonatomic) <PUSearchGridDataSourceDelegate> *delegate;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic) bool hasPendingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long searchCategories;
@property (nonatomic) unsigned long long taskId;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (void)_updateFetchResult:(id)arg1 taskId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (bool)hasPendingChanges;
- (id)init;
- (bool)isFinished;
- (void)mergePendingChanges;
- (id)queue;
- (unsigned long long)searchCategories;
- (void)setAssetUUIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setHasPendingChanges:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchCategories:(unsigned long long)arg1;
- (void)setTaskId:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)taskId;
- (id)title;
- (void)updateAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)updateFetchResult:(id)arg1 completion:(id /* block */)arg2;

@end
