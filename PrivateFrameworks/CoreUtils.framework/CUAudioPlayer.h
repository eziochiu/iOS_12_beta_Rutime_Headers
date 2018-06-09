/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioSession * _audioSession;
    CUAudioRequest * _currentRequest;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    unsigned int  _invalidateFlags;
    id /* block */  _invalidationHandler;
    NSString * _label;
    struct NSMutableArray { Class x1; } * _playRequests;
    struct NSMutableDictionary { Class x1; } * _preparedRequests;
    CUAudioPlayer * _selfRef;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortRequestsWithError:(id)arg1;
- (void)_activate;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_invalidateWithFlags:(unsigned int)arg1;
- (void)_invalidated;
- (void)_playPreparedIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_playURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_prepareURL:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_processRequests;
- (void)activate;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)init;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)playPreparedIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)playURL:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareURL:(id)arg1 identifier:(id*)arg2 completion:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;

@end
