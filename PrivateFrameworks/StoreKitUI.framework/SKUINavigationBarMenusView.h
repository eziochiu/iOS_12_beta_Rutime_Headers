/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarMenusView : SKUIViewReuseView {
    SEL  _buttonAction;
    id  _buttonTarget;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSArray * _menuViewElements;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;

+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
+ (void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)layoutSubviews;
- (void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
