/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLQuadRenderer : NSObject {
    NSArray * _quads;
}

@property (nonatomic, retain) NSArray *quads;

- (void).cxx_destruct;
- (id)init;
- (id)quads;
- (void)renderForSize:(struct CLKUIQuadSize { int x1; int x2; })arg1;
- (void)setQuads:(id)arg1;

@end
