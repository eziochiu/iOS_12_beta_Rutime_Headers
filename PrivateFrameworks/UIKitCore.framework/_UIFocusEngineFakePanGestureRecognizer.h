/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusEngineFakePanGestureRecognizer : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    long long  _state;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } digitizerLocation;
@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocity;

- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (struct CGPoint { double x1; double x2; })digitizerLocation;
- (void)setDigitizerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setState:(long long)arg1;
- (void)setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (long long)state;
- (struct CGPoint { double x1; double x2; })velocity;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
