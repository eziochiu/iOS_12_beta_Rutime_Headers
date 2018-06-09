/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface UIScrollTestToBottomParameters : NSObject {
    int  _axis;
    NSString * _currentTest;
    int  _delta;
    CADisplayLink * _displayLink;
    int  _iterations;
    int  _scrollLength;
    float  _startOffset;
}

@property (nonatomic) int axis;
@property (nonatomic, retain) NSString *currentTest;
@property (nonatomic) int delta;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) float endOffset;
@property (nonatomic) int iterations;
@property (nonatomic) int scrollLength;
@property (nonatomic) float startOffset;

- (void).cxx_destruct;
- (int)axis;
- (id)currentTest;
- (void)dealloc;
- (int)delta;
- (id)displayLink;
- (float)endOffset;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6;
- (int)iterations;
- (int)scrollLength;
- (void)setAxis:(int)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setDelta:(int)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIterations:(int)arg1;
- (void)setScrollLength:(int)arg1;
- (void)setStartOffset:(float)arg1;
- (float)startOffset;

@end
