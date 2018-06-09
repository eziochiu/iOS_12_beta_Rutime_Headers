/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILinkButton : UIButton {
    long long  _arrowStyle;
}

@property (nonatomic, readonly) long long arrowStyle;

+ (id)buttonWithArrowStyle:(long long)arg1;

- (double)_linkImagePaddingLeft;
- (void)_reloadIcons;
- (long long)arrowStyle;
- (id)initWithArrowStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;

@end
