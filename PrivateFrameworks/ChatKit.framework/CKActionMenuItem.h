/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionMenuItem : NSObject {
    SEL  _action;
    bool  _enabled;
    bool  _highlighted;
    UILabel<CKActionMenuItemView> * _label;
    bool  _selected;
    id  _target;
    UIView<CKActionMenuItemView> * _view;
}

@property (nonatomic) SEL action;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UILabel<CKActionMenuItemView> *label;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) id target;
@property (nonatomic, retain) UIView<CKActionMenuItemView> *view;

+ (void)animate:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5;

- (void).cxx_destruct;
- (SEL)action;
- (id)description;
- (id)init;
- (id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)label;
- (void)sendAction;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTarget:(id)arg1;
- (void)setView:(id)arg1;
- (id)target;
- (void)updateForState:(long long)arg1 touchInside:(bool)arg2;
- (id)view;

@end
