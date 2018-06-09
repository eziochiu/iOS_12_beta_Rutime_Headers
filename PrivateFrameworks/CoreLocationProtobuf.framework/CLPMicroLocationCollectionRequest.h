/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _configurations;
    NSString * _deviceKey;
    NSMutableArray * _duetEvents;
    struct { 
        unsigned int submissionTimestamp : 1; 
    }  _has;
    NSMutableArray * _measurements;
    CLPMeta * _meta;
    NSMutableArray * _models;
    NSMutableArray * _recordingEvents;
    NSMutableArray * _rtLOITypes;
    double  _submissionTimestamp;
}

@property (nonatomic, retain) NSMutableArray *configurations;
@property (nonatomic, retain) NSString *deviceKey;
@property (nonatomic, retain) NSMutableArray *duetEvents;
@property (nonatomic, readonly) bool hasDeviceKey;
@property (nonatomic) bool hasSubmissionTimestamp;
@property (nonatomic, retain) NSMutableArray *measurements;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSMutableArray *models;
@property (nonatomic, retain) NSMutableArray *recordingEvents;
@property (nonatomic, retain) NSMutableArray *rtLOITypes;
@property (nonatomic) double submissionTimestamp;

+ (Class)configurationsType;
+ (Class)duetEventsType;
+ (Class)measurementsType;
+ (Class)modelsType;
+ (Class)recordingEventsType;
+ (Class)rtLOITypesType;

- (void).cxx_destruct;
- (void)addConfigurations:(id)arg1;
- (void)addDuetEvents:(id)arg1;
- (void)addMeasurements:(id)arg1;
- (void)addModels:(id)arg1;
- (void)addRecordingEvents:(id)arg1;
- (void)addRtLOITypes:(id)arg1;
- (void)clearConfigurations;
- (void)clearDuetEvents;
- (void)clearMeasurements;
- (void)clearModels;
- (void)clearRecordingEvents;
- (void)clearRtLOITypes;
- (id)configurations;
- (id)configurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)configurationsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceKey;
- (id)dictionaryRepresentation;
- (id)duetEvents;
- (id)duetEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duetEventsCount;
- (bool)hasDeviceKey;
- (bool)hasSubmissionTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)measurements;
- (id)measurementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)measurementsCount;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (id)models;
- (id)modelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)modelsCount;
- (bool)readFrom:(id)arg1;
- (id)recordingEvents;
- (id)recordingEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordingEventsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)rtLOITypes;
- (id)rtLOITypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rtLOITypesCount;
- (void)setConfigurations:(id)arg1;
- (void)setDeviceKey:(id)arg1;
- (void)setDuetEvents:(id)arg1;
- (void)setHasSubmissionTimestamp:(bool)arg1;
- (void)setMeasurements:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setRecordingEvents:(id)arg1;
- (void)setRtLOITypes:(id)arg1;
- (void)setSubmissionTimestamp:(double)arg1;
- (double)submissionTimestamp;
- (void)writeTo:(id)arg1;

@end
