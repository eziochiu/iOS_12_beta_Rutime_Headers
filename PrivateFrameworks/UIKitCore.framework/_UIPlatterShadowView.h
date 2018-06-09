/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPlatterShadowView : UIView {
    bool  _punchOut;
    _UIShapeView * _shadowMaskView;
}

@property (nonatomic) bool punchOut;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, readonly) _UIShapeView *shadowMaskView;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic, retain) UIBezierPath *shadowPath;
@property (nonatomic) double shadowRadius;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithShadowPath:(id)arg1;
- (bool)punchOut;
- (void)setPunchOut:(bool)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowPath:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (id)shadowMaskView;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (id)shadowPath;
- (double)shadowRadius;

@end