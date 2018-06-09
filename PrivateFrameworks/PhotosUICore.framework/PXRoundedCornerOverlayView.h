/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRoundedCornerOverlayView : UIImageView {
    double  _cornerRadius;
    unsigned long long  _cornersToRound;
    double  _displayScale;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool image; 
    }  _needsUpdateFlags;
    UIColor * _overlayColor;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) unsigned long long cornersToRound;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIColor *overlayColor;

- (void).cxx_destruct;
- (void)_invalidateImage;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (double)cornerRadius;
- (unsigned long long)cornersToRound;
- (double)displayScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mutableChangeObject;
- (id)overlayColor;
- (void)performChanges:(id /* block */)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setOverlayColor:(id)arg1;

@end
