/* made by EzioChiu.
 */

@protocol CIGVRenderer <GVRenderer>

@required

- (int)direction;
- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (bool)drawEdgesFirst;
- (void)drawNode:(GVNode *)arg1;
- (void)flushRender;
- (struct CGSize { double x1; double x2; })separation;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setDirection:(int)arg1;
- (void)setDrawEdgesFirst:(bool)arg1;
- (void)setFileTitle:(NSString *)arg1;
- (void)setFileURL:(NSURL *)arg1;
- (void)setSeparation:(struct CGSize { double x1; double x2; })arg1;

@end
