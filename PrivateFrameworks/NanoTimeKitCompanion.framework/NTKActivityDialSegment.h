/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityDialSegment : NSObject {
    double  _alpha;
    CALayer * _arcLayer;
    NTKFaceColorScheme * _colorScheme;
    CALayer * _tickLayer;
    double  _tickRotation;
    double  _tickScale;
}

@property (nonatomic) double alpha;
@property (nonatomic, retain) CALayer *arcLayer;
@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, retain) CALayer *tickLayer;
@property (nonatomic) double tickRotation;
@property (nonatomic) double tickScale;

- (void).cxx_destruct;
- (void)_updateTransform;
- (double)alpha;
- (id)arcLayer;
- (id)colorScheme;
- (id)initWithHourIndex:(long long)arg1;
- (void)setAlpha:(double)arg1;
- (void)setArcLayer:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setTickLayer:(id)arg1;
- (void)setTickRotation:(double)arg1;
- (void)setTickScale:(double)arg1;
- (id)tickLayer;
- (double)tickRotation;
- (double)tickScale;

@end
