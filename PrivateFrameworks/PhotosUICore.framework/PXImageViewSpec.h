/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageViewSpec : PXViewSpec {
    NSArray * _overlaySpecs;
    long long  _roundedCornersMode;
    bool  _shouldEnableFocus;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } floatingContentMotionRotation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } floatingContentMotionTranslation;
@property (nonatomic, readonly) double floatingShadowOpacity;
@property (nonatomic, readonly) double floatingShadowRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } floatingUnfocusedShadowExpansion;
@property (nonatomic, readonly) double floatingUnfocusedShadowOpacity;
@property (nonatomic, readonly) double floatingUnfocusedShadowRadius;
@property (nonatomic, readonly) double floatingUnfocusedShadowVerticalOffset;
@property (nonatomic, readonly) double focusedSizeIncrease;
@property (nonatomic, copy) NSArray *overlaySpecs;
@property (nonatomic) long long roundedCornersMode;
@property (nonatomic) bool shouldEnableFocus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })floatingContentMotionRotation;
- (struct CGPoint { double x1; double x2; })floatingContentMotionTranslation;
- (double)floatingShadowOpacity;
- (double)floatingShadowRadius;
- (struct CGSize { double x1; double x2; })floatingUnfocusedShadowExpansion;
- (double)floatingUnfocusedShadowOpacity;
- (double)floatingUnfocusedShadowRadius;
- (double)floatingUnfocusedShadowVerticalOffset;
- (double)focusedSizeIncrease;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)overlaySpecs;
- (long long)roundedCornersMode;
- (void)setOverlaySpecs:(id)arg1;
- (void)setRoundedCornersMode:(long long)arg1;
- (void)setShouldEnableFocus:(bool)arg1;
- (bool)shouldEnableFocus;

@end
