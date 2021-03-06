/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInvalidationFuture : MPFuture {
    bool  _invalid;
    NSMapTable * _invalidationBlocks;
}

@property (getter=isInvalid, nonatomic, readonly) bool invalid;

- (void).cxx_destruct;
- (void)invalidate;
- (bool)isInvalid;
- (id)onInvalid:(id /* block */)arg1;
- (id)onInvalid:(id /* block */)arg1 queue:(id)arg2;

@end
