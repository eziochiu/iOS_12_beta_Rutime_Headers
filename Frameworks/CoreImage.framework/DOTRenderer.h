/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface DOTRenderer : NSObject <CIGVRenderer> {
    int  direction;
    bool  drawEdgesFirst;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * file;
    NSString * fileTitle;
    NSURL * fileURL;
    struct CGSize { 
        double width; 
        double height; 
    }  separation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int direction;
@property (readonly) bool drawEdgesFirst;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGSize { double x1; double x2; } separation;
@property (readonly) Class superclass;

- (void)dealloc;
- (int)direction;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (bool)drawEdgesFirst;
- (void)drawNode:(id)arg1;
- (void)flushRender;
- (id)init;
- (struct CGSize { double x1; double x2; })separation;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setDirection:(int)arg1;
- (void)setDrawEdgesFirst:(bool)arg1;
- (void)setFileTitle:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setSeparation:(struct CGSize { double x1; double x2; })arg1;

@end
