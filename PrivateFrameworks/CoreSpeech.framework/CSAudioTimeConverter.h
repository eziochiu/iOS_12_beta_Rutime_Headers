/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioTimeConverter : NSObject {
    unsigned long long  _anchorHostTime;
    unsigned long long  _anchorSampleCount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long anchorHostTime;
@property (nonatomic) unsigned long long anchorSampleCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)anchorHostTime;
- (unsigned long long)anchorSampleCount;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (id)init;
- (void)processSampleCount:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (id)queue;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;
- (void)setAnchorHostTime:(unsigned long long)arg1;
- (void)setAnchorSampleCount:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;

@end
