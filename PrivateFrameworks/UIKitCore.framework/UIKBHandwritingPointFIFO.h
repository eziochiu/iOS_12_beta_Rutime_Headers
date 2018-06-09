/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBHandwritingPointFIFO : NSObject {
    UIKBHandwritingPointFIFO * _nextFIFO;
}

@property (nonatomic, retain) UIKBHandwritingPointFIFO *nextFIFO;

- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)clear;
- (void)emitPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)nextFIFO;
- (void)setNextFIFO:(id)arg1;

@end
