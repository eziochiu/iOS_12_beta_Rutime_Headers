/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCDetailActionButton : UIButton {
    bool  _disabled;
    NSString * _disabledReason;
}

@property (nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) NSString *disabledReason;

- (void).cxx_destruct;
- (void)_setTitle:(id)arg1;
- (void)_updateColor;
- (bool)disabled;
- (id)disabledReason;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
