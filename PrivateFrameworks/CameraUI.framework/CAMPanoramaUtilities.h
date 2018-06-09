/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaUtilities : NSObject

+ (struct CGSize { double x1; double x2; })defaultPreviewSize;
+ (struct CGSize { double x1; double x2; })maximumSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })panoramaViewPreviewInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })previewSizeForAvailableWidth:(double)arg1 layoutStyle:(long long)arg2;
+ (struct CGSize { double x1; double x2; })previewViewSizeForAvailableWidth:(double)arg1 layoutStyle:(long long)arg2;
+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;

@end
