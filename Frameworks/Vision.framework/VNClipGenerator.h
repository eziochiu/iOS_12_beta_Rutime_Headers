/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClipGenerator : NSObject {
    NSNumber * _frameRate;
    NSArray * _lstmScores;
}

- (void).cxx_destruct;
- (id)generateSequenceSummaryWithMinClipDuration:(id)arg1 maxClipDuration:(id)arg2 maxSequenceSummaryDuration:(id)arg3 error:(id*)arg4;
- (id)getLSTMScoreTimeStampFromIndex:(unsigned long long)arg1;
- (id)getLSTMScoreValueFromIndex:(unsigned long long)arg1;
- (id)initWithScores:(id)arg1 frameRate:(id)arg2;

@end
