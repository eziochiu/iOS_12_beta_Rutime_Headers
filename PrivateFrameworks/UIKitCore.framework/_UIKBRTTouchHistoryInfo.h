/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTTouchHistoryInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _actualLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _errorVector;
    bool  _ignoreForDrift;
    bool  _ignoreTouch;
    bool  _isActive;
    bool  _isLeftHand;
    id  _touchIdentifier;
    double  _touchTime;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } actualLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } errorVector;
@property (nonatomic) bool ignoreForDrift;
@property (nonatomic) bool ignoreTouch;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isLeftHand;
@property (nonatomic, retain) id touchIdentifier;
@property (nonatomic) double touchTime;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })actualLocation;
- (id)description;
- (struct CGPoint { double x1; double x2; })errorVector;
- (bool)ignoreForDrift;
- (bool)ignoreTouch;
- (id)init;
- (bool)isActive;
- (bool)isLeftHand;
- (void)setActualLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setErrorVector:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIgnoreForDrift:(bool)arg1;
- (void)setIgnoreTouch:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsLeftHand:(bool)arg1;
- (void)setTouchIdentifier:(id)arg1;
- (void)setTouchTime:(double)arg1;
- (id)touchIdentifier;
- (double)touchTime;

@end