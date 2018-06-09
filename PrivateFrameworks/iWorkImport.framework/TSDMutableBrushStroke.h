/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMutableBrushStroke : TSDBrushStroke

@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic, retain) TSUColor *color;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (nonatomic, retain) TSDStrokePattern *pattern;
@property (nonatomic, copy) NSString *strokeName;
@property (nonatomic) double width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end
