/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine> {
    <PXLayoutDataSourceChangeDetails> * _changeDetails;
    <PXLayoutEngineDataSourceSnapshot> * _dataSourceSnapshot;
    <PXLayoutEngineDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalWorkQueue;
    PXLayoutGenerator * _layoutGenerator;
    PXLayoutSnapshot * _layoutSnapshot;
    struct { 
        bool layoutData; 
        bool layoutSnapshot; 
    }  _needsUpdateFlags;
    <PXLayoutItem> * _seedItem;
}

@property (nonatomic, retain) <PXLayoutDataSourceChangeDetails> *changeDetails;
@property (nonatomic, readonly) <PXLayoutEngineDataSourceSnapshot> *dataSourceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXLayoutEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXLayoutGenerator *layoutGenerator;
@property (nonatomic, retain) PXLayoutSnapshot *layoutSnapshot;
@property (nonatomic, readonly) <PXLayoutItem> *seedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_needsUpdate;
- (void)_publishChanges;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateLayoutDataIfNeeded;
- (void)_updateLayoutSnapshotIfNeeded;
- (bool)canComputeLayoutSnapshot;
- (id)changeDetails;
- (id)computeLayoutSnapshot;
- (id)dataSourceSnapshot;
- (id)delegate;
- (id)init;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (void)invalidateLayoutData;
- (void)invalidateLayoutSnapshot;
- (id)layoutGenerator;
- (id)layoutSnapshot;
- (void)performChanges:(id /* block */)arg1;
- (id)performChangesAndWait:(id /* block */)arg1;
- (id)seedItem;
- (void)setChangeDetails:(id)arg1;
- (void)setDataSourceSnapshot:(id)arg1;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutGenerator:(id)arg1;
- (void)setLayoutSnapshot:(id)arg1;
- (void)setSeedItem:(id)arg1;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;

@end