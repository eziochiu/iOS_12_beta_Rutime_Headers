/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface IOAccessoryUserLdcmParamClass : NSObject {
    int  _fdpBehaviorMask;
    unsigned long long  _maxUpFluctuationMv;
    unsigned long long  _maxVhiDurationSec;
    unsigned long long  _minVhiDurationSec;
    int  _userBehaviorMask;
}

@property int fdpBehaviorMask;
@property unsigned long long maxUpFluctuationMv;
@property unsigned long long maxVhiDurationSec;
@property unsigned long long minVhiDurationSec;
@property int userBehaviorMask;

- (int)fdpBehaviorMask;
- (id)init;
- (unsigned long long)maxUpFluctuationMv;
- (unsigned long long)maxVhiDurationSec;
- (unsigned long long)minVhiDurationSec;
- (void)setFdpBehaviorMask:(int)arg1;
- (void)setMaxUpFluctuationMv:(unsigned long long)arg1;
- (void)setMaxVhiDurationSec:(unsigned long long)arg1;
- (void)setMinVhiDurationSec:(unsigned long long)arg1;
- (void)setUserBehaviorMask:(int)arg1;
- (int)userBehaviorMask;

@end
