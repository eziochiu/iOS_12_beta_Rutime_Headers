/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConfigurationGuardedData : NSObject {
    double  analyticsSamplingRate;
    double  halfValuePosition;
    unsigned long long  maximumTopicRecords;
    unsigned long long  minimumTopicRecords;
    double  nonReaderTextWeight;
    double  remoteTopicsMultiplier;
    NSDictionary * topicMaps;
    NSDictionary * topicMapsScalingFactors;
    NSDictionary * topicsAlgorithmMultiplier;
    double  topicsScalingFactor;
    double  topicsSigmoidPeakValue;
    double  topicsSigmoidWidth;
    NSDictionary * topicsSourceMultiplier;
    NSString * variantName;
}

- (void).cxx_destruct;

@end