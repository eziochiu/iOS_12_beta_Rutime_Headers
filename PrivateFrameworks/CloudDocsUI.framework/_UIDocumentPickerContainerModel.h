/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerModel : NSObject {
    int  _sortOrder;
    NSOperationQueue * _thumbnailQueue;
    NSObject<OS_dispatch_queue> * _underlyingQueue;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, readonly) bool afterInitialUpdate;
@property (nonatomic, readonly) NSArray *modelObjects;
@property (nonatomic, readonly, copy) NSArray *pickableTypes;
@property (nonatomic, readonly) unsigned long long pickerMode;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSOperationQueue *thumbnailQueue;
@property (nonatomic, retain) NSMutableArray *updateHandlers;

- (void).cxx_destruct;
- (bool)afterInitialUpdate;
- (void)dealloc;
- (id)displayTitle;
- (id)init;
- (id)modelObjects;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)refreshItem:(id)arg1 thumbnailOnly:(bool)arg2;
- (void)setSortOrder:(int)arg1;
- (void)setThumbnailQueue:(id)arg1;
- (void)setUpdateHandlers:(id)arg1;
- (int)sortOrder;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (id)thumbnailQueue;
- (id)updateHandlers;
- (void)updateSortDescriptors;

@end
