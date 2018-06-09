/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPFutureDeallocationTrigger : NSObject {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

+ (id)triggerWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (void)setBlock:(id /* block */)arg1;

@end
