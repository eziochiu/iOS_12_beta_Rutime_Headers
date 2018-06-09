/* made by EzioChiu.
 */

@protocol TSWPTextMagnifier <NSObject>

@required

- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)autoscrollWillNotStart;
- (void)beginMagnifyingTarget:(TSWPRep *)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (struct CGPoint { double x1; double x2; })offset;
- (void)postAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTarget:(TSWPRep *)arg1;
- (void)stopMagnifying:(bool)arg1;
- (TSWPRep *)target;
- (struct CGPoint { double x1; double x2; })terminalPoint;
- (bool)terminalPointPlacedCarefully;

@end
