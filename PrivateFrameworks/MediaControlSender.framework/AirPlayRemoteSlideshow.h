/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface AirPlayRemoteSlideshow : NSObject {
    MediaControlClient * _client;
    <AirPlayRemoteSlideshowDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    double  _startTime;
    bool  _started;
    NSObject<OS_dispatch_queue> * _userQueue;
}

@property (nonatomic) <AirPlayRemoteSlideshowDelegate> *delegate;

- (void)_configureEventHandler;
- (void)dealloc;
- (id)delegate;
- (void)getFeaturesWithCompletion:(id /* block */)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)startWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)stopWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
