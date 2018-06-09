/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLoadingStatusManager : NSObject {
    NSMutableSet * __invalidLoadingStatusItems;
    bool  __isUpdateScheduled;
    NSMutableDictionary * __itemByLoadOperationTrackingID;
    NSMapTable * __loadOperationTrackingIDsByItem;
    NSMapTable * __loadingStatusByItem;
    NSMutableDictionary * __loadingStatusByLoadOperationTrackingID;
    <PXLoadingStatusManagerDelegate> * _delegate;
    struct { 
        bool respondsToDidUpdateLoadingStatusForItem; 
    }  _delegateFlags;
}

@property (nonatomic, readonly) NSMutableSet *_invalidLoadingStatusItems;
@property (setter=_setUpdateScheduled:, nonatomic) bool _isUpdateScheduled;
@property (nonatomic, readonly) NSMutableDictionary *_itemByLoadOperationTrackingID;
@property (nonatomic, readonly) NSMapTable *_loadOperationTrackingIDsByItem;
@property (nonatomic, readonly) NSMapTable *_loadingStatusByItem;
@property (nonatomic, readonly) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;
@property (nonatomic) <PXLoadingStatusManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_invalidLoadingStatusItems;
- (void)_invalidateLoadingStatusForItem:(id)arg1;
- (bool)_isUpdateScheduled;
- (id)_itemByLoadOperationTrackingID;
- (id)_loadOperationTrackingIDsByItem;
- (id)_loadingStatusByItem;
- (id)_loadingStatusByLoadOperationTrackingID;
- (bool)_needsUpdate;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)arg1;
- (void)_setLoadingStatus:(id)arg1 forItem:(id)arg2;
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(struct NSString { Class x1; }*)arg2;
- (void)_setNeedsUpdate;
- (void)_setUpdateScheduled:(bool)arg1;
- (void)_updateIfNeeded;
- (void)_updateLoadingStatusForItem:(id)arg1;
- (void)_updateLoadingStatusForItemIfNeeded:(id)arg1;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_updateNowIfNeeded;
- (id)delegate;
- (void)didCancelLoadOperationWithTrackingID:(struct NSString { Class x1; }*)arg1;
- (void)didCompleteLoadOperationWithTrackingID:(struct NSString { Class x1; }*)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)didUpdateLoadOperationWithTrackingID:(struct NSString { Class x1; }*)arg1 withProgress:(double)arg2;
- (id)init;
- (id)loadingStatusForItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct NSString { Class x1; }*)willBeginLoadOperationWithItem:(id)arg1;

@end
