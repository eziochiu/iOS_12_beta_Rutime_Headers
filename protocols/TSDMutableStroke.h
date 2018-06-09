/* made by EzioChiu.
 */

@protocol TSDMutableStroke

@required

- (double)actualWidth;
- (int)cap;
- (TSUColor *)color;
- (int)join;
- (double)miterLimit;
- (TSDStrokePattern *)pattern;
- (void)setActualWidth:(double)arg1;
- (void)setCap:(int)arg1;
- (void)setColor:(TSUColor *)arg1;
- (void)setJoin:(int)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPattern:(TSDStrokePattern *)arg1;
- (void)setPatternPropertiesFromStroke:(TSDStroke *)arg1;
- (void)setPropertiesFromStroke:(TSDStroke *)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end