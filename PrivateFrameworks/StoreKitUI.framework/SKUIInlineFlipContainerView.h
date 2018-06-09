/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIInlineFlipContainerView : UIView {
    UIView * _backView;
    UIView * _frontView;
}

- (void).cxx_destruct;
- (void)flipToBackViewWithDuration:(double)arg1 options:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;

@end
