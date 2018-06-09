/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSRemoteControlClient : NSObject {
    <CSRemoteControlClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSRemoteControlClientDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isConnected;
- (void)setDelegate:(id)arg1;
- (bool)waitingForConnection:(double)arg1 error:(id*)arg2;

@end
