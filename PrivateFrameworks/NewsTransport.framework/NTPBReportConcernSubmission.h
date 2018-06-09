/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {
    int  _cancelLocation;
    struct { 
        unsigned int cancelLocation : 1; 
        unsigned int reportConcernLocation : 1; 
        unsigned int resultType : 1; 
    }  _has;
    int  _reportConcernLocation;
    int  _resultType;
}

@property (nonatomic) int cancelLocation;
@property (nonatomic) bool hasCancelLocation;
@property (nonatomic) bool hasReportConcernLocation;
@property (nonatomic) bool hasResultType;
@property (nonatomic) int reportConcernLocation;
@property (nonatomic) int resultType;

- (int)cancelLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCancelLocation;
- (bool)hasReportConcernLocation;
- (bool)hasResultType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reportConcernLocation;
- (int)resultType;
- (void)setCancelLocation:(int)arg1;
- (void)setHasCancelLocation:(bool)arg1;
- (void)setHasReportConcernLocation:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setReportConcernLocation:(int)arg1;
- (void)setResultType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
