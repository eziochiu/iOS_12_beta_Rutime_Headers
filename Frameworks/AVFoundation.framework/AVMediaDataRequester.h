/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaDataRequester : NSObject {
    <AVMediaDataRequesterConsumer> * _mediaDataConsumer;
    id /* block */  _requestBlock;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, readonly) id /* block */ requestBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (void)_requestMediaDataIfReady;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(id /* block */)arg3;
- (void)invalidate;
- (id /* block */)requestBlock;
- (id)requestQueue;
- (void)startRequestingMediaData;

@end
