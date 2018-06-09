/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticEvent : NSObject {
    double  _duration;
    long long  _fixedParamCount;
    struct AVHapticPlayerFixedParameter { 
        unsigned long long type; 
        float value; 
    }  _fixedParams;
    bool  _isParameter;
    double  _time;
    union { 
        unsigned long long _eventType; 
        unsigned long long _paramType; 
    }  _u;
    float  _value;
}

@property (readonly) double duration;
@property (readonly) unsigned long long eventType;
@property (readonly) long long fixedParamCount;
@property (readonly) struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*fixedParams;
@property (readonly) bool isParameter;
@property (readonly) unsigned long long paramType;
@property (readonly) double time;
@property (readonly) float value;

+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4;
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4 duration:(double)arg5;
+ (id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;

- (double)duration;
- (unsigned long long)eventType;
- (long long)fixedParamCount;
- (struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)fixedParams;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4 duration:(double)arg5;
- (id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;
- (bool)isParameter;
- (unsigned long long)paramType;
- (double)time;
- (float)value;

@end
