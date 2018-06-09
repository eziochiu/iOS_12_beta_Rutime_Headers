/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityOpaqueFocusState : NSObject {
    id  _element;
    bool  _hasBeenReused;
    bool  _hasFocus;
    UIView * _reusableView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sceneRelativeFrame;
}

@property (nonatomic) id element;
@property (nonatomic) bool hasBeenReused;
@property (nonatomic) bool hasFocus;
@property (nonatomic, retain) UIView *reusableView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sceneRelativeFrame;

- (void).cxx_destruct;
- (id)description;
- (id)element;
- (bool)hasBeenReused;
- (bool)hasFocus;
- (id)reusableView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneRelativeFrame;
- (void)setElement:(id)arg1;
- (void)setHasBeenReused:(bool)arg1;
- (void)setHasFocus:(bool)arg1;
- (void)setReusableView:(id)arg1;
- (void)setSceneRelativeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
