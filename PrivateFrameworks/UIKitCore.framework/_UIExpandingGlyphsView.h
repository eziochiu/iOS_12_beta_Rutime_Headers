/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIExpandingGlyphsView : UIView <CAAnimationDelegate> {
    NSAttributedString * _attributedString;
    double  _baselineOffset;
    id /* block */  _completionBlock;
    bool  _expandsFromLeftToRight;
    bool  _fadesOut;
    NSArray * _imageViews;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    int  _remainingAnimationCount;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expandsFromLeftToRight;
@property (nonatomic) bool fadesOut;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageViews;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicSize;
@property (nonatomic) int remainingAnimationCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateCompletionBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)attributedString;
- (double)baselineOffset;
- (id /* block */)completionBlock;
- (bool)expandsFromLeftToRight;
- (bool)fadesOut;
- (id)imageViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (int)remainingAnimationCount;
- (void)setAttributedString:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setExpandsFromLeftToRight:(bool)arg1;
- (void)setFadesOut:(bool)arg1;
- (void)setImageViews:(id)arg1;
- (void)setIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemainingAnimationCount:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
