/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    struct normal_distribution<double> { 
        struct param_type { 
            double __mean_; 
            double __stddev_; 
        } __p_; 
        double _V_; 
        bool _V_hot_; 
    }  _distribution;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> { 
        unsigned int __x_; 
    }  _generator;
    NSArray * _pseudoRandomDoubles;
}

@property (nonatomic, copy) NSArray *pseudoRandomDoubles;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createPseudoRandomDoubles;
- (double)_pseudoRandomDoubleFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_pseudoRandomDoubles;
- (double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2;
- (double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)pseudoRandomDoubleFromTime:(double)arg1;
- (id)pseudoRandomDoubles;
- (double)randomDoubleFromGenerator;
- (void)setPseudoRandomDoubles:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
