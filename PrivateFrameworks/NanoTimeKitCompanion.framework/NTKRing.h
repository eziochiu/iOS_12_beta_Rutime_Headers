/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRing : NSObject {
    double  _backgroundRingAlpha;
    double  _fillFraction;
    double  _radius;
    long long  _ringStyle;
    double  _strokeWidth;
}

@property double backgroundRingAlpha;
@property double fillFraction;
@property double radius;
@property long long ringStyle;
@property double strokeWidth;

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;
+ (id)fillFractionStringForFillFraction:(float)arg1;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;

- (double)_validFillFraction:(double)arg1;
- (double)backgroundRingAlpha;
- (double)fillFraction;
- (void)fillFraction:(double)arg1;
- (id)fillFractionString;
- (id)fillFractionStringWithSymbol;
- (id)init;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2;
- (id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4;
- (double)radius;
- (id)ringImage;
- (long long)ringStyle;
- (void)setBackgroundRingAlpha:(double)arg1;
- (void)setFillFraction:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setRingStyle:(long long)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)strokeWidth;

@end
