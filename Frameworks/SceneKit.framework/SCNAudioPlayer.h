/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAudioPlayer : NSObject {
    AVAudioNode * _audioNode;
    AVAudioPlayerNode * _audioPlayer;
    SCNAudioSource * _audioSource;
    bool  _completed;
    bool  _customAudioNode;
    struct __C3DNode { } * _nodeRef;
    struct __C3DScene { } * _scene;
    id /* block */  didFinishPlayback;
    id /* block */  willStartPlayback;
}

@property (nonatomic, readonly) AVAudioNode *audioNode;
@property (readonly) AVAudioPlayerNode *audioPlayer;
@property (nonatomic, readonly) SCNAudioSource *audioSource;
@property bool completed;
@property (readonly) bool customAudioNode;
@property (nonatomic, copy) id /* block */ didFinishPlayback;
@property (readonly) struct __C3DScene { }*scene;
@property (nonatomic, copy) id /* block */ willStartPlayback;

+ (id)audioPlayerWithAVAudioNode:(id)arg1;
+ (id)audioPlayerWithSource:(id)arg1;

- (const void*)__CFObject;
- (id)audioBufferFormat;
- (id)audioNode;
- (id)audioPlayer;
- (id)audioSource;
- (bool)completed;
- (bool)customAudioNode;
- (void)dealloc;
- (id /* block */)didFinishPlayback;
- (id)initWithAVAudioNode:(id)arg1;
- (id)initWithSource:(id)arg1;
- (struct __C3DNode { }*)nodeRef;
- (void)play;
- (void)recycle;
- (void)reset;
- (struct __C3DScene { }*)scene;
- (void)setCompleted:(bool)arg1;
- (void)setDidFinishPlayback:(id /* block */)arg1;
- (void)setNodeRef:(struct __C3DNode { }*)arg1;
- (void)setWillStartPlayback:(id /* block */)arg1;
- (id /* block */)willStartPlayback;

@end
