/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewControllerSpec : NSObject {
    PUAlbumPickerViewControllerSpec * _albumPickerViewControllerSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _baseInterItemSpacing;
    bool  _canDisplayEditActionsInNavigationBar;
    bool  _canDisplayOptionsInPopover;
    bool  _canDisplaySlideshowButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    PUPhotosPickerViewControllerSpec * _photosPickerViewControllerSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    long long  _sizeSubclass;
    bool  _usesStackPopTransition;
}

@property (nonatomic, readonly) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } baseInterItemSpacing;
@property (nonatomic, readonly) bool canCommitPreview;
@property (nonatomic, readonly) bool canDisplayEditActionsInNavigationBar;
@property (nonatomic, readonly) bool canDisplayOptionsInPopover;
@property (nonatomic, readonly) bool canDisplaySlideshowButton;
@property (nonatomic, readonly) long long cellBannerTextAlignment;
@property (nonatomic, readonly) long long cellFillMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSizeForViewInPopover;
@property (nonatomic, readonly) bool displaysAvalancheStacks;
@property (nonatomic, readonly) long long forceLoadInitialSectionCount;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gridContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionHeaderInsets;
@property (nonatomic, readonly) long long sectionHeaderStyle;
@property (nonatomic, readonly) bool shouldPlaceDeleteInCenterToolbarPosition;
@property (nonatomic, readonly) bool shouldPlaceSelectAllButtonInRightNavigationBar;
@property (nonatomic, readonly) long long sizeSubclass;
@property (nonatomic, readonly) int thumbnailImageFormat;
@property (nonatomic, readonly) bool usesStackPopTransition;
@property (nonatomic, readonly) bool wantsBackButtonTitleForPhotoBrowser;
@property (nonatomic, readonly) bool wantsCustomNavigationTransition;

- (void).cxx_destruct;
- (id)albumPickerViewControllerSpec;
- (struct CGSize { double x1; double x2; })baseInterItemSpacing;
- (bool)canCommitPreview;
- (bool)canDisplayEditActionsInNavigationBar;
- (bool)canDisplayOptionsInPopover;
- (bool)canDisplaySlideshowButton;
- (long long)cellBannerTextAlignment;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (bool)displaysAvalancheStacks;
- (long long)forceLoadInitialSectionCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridContentInsets;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)photosPickerViewControllerSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionHeaderInsets;
- (long long)sectionHeaderStyle;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldPlaceDeleteInCenterToolbarPosition;
- (bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (long long)sizeSubclass;
- (unsigned long long)supportedInterfaceOrientations;
- (int)thumbnailImageFormat;
- (bool)usesStackPopTransition;
- (bool)wantsBackButtonTitleForPhotoBrowser;
- (bool)wantsCustomNavigationTransition;

@end
