/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyTimer : NSObject {
    double  _elapsedTime;
    bool  _foundFirstInput;
    double  _maxTimeIntervalBetweenInputs;
    double  _mostRecentTimestamp;
}

@property (nonatomic) double elapsedTime;
@property (nonatomic) bool foundFirstInput;
@property (nonatomic) double maxTimeIntervalBetweenInputs;
@property (nonatomic) double mostRecentTimestamp;

- (void)addInputEventWithTimestamp:(double)arg1;
- (double)elapsedTime;
- (bool)foundFirstInput;
- (double)maxTimeIntervalBetweenInputs;
- (double)mostRecentTimestamp;
- (void)setElapsedTime:(double)arg1;
- (void)setFoundFirstInput:(bool)arg1;
- (void)setMaxTimeIntervalBetweenInputs:(double)arg1;
- (void)setMostRecentTimestamp:(double)arg1;

@end
