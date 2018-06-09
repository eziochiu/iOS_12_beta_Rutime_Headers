/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIModernBarButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __additionalSelectionInsets;
}

@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
