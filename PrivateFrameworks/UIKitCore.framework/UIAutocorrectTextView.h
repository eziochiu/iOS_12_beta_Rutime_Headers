/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAutocorrectTextView : UIView {
    bool  m_animating;
    int  m_edgeType;
    bool  m_isLongString;
    NSString * m_string;
    UIFont * m_textFont;
    int  m_type;
}

@property (nonatomic) bool animating;
@property (nonatomic) bool isLongString;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (bool)animating;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;
- (bool)isLongString;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setEdgeType:(int)arg1;
- (void)setIsLongString:(bool)arg1;

@end