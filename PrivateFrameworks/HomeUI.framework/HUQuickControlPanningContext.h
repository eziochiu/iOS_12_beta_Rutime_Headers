/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPanningContext : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _controlFrame;
    double  _initialSliderValue;
    bool  _requiresSomeMovementBeforeActivation;
    double  _verticalDragCoefficient;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } controlFrame;
@property (nonatomic) double initialSliderValue;
@property (nonatomic) bool requiresSomeMovementBeforeActivation;
@property (nonatomic) double verticalDragCoefficient;

- (void)assertConfigurationIsValid;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })controlFrame;
- (id)init;
- (double)initialSliderValue;
- (bool)requiresSomeMovementBeforeActivation;
- (void)setControlFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialSliderValue:(double)arg1;
- (void)setRequiresSomeMovementBeforeActivation:(bool)arg1;
- (void)setVerticalDragCoefficient:(double)arg1;
- (double)verticalDragCoefficient;

@end