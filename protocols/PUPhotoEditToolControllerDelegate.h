/* made by EzioChiu.
 */

@protocol PUPhotoEditToolControllerDelegate <NSObject>

@required

- (PHLivePhotoView *)mainLivePhotoView;
- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })toolController:(PUPhotoEditToolController *)arg1 originalPointFromViewPoint:(struct CGPoint { double x1; double x2; })arg2 view:(UIView *)arg3;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })toolController:(PUPhotoEditToolController *)arg1 viewPointFromOriginalPoint:(struct CGPoint { double x1; double x2; })arg2 view:(UIView *)arg3;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidFinishLoadingThumbnails:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerHitEventForwardView:(PUPhotoEditToolController *)arg1;
- (struct { long long x1; float x2; })toolControllerImageModulationOptions:(PUPhotoEditToolController *)arg1;
- (PHLivePhoto *)toolControllerLivePhoto:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalOrientedImageSize:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (NUComposition *)toolControllerRequestComposition:(PUPhotoEditToolController *)arg1;
- (void)toolControllerRequestLivePhoto:(void *)arg1 filters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PUPhotoEditToolController *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHLivePhoto *, void*
- (PLPhotoEditModel *)toolControllerUneditedPhotoEditModel:(PUPhotoEditToolController *)arg1;

@end
