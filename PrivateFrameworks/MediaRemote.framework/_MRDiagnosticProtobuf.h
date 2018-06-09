/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {
    double  _dateGenerated;
    NSString * _diagnosticInfo;
    struct { 
        unsigned int dateGenerated : 1; 
    }  _has;
}

@property (nonatomic) double dateGenerated;
@property (nonatomic, retain) NSString *diagnosticInfo;
@property (nonatomic) bool hasDateGenerated;
@property (nonatomic, readonly) bool hasDiagnosticInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateGenerated;
- (id)description;
- (id)diagnosticInfo;
- (id)dictionaryRepresentation;
- (bool)hasDateGenerated;
- (bool)hasDiagnosticInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateGenerated:(double)arg1;
- (void)setDiagnosticInfo:(id)arg1;
- (void)setHasDateGenerated:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
