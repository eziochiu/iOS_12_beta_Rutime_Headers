/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMImageView : UIView <PXChangeObserver> {
    <PXDisplayAsset> * _asset;
    UIView * _highlightView;
    PXImageRequester * _imageRequester;
    UIImageView * _imageView;
    <PXUIImageProvider> * _mediaProvider;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, retain) <PXUIImageProvider> *mediaProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateContent;
- (void)_updateImageRequester;
- (void)_updateImageView;
- (id)asset;
- (id)imageRequester;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAsset:(id)arg1;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
