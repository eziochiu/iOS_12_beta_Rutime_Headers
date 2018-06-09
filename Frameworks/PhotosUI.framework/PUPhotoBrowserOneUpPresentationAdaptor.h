/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate> {
    NSSet * __photoTokensForHiddenAssetReferences;
    bool  __shouldDisableScroll;
    <PUPhotoBrowserZoomTransitionDelegate> * _zoomTransitionDelegate;
    struct { 
        bool respondsToTransitionImageForPhotoToken; 
        bool respondsToWillBeginForOperation; 
        bool respondsToDidFinishForOperation; 
        bool respondsToWillBeginAnimationForOperation; 
        bool respondsToDidFinishAnimationForOperation; 
        bool respondsToShouldHidePhotosTokens; 
        bool respondsToSetVisibilityForPhotoToken; 
    }  _zoomTransitionDelegateFlags;
}

@property (setter=_setPhotoTokensForHiddenAssetReferences:, nonatomic, copy) NSSet *_photoTokensForHiddenAssetReferences;
@property (setter=_setShouldDisableScroll:, nonatomic) bool _shouldDisableScroll;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <PUPhotoBrowserZoomTransitionDelegate> *zoomTransitionDelegate;

- (void).cxx_destruct;
- (id)_photoTokenForAssetReference:(id)arg1;
- (id)_photoTokensForHiddenAssetReferences;
- (void)_setPhotoTokensForHiddenAssetReferences:(id)arg1;
- (void)_setShouldDisableScroll:(bool)arg1;
- (bool)_shouldDisableScroll;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(bool)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)setZoomTransitionDelegate:(id)arg1;
- (id)zoomTransitionDelegate;

@end
