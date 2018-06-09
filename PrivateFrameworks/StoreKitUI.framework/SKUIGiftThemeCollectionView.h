/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftThemeCollectionView : UICollectionView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _visibleBoundsInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } visibleBoundsInsets;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setVisibleBoundsInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })visibleBoundsInsets;

@end
