/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKStackingContentView : _MKUIViewControllerRootView {
    NSLayoutConstraint * _bottomConstraint;
    UIView * _bottomView;
    NSLayoutConstraint * _middleConstraint;
    NSLayoutConstraint * _topConstraint;
    UIView * _topView;
}

@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) UIView *bottomView;
@property (nonatomic, retain) UIView *topView;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)bottomView;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setTopView:(id)arg1;
- (id)topView;
- (void)updateConstraints;

@end
