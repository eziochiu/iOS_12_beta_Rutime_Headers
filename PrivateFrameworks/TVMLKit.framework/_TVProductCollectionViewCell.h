/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _activeMargins;
    bool  _marginActive;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _partialMargins;
    UIView * _titleView;
    UIViewController * _viewController;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } partialMargins;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)disableMargins;
- (void)enableWithMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)isShowingTitleView;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })partialMargins;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPartialMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 show:(bool)arg3;
- (void)setViewController:(id)arg1;
- (void)showTitleView:(bool)arg1;
- (id)titleView;
- (id)viewController;

@end
