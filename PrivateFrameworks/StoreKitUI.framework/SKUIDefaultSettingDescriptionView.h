/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView {
    bool  _hasDisclosureChevron;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIView * _viewElementView;
    SKUIViewReuseView * _viewReuseView;
}

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_paddingForStyle:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (bool)hasDisclosureChevron;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;

@end
