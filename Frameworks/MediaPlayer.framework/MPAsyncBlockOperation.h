/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAsyncBlockOperation : MPAsyncOperation {
    id /* block */  _startHandler;
}

@property (nonatomic, readonly, copy) id /* block */ startHandler;

- (void).cxx_destruct;
- (id)initWithStartHandler:(id /* block */)arg1;
- (void)start;
- (id /* block */)startHandler;

@end
