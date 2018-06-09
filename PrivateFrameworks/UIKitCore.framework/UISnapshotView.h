/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISnapshotView : UIView <UIStatusBarTinting> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentBeyondBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    unsigned int  _disableEdgeAntialiasing;
    unsigned int  _disableVerticalStretch;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgePadding;
    UIColor * _edgePaddingColor;
    NSMutableArray * _edgePaddingViews;
    UIView * _imageView;
    UIImageView * _shadowView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotRect;
    UIColor * _statusBarTintColor;
}

@property (setter=_setStatusBarTintColor:, nonatomic, retain) UIColor *_statusBarTintColor;
@property (getter=_contentOffset, setter=_setContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (getter=_contentSize, nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEdgeAntialiasingEnabled, nonatomic) bool edgeAntialiasingEnabled;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgePadding;
@property (nonatomic, retain) UIColor *edgePaddingColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *shadowView;
@property (getter=_snapshotRect, setter=_setSnapshotRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotRect;
@property (getter=_snapshotView, nonatomic, readonly) UIView *snapshotView;
@property (readonly) Class superclass;
@property (getter=isVerticalStretchEnabled, nonatomic) bool verticalStretchEnabled;

- (void)_addEdgePaddingViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })_contentOffset;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsCenterForEdgePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_drawEdges:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withContentSize:(struct CGSize { double x1; double x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgePadding;
- (void)_positionImageView;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSnapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setStatusBarTintColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotRect;
- (id)_snapshotView;
- (id)_statusBarTintColor;
- (void)_updateContentsRect;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;
- (void)captureSnapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgePadding;
- (id)edgePaddingColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEdgeAntialiasingEnabled;
- (bool)isVerticalStretchEnabled;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentStretch:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEdgeAntialiasingEnabled:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdgePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdgePaddingColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShadowView:(id)arg1;
- (void)setVerticalStretchEnabled:(bool)arg1;
- (id)shadowView;

@end
