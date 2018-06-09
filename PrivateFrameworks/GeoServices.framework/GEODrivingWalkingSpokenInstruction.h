/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {
    GEOFormattedString * _continueStage;
    NSMutableArray * _executionStages;
    struct { 
        unsigned int shortChainedInstructionIndex : 1; 
    }  _has;
    GEOFormattedString * _initialStage;
    GEOFormattedString * _preparationStage;
    GEOFormattedString * _proceedStage;
    unsigned int  _shortChainedInstructionIndex;
}

@property (nonatomic, retain) GEOFormattedString *continueStage;
@property (nonatomic, retain) NSMutableArray *executionStages;
@property (nonatomic, readonly) bool hasContinueStage;
@property (nonatomic, readonly) bool hasInitialStage;
@property (nonatomic, readonly) bool hasPreparationStage;
@property (nonatomic, readonly) bool hasProceedStage;
@property (nonatomic) bool hasShortChainedInstructionIndex;
@property (nonatomic, retain) GEOFormattedString *initialStage;
@property (nonatomic, retain) GEOFormattedString *preparationStage;
@property (nonatomic, retain) GEOFormattedString *proceedStage;
@property (nonatomic) unsigned int shortChainedInstructionIndex;

+ (Class)executionStageType;

- (void).cxx_destruct;
- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
- (id)continueStage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (id)executionStages;
- (unsigned long long)executionStagesCount;
- (bool)hasContinueStage;
- (bool)hasInitialStage;
- (bool)hasPreparationStage;
- (bool)hasProceedStage;
- (bool)hasShortChainedInstructionIndex;
- (unsigned long long)hash;
- (id)initialStage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preparationStage;
- (id)proceedStage;
- (bool)readFrom:(id)arg1;
- (void)setContinueStage:(id)arg1;
- (void)setExecutionStages:(id)arg1;
- (void)setHasShortChainedInstructionIndex:(bool)arg1;
- (void)setInitialStage:(id)arg1;
- (void)setPreparationStage:(id)arg1;
- (void)setProceedStage:(id)arg1;
- (void)setShortChainedInstructionIndex:(unsigned int)arg1;
- (unsigned int)shortChainedInstructionIndex;
- (void)writeTo:(id)arg1;

@end
