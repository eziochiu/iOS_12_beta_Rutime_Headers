/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKIcon : HKAnimatableObject {
    double  _alpha;
    UIColor * _color;
    double  _coloration;
    long long  _currentFrameIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstFrameOrigin;
    long long  _frameColumns;
    long long  _frameCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    double  _size;
}

@property (nonatomic) double alpha;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double coloration;
@property (nonatomic) long long currentFrameIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } firstFrameOrigin;
@property (nonatomic) long long frameColumns;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) double size;

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;
- (double)alpha;
- (id)color;
- (double)coloration;
- (long long)currentFrameIndex;
- (struct CGPoint { double x1; double x2; })firstFrameOrigin;
- (long long)frameColumns;
- (long long)frameCount;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)init;
- (bool)isDrawable;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAlpha:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setColoration:(double)arg1;
- (void)setCurrentFrameIndex:(long long)arg1;
- (void)setFirstFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameColumns:(long long)arg1;
- (void)setFrameCount:(long long)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
