/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadChartsColumnView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSArray * _contentViewControllers;
    long long  _selectedViewControllerIndex;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, copy) NSArray *contentViewControllers;
@property (nonatomic, readonly) UIViewController *selectedViewController;

- (void).cxx_destruct;
- (void)_addSelectedViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)contentViewControllers;
- (void)layoutSubviews;
- (id)selectedViewController;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentViewControllers:(id)arg1;
- (void)setSelectedViewControllerIndex:(long long)arg1;

@end
