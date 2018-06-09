/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigDisplayMirroringChangeObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _baseDisplayList;
    NSMutableSet * _clonedDisplays;
    NSMutableSet * _cloningSupportedDisplays;
    struct OpaqueFigPlayer { } * _player;
}

- (void)dealloc;
- (id)initWithPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeReferenceToPlayer;
- (void)setBaseDisplayList:(id)arg1;
- (void)updatePlayerDisplayList;

@end
