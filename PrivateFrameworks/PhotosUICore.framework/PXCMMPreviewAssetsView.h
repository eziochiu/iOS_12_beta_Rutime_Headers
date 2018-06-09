/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewAssetsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    PXUIMediaProvider * _mediaProvider;
    NSArray * _previewAssets;
    UICollectionView * _previewAssetsCollectionView;
    NSMutableDictionary * _previewAssetsToImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, copy) NSArray *previewAssets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadImagesForPreviewAssetsIfNeeded;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (id)mediaProvider;
- (id)previewAssets;
- (void)setMediaProvider:(id)arg1;
- (void)setPreviewAssets:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
