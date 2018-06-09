/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    unsigned long long  _action;
    STTimer * _timer;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timer;

@end
