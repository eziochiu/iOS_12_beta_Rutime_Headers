/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTechnique : NSObject {
    double  _bonusLatency;
    <ARTechniqueDelegate> * _delegate;
    unsigned long long  _powerUsage;
}

@property double bonusLatency;
@property <ARTechniqueDelegate> *delegate;
@property unsigned long long powerUsage;

+ (id)techniqueOfClass:(Class)arg1 inArray:(id)arg2;

- (void).cxx_destruct;
- (double)bonusLatency;
- (long long)captureBehavior;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (unsigned long long)powerUsage;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)prepare;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)replaceTechniques:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setBonusLatency:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (id)techniqueOfClass:(Class)arg1;
- (id)techniques;

@end
