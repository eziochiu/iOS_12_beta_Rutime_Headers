/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditViewControllerSpec : PUViewControllerSpec

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewViewInsetsLandscape;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewViewInsetsPortrait;
@property (nonatomic, readonly) bool shouldDisplayCompactToolbar;
@property (nonatomic, readonly) bool shouldDisplayExtensionButtonInMainToolbar;
@property (nonatomic, readonly) bool shouldDisplaySecondaryToolButtonsInMainToolbar;
@property (nonatomic, readonly) double toolbarLongSideMargin;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewViewInsetsLandscape;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewViewInsetsPortrait;
- (bool)shouldDisplayCompactToolbar;
- (bool)shouldDisplayExtensionButtonInMainToolbar;
- (bool)shouldDisplaySecondaryToolButtonsInMainToolbar;
- (double)toolbarLongSideMargin;

@end
