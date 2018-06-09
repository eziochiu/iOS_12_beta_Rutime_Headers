/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMutableGradientStop : TSDGradientStop

@property (nonatomic, copy) TSUColor *color;
@property (nonatomic) double fraction;
@property (nonatomic) double inflection;

- (void)setColor:(id)arg1;
- (void)setFraction:(double)arg1;
- (void)setInflection:(double)arg1;

@end
