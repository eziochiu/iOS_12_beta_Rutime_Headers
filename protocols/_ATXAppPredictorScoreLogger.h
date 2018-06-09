/* made by EzioChiu.
 */

@protocol _ATXAppPredictorScoreLogger <NSObject>

@required

- (void)logInputs:(NSDictionary *)arg1 subscores:(NSDictionary *)arg2 forBundleId:(NSString *)arg3;
- (void)logStageScores:(NSArray *)arg1 secondStageScores:(NSArray *)arg2 thirdStageScores:(NSArray *)arg3;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setCacheAge:(double)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(NSString *)arg1;

@end
