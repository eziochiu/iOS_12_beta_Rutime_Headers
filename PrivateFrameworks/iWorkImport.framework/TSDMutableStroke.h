/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMutableStroke : TSDStroke

@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic, retain) TSUColor *color;
@property (nonatomic) bool dontClearBackground;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (nonatomic, retain) TSDStrokePattern *pattern;
@property (nonatomic) double width;

+ (id)emptyStroke;
+ (id)stroke;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDontClearBackground:(bool)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end