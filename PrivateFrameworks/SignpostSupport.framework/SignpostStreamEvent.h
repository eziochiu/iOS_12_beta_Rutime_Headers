/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostStreamEvent : SignpostEvent {
    unsigned long long  _serialNumber;
    NSObject<OS_dispatch_source> * _timeoutSource;
    unsigned long long  _totalFrameCount;
}

@property (nonatomic) unsigned long long _totalFrameCount;
@property (nonatomic) unsigned long long serialNumber;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (bool)_hasTotalFrames;
- (unsigned long long)_totalFrameCount;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)serialNumber;
- (id)serializeableDictionary;
- (void)setSerialNumber:(unsigned long long)arg1;
- (void)setTimeoutSource:(id)arg1;
- (void)set_totalFrameCount:(unsigned long long)arg1;
- (id)timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (id)initWithOSLogEventProxy:(id)arg1 serialNumber:(unsigned long long)arg2 shouldCollectFrameInfo:(bool)arg3 timeoutInSec:(unsigned long long)arg4 timeoutHandlingQueue:(id)arg5 timeoutHandlingBlock:(id /* block */)arg6;

@end
