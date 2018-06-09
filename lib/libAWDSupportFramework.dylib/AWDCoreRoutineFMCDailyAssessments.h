/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCDailyAssessments : PBCodable <NSCopying> {
    NSMutableArray * _assessments;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *assessments;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)assessmentType;

- (void)addAssessment:(id)arg1;
- (id)assessmentAtIndex:(unsigned long long)arg1;
- (id)assessments;
- (unsigned long long)assessmentsCount;
- (void)clearAssessments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssessments:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
