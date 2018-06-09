/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDebugHighlightView : UIView {
    NSString * _caption;
    UIColor * _color;
    bool  _isOval;
}

@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool isOval;

- (id)caption;
- (id)color;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (bool)isOval;
- (void)setCaption:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setIsOval:(bool)arg1;

@end
