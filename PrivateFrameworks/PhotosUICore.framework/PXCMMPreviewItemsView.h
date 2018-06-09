/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewItemsView : UIView <UICollectionViewDataSource> {
    UIColor * _cellBorderColor;
    double  _cellBorderWidth;
    UICollectionView * _collectionView;
    unsigned long long  _imageRequestGeneration;
    PXCMMPreviewItemMediaProvider * _mediaProvider;
    bool  _needToLoadImages;
    NSMutableArray * _previewImages;
    NSArray * _previewItems;
}

@property (nonatomic, copy) UIColor *cellBorderColor;
@property (nonatomic) double cellBorderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (bool)_canLoadImages;
- (void)_loadImages;
- (void)_loadImagesIfNeeded;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 imageRequestGeneration:(unsigned long long)arg3;
- (id)cellBorderColor;
- (double)cellBorderWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCellBorderColor:(id)arg1;
- (void)setCellBorderWidth:(double)arg1;
- (void)setPreviewItems:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end