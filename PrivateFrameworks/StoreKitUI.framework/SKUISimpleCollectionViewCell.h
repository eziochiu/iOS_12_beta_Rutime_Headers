/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISimpleCollectionViewCell : UICollectionViewCell {
    UIView * _contentChildView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
}

@property (nonatomic, retain) UIView *contentChildView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)contentChildView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentChildView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
