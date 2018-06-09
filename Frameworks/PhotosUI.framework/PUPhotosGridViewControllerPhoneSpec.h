/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec

- (id)albumPickerViewControllerSpec;
- (struct CGSize { double x1; double x2; })baseInterItemSpacing;
- (bool)canDisplayOptionsInPopover;
- (bool)canDisplaySlideshowButton;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)forceLoadInitialSectionCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridContentInsets;
- (id)photosPickerViewControllerSpec;
- (bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (int)thumbnailImageFormat;

@end
