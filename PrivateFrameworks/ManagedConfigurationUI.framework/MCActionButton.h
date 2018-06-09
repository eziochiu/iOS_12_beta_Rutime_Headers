/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCActionButton : UIButton {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _area;
    int  _state;
}

- (void)_animationFinished:(id)arg1;
- (void)_cacheImages;
- (void)_layout;
- (id)_titleForConfigState:(int)arg1;
- (void)_updateButtonImages:(int)arg1 animate:(bool)arg2;
- (id)initWithConfigState:(int)arg1;
- (void)setEnclosingArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setState:(int)arg1;

@end
