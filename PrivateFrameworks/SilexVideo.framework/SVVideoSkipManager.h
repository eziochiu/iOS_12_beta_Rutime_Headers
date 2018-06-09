/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipManager : NSObject <SVVideoPlaybackAdvancing, SVVideoPlaybackSkipping> {
    <SVVideoSkipHandling> * _handler;
    <SVVideoSkipPolicy> * _policy;
    <SVVideoQueueProviding> * _queueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoSkipHandling> *handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoSkipPolicy> *policy;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)advanceAnimated:(bool)arg1;
- (bool)advanceAnimated:(bool)arg1 force:(bool)arg2;
- (id)handler;
- (id)initWithQueueProvider:(id)arg1 policy:(id)arg2 handler:(id)arg3;
- (id)policy;
- (id)queueProvider;
- (bool)skipToNext;
- (bool)skipToPrevious;
- (bool)skipToVideo:(id)arg1 animated:(bool)arg2 force:(bool)arg3;

@end
