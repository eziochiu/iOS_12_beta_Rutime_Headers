/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSoundSource : NSObject {
    NSMutableArray * _buffers;
    unsigned int  _sourceId;
}

@property (nonatomic, readonly) int completedBufferCount;
@property (nonatomic) double gain;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) int queuedBufferCount;
@property (nonatomic) bool shouldLoop;

+ (id)source;
+ (id)sourceWithBuffer:(id)arg1;

- (void).cxx_destruct;
- (int)completedBufferCount;
- (void)dealloc;
- (id)description;
- (double)gain;
- (id)init;
- (bool)isPlaying;
- (void)pause;
- (bool)play;
- (struct CGPoint { double x1; double x2; })position;
- (void)purgeCompletedBuffers;
- (void)queueBuffer:(id)arg1;
- (int)queuedBufferCount;
- (void)setGain:(double)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldLoop:(bool)arg1;
- (bool)shouldLoop;
- (void)stop;

@end
