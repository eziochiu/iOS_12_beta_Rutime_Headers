/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpCell : PUPhotosSharingGridCell <PXChangeObserver> {
    UITextField * _debugTextField;
    <PUImportOneUpCellDisplayDelegate> * _displayDelegate;
    PUImportItemViewModel * _importItem;
    bool  _refreshesThumbnailAutomatically;
    long long  _thumbnailRequestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UITextField *debugTextField;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PUImportOneUpCellDisplayDelegate> *displayDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUImportItemViewModel *importItem;
@property (nonatomic) bool refreshesThumbnailAutomatically;
@property (readonly) Class superclass;
@property (nonatomic) long long thumbnailRequestID;

- (void).cxx_destruct;
- (void)_commonPUImportOneUpCellInitialization;
- (void)dealloc;
- (id)debugTextField;
- (id)displayDelegate;
- (id)importItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)refreshThumbnail;
- (bool)refreshesThumbnailAutomatically;
- (void)setDebugTextField:(id)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 isPlaceholder:(bool)arg2;
- (void)setImportItem:(id)arg1;
- (void)setRefreshesThumbnailAutomatically:(bool)arg1;
- (void)setThumbnailRequestID:(long long)arg1;
- (long long)thumbnailRequestID;
- (void)updateBadge;
- (void)updateDebugLabel:(id)arg1;
- (void)updatePhotoViewForImportItem:(id)arg1;
- (void)updateSelectedVisualAppearance;

@end
