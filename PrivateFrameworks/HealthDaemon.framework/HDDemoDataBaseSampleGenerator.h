/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding> {
    bool  _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator * _demoDataGenerator;
}

@property (nonatomic) bool createdFromNSKeyedUnarchiver;
@property (nonatomic) HDDemoDataGenerator *demoDataGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_createdFromNSKeyedUnarchiver;
- (bool)createdFromNSKeyedUnarchiver;
- (id)demoDataGenerator;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCreatedFromNSKeyedUnarchiver:(bool)arg1;
- (void)setDemoDataGenerator:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
