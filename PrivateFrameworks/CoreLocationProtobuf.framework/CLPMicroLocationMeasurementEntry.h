/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationMeasurementEntry : PBCodable <NSCopying> {
    int  _flags;
    struct { 
        unsigned int scanCFTimestamp : 1; 
        unsigned int scanMCTimestamp : 1; 
        unsigned int flags : 1; 
    }  _has;
    NSData * _measurementProtobuf;
    NSString * _recordingUUID;
    double  _scanCFTimestamp;
    unsigned long long  _scanMCTimestamp;
}

@property (nonatomic) int flags;
@property (nonatomic) bool hasFlags;
@property (nonatomic, readonly) bool hasMeasurementProtobuf;
@property (nonatomic, readonly) bool hasRecordingUUID;
@property (nonatomic) bool hasScanCFTimestamp;
@property (nonatomic) bool hasScanMCTimestamp;
@property (nonatomic, retain) NSData *measurementProtobuf;
@property (nonatomic, retain) NSString *recordingUUID;
@property (nonatomic) double scanCFTimestamp;
@property (nonatomic) unsigned long long scanMCTimestamp;

- (void).cxx_destruct;
- (int)StringAsFlags:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)flags;
- (id)flagsAsString:(int)arg1;
- (bool)hasFlags;
- (bool)hasMeasurementProtobuf;
- (bool)hasRecordingUUID;
- (bool)hasScanCFTimestamp;
- (bool)hasScanMCTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)measurementProtobuf;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordingUUID;
- (double)scanCFTimestamp;
- (unsigned long long)scanMCTimestamp;
- (void)setFlags:(int)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasScanCFTimestamp:(bool)arg1;
- (void)setHasScanMCTimestamp:(bool)arg1;
- (void)setMeasurementProtobuf:(id)arg1;
- (void)setRecordingUUID:(id)arg1;
- (void)setScanCFTimestamp:(double)arg1;
- (void)setScanMCTimestamp:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
