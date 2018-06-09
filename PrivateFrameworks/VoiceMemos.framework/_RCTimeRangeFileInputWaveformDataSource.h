/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource {
    double  _destinationBeginTime;
    bool  _isDecomposedFragment;
    struct { 
        double beginTime; 
        double endTime; 
    }  _sourceTimeRange;
}

@property (nonatomic) double destinationBeginTime;
@property (nonatomic) bool isDecomposedFragment;
@property (nonatomic) struct { double x1; double x2; } sourceTimeRange;

- (double)destinationBeginTime;
- (bool)isDecomposedFragment;
- (void)saveGeneratedWaveformIfNecessary;
- (void)setDestinationBeginTime:(double)arg1;
- (void)setIsDecomposedFragment:(bool)arg1;
- (void)setSourceTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })sourceTimeRange;

@end
