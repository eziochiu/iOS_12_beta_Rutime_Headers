/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSEndpointerMetrics : NSObject {
    NSDictionary * _additionalMetrics;
    long long  _endpointerType;
    NSArray * _featuresAtEndpoint;
    NSDictionary * _serverFeatureLatencyDistribution;
    double  _totalAudioRecorded;
}

@property (nonatomic, retain) NSDictionary *additionalMetrics;
@property (nonatomic) long long endpointerType;
@property (nonatomic, retain) NSArray *featuresAtEndpoint;
@property (nonatomic, retain) NSDictionary *serverFeatureLatencyDistribution;
@property (nonatomic) double totalAudioRecorded;

- (void).cxx_destruct;
- (id)additionalMetrics;
- (long long)endpointerType;
- (id)featuresAtEndpoint;
- (id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5;
- (id)serverFeatureLatencyDistribution;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setEndpointerType:(long long)arg1;
- (void)setFeaturesAtEndpoint:(id)arg1;
- (void)setServerFeatureLatencyDistribution:(id)arg1;
- (void)setTotalAudioRecorded:(double)arg1;
- (double)totalAudioRecorded;

@end
