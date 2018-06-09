/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding> {
    _CDPModelTuningState * _lastTuningState;
    _CDPSimpleModelParameterManagerTuningValue * _previousBestTuningValue;
    NSMutableArray * _tuningValues;
}

@property (nonatomic, retain) _CDPModelTuningState *lastTuningState;
@property (nonatomic, retain) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue;
@property (nonatomic, retain) NSMutableArray *tuningValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastTuningState;
- (id)previousBestTuningValue;
- (void)setLastTuningState:(id)arg1;
- (void)setPreviousBestTuningValue:(id)arg1;
- (void)setTuningValues:(id)arg1;
- (id)tuningValues;

@end
