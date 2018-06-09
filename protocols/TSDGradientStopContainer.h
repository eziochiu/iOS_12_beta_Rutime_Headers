/* made by EzioChiu.
 */

@protocol TSDGradientStopContainer <NSObject, NSMutableCopying>

@required

- (void)evenlyDistributeStops;
- (TSUColor *)firstColor;
- (NSArray *)gradientStops;
- (void)insertGradientStop:(TSDGradientStop *)arg1;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1 withColor:(TSUColor *)arg2;
- (TSUColor *)lastColor;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)removeStop:(TSDGradientStop *)arg1;
- (TSDGradientStop *)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(TSUColor *)arg2;
- (void)setFirstColor:(TSUColor *)arg1;
- (void)setGradientStops:(NSArray *)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setLastColor:(TSUColor *)arg1;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;

@end
