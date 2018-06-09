/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewAnimation : NSObject {
    bool  _animateFromCurrentPosition;
    int  _curve;
    bool  _editing;
    double  _endAlpha;
    double  _endFraction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endRect;
    NSIndexPath * _indexPath;
    bool  _shouldAllowGroupOpacityAfterAnimation;
    bool  _shouldAnimateShadow;
    bool  _shouldClipToBoundsAfterAnimation;
    bool  _shouldDeleteAfterAnimation;
    bool  _shouldResetGroupOpacityAfterAnimation;
    double  _startFraction;
    UIView * _view;
    int  _viewType;
}

@property (nonatomic, readonly) bool animateFromCurrentPosition;
@property (nonatomic, readonly) int curve;
@property (nonatomic, readonly) bool editing;
@property (nonatomic, readonly) double endAlpha;
@property (nonatomic, readonly) double endFraction;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) bool shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) bool shouldAnimateShadow;
@property (nonatomic) bool shouldClipToBoundsAfterAnimation;
@property (nonatomic, readonly) bool shouldDeleteAfterAnimation;
@property (nonatomic) bool shouldResetGroupOpacityAfterAnimation;
@property (nonatomic, readonly) double startFraction;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) int viewType;

- (void).cxx_destruct;
- (bool)animateFromCurrentPosition;
- (int)curve;
- (id)description;
- (bool)editing;
- (double)endAlpha;
- (double)endFraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (id)indexPath;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 endAlpha:(double)arg5 startFraction:(double)arg6 endFraction:(double)arg7 curve:(int)arg8 animateFromCurrentPosition:(bool)arg9 shouldDeleteAfterAnimation:(bool)arg10 editing:(bool)arg11;
- (void)setShouldAllowGroupOpacityAfterAnimation:(bool)arg1;
- (void)setShouldAnimateShadow:(bool)arg1;
- (void)setShouldClipToBoundsAfterAnimation:(bool)arg1;
- (void)setShouldResetGroupOpacityAfterAnimation:(bool)arg1;
- (bool)shouldAllowGroupOpacityAfterAnimation;
- (bool)shouldAnimateShadow;
- (bool)shouldClipToBoundsAfterAnimation;
- (bool)shouldDeleteAfterAnimation;
- (bool)shouldResetGroupOpacityAfterAnimation;
- (double)startFraction;
- (id)view;
- (int)viewType;

@end
