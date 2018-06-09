/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMPredictionItem : NSObject {
    NSString * _bundleId;
    double  _confidence;
    unsigned long long  _predictionSource;
    long long  _reason;
    NSDictionary * _reasonMetadata;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned long long predictionSource;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *reasonMetadata;

- (void).cxx_destruct;
- (id)bundleId;
- (double)confidence;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 predictionSource:(unsigned long long)arg2 reason:(long long)arg3 reasonMetadata:(id)arg4 confidence:(double)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPredictionItem:(id)arg1;
- (unsigned long long)predictionSource;
- (long long)reason;
- (id)reasonMetadata;

@end
