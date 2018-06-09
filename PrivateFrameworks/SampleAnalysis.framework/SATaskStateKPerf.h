/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATaskStateKPerf : SATaskState {
    bool  _filledLatencyQoS;
    bool  _filledMem;
    bool  _filledSnap;
}

@property bool filledLatencyQoS;
@property bool filledMem;
@property bool filledSnap;

- (bool)filledLatencyQoS;
- (bool)filledMem;
- (bool)filledSnap;
- (void)setFilledLatencyQoS:(bool)arg1;
- (void)setFilledMem:(bool)arg1;
- (void)setFilledSnap:(bool)arg1;

@end
