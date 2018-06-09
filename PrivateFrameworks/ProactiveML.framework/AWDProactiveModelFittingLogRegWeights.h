/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying> {
    AWDProactiveModelFittingQuantizedDenseVector * _denseQuantizedWeights;
    AWDProactiveModelFittingEvalMetrics * _evaluationMetrics;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int weightsL2norm : 1; 
        unsigned int weightsScaleFactor : 1; 
    }  _has;
    AWDProactiveModelFittingMinibatchStats * _minibatchStats;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    AWDProactiveModelFittingSparseFloatVector * _sparseFloatWeights;
    AWDProactiveModelFittingQuantizedSparseVector * _sparseQuantizedWeights;
    unsigned long long  _timestamp;
    float  _weightsL2norm;
    float  _weightsScaleFactor;
}

@property (nonatomic, retain) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights;
@property (nonatomic, retain) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic, readonly) bool hasDenseQuantizedWeights;
@property (nonatomic, readonly) bool hasEvaluationMetrics;
@property (nonatomic, readonly) bool hasMinibatchStats;
@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic, readonly) bool hasSparseFloatWeights;
@property (nonatomic, readonly) bool hasSparseQuantizedWeights;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWeightsL2norm;
@property (nonatomic) bool hasWeightsScaleFactor;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights;
@property (nonatomic, retain) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float weightsL2norm;
@property (nonatomic) float weightsScaleFactor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denseQuantizedWeights;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationMetrics;
- (bool)hasDenseQuantizedWeights;
- (bool)hasEvaluationMetrics;
- (bool)hasMinibatchStats;
- (bool)hasModelInfo;
- (bool)hasSparseFloatWeights;
- (bool)hasSparseQuantizedWeights;
- (bool)hasTimestamp;
- (bool)hasWeights;
- (bool)hasWeightsL2norm;
- (bool)hasWeightsScaleFactor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minibatchStats;
- (id)modelInfo;
- (bool)readFrom:(id)arg1;
- (void)setDenseQuantizedWeights:(id)arg1;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWeightsL2norm:(bool)arg1;
- (void)setHasWeightsScaleFactor:(bool)arg1;
- (void)setMinibatchStats:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setSparseFloatWeights:(id)arg1;
- (void)setSparseQuantizedWeights:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWeightsL2norm:(float)arg1;
- (void)setWeightsScaleFactor:(float)arg1;
- (id)sparseFloatWeights;
- (id)sparseQuantizedWeights;
- (unsigned long long)timestamp;
- (float)weightsL2norm;
- (float)weightsScaleFactor;
- (void)writeTo:(id)arg1;

@end
