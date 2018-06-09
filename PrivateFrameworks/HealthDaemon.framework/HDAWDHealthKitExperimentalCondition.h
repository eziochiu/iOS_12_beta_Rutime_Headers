/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying> {
    NSString * _experimentIdentifier;
    struct { 
        unsigned int testCondition : 1; 
    }  _has;
    long long  _testCondition;
}

@property (nonatomic, retain) NSString *experimentIdentifier;
@property (nonatomic, readonly) bool hasExperimentIdentifier;
@property (nonatomic) bool hasTestCondition;
@property (nonatomic) long long testCondition;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentIdentifier;
- (bool)hasExperimentIdentifier;
- (bool)hasTestCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExperimentIdentifier:(id)arg1;
- (void)setHasTestCondition:(bool)arg1;
- (void)setTestCondition:(long long)arg1;
- (long long)testCondition;
- (void)writeTo:(id)arg1;

@end
