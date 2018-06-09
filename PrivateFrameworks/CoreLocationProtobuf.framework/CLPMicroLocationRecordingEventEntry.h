/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationRecordingEventEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedTimestamp : 1; 
        unsigned int recordingTimestamp : 1; 
        unsigned int recordingEventType : 1; 
    }  _has;
    double  _receivedTimestamp;
    NSData * _recordingEventProtobuf;
    int  _recordingEventType;
    double  _recordingTimestamp;
    NSString * _recordingUUID;
    NSString * _rtLOI;
}

@property (nonatomic) bool hasReceivedTimestamp;
@property (nonatomic, readonly) bool hasRecordingEventProtobuf;
@property (nonatomic) bool hasRecordingEventType;
@property (nonatomic) bool hasRecordingTimestamp;
@property (nonatomic, readonly) bool hasRecordingUUID;
@property (nonatomic, readonly) bool hasRtLOI;
@property (nonatomic) double receivedTimestamp;
@property (nonatomic, retain) NSData *recordingEventProtobuf;
@property (nonatomic) int recordingEventType;
@property (nonatomic) double recordingTimestamp;
@property (nonatomic, retain) NSString *recordingUUID;
@property (nonatomic, retain) NSString *rtLOI;

- (void).cxx_destruct;
- (int)StringAsRecordingEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedTimestamp;
- (bool)hasRecordingEventProtobuf;
- (bool)hasRecordingEventType;
- (bool)hasRecordingTimestamp;
- (bool)hasRecordingUUID;
- (bool)hasRtLOI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)receivedTimestamp;
- (id)recordingEventProtobuf;
- (int)recordingEventType;
- (id)recordingEventTypeAsString:(int)arg1;
- (double)recordingTimestamp;
- (id)recordingUUID;
- (id)rtLOI;
- (void)setHasReceivedTimestamp:(bool)arg1;
- (void)setHasRecordingEventType:(bool)arg1;
- (void)setHasRecordingTimestamp:(bool)arg1;
- (void)setReceivedTimestamp:(double)arg1;
- (void)setRecordingEventProtobuf:(id)arg1;
- (void)setRecordingEventType:(int)arg1;
- (void)setRecordingTimestamp:(double)arg1;
- (void)setRecordingUUID:(id)arg1;
- (void)setRtLOI:(id)arg1;
- (void)writeTo:(id)arg1;

@end
