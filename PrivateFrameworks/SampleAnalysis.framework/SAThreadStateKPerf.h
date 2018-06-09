/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAThreadStateKPerf : SAThreadState {
    bool  _filledCyclesInstructions;
    bool  _filledDispatchQueue;
    bool  _filledName;
    bool  _filledScheduling;
    bool  _filledSnapshot;
    bool  _filledUserStack;
}

@property bool filledCyclesInstructions;
@property bool filledDispatchQueue;
@property bool filledName;
@property bool filledScheduling;
@property bool filledSnapshot;
@property bool filledUserStack;

- (bool)filledCyclesInstructions;
- (bool)filledDispatchQueue;
- (bool)filledName;
- (bool)filledScheduling;
- (bool)filledSnapshot;
- (bool)filledUserStack;
- (void)setFilledCyclesInstructions:(bool)arg1;
- (void)setFilledDispatchQueue:(bool)arg1;
- (void)setFilledName:(bool)arg1;
- (void)setFilledScheduling:(bool)arg1;
- (void)setFilledSnapshot:(bool)arg1;
- (void)setFilledUserStack:(bool)arg1;

@end
