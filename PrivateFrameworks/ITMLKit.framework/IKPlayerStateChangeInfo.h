/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlayerStateChangeInfo : NSObject {
    NSDictionary * _jsonValue;
    long long  _oldState;
    long long  _state;
}

@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic, copy) NSDictionary *jsonValue;
@property (nonatomic, readonly) long long oldState;
@property (nonatomic) double rate;
@property (nonatomic, readonly) long long state;

+ (id)stateNameForState:(long long)arg1;

- (void).cxx_destruct;
- (double)duration;
- (double)elapsedTime;
- (id)initWithState:(long long)arg1;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)jsonValue;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)oldState;
- (double)rate;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setJsonValue:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRate:(double)arg1;
- (long long)state;

@end
