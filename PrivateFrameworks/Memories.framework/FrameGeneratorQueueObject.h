/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FrameGeneratorQueueObject : NSObject {
    id /* block */  m_completionBlock;
    NSArray * m_times;
    AVAssetImageGenerator * m_whichInstance;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) AVAssetImageGenerator *generator;
@property (nonatomic, retain) NSArray *times;

+ (id)queueObjectForGenerator:(id)arg1 withTimes:(id)arg2 completionBlock:(id /* block */)arg3;

- (id /* block */)completionBlock;
- (void)dealloc;
- (id)description;
- (id)generator;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setGenerator:(id)arg1;
- (void)setTimes:(id)arg1;
- (id)times;

@end
