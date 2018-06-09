/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTUpdateAlarmIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic) long long code;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
