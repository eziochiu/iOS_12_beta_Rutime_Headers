/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CGRenderer : NSObject <CIGVRenderer> {
    struct CGContext { } * context;
    int  direction;
    bool  drawEdgesFirst;
    bool  drawWithSplines;
    struct CGSize { 
        double width; 
        double height; 
    }  separation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int direction;
@property (readonly) bool drawEdgesFirst;
@property bool drawWithSplines;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGSize { double x1; double x2; } separation;
@property (readonly) Class superclass;

- (struct CGColor { }*)_colorForNodeColor:(int)arg1;
- (void)_drawCubicSpline:(id)arg1;
- (void)_drawNodeBadge:(id)arg1;
- (void)_drawNodeContent:(id)arg1;
- (void)_drawPolyline:(id)arg1;
- (void)dealloc;
- (int)direction;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (bool)drawEdgesFirst;
- (void)drawNode:(id)arg1;
- (bool)drawWithSplines;
- (void)flushRender;
- (id)init;
- (struct CGSize { double x1; double x2; })separation;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setDirection:(int)arg1;
- (void)setDrawEdgesFirst:(bool)arg1;
- (void)setDrawWithSplines:(bool)arg1;
- (void)setFileTitle:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setSeparation:(struct CGSize { double x1; double x2; })arg1;

@end
