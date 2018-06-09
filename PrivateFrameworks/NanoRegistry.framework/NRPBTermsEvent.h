/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBTermsEvent : PBCodable <NSCopying> {
    NSString * _acknowledgedDeviceName;
    NSString * _acknowledgedDeviceSerialNumber;
    NSString * _displayDeviceName;
    NSString * _displayDeviceSerialNumber;
    NSString * _documentationID;
    double  _eventDate;
    int  _eventType;
    struct { 
        unsigned int eventDate : 1; 
        unsigned int eventType : 1; 
        unsigned int presentationLocation : 1; 
    }  _has;
    NSString * _loggingProcessName;
    int  _presentationLocation;
    NSString * _presentationReason;
    NSData * _termsText;
}

@property (nonatomic, retain) NSString *acknowledgedDeviceName;
@property (nonatomic, retain) NSString *acknowledgedDeviceSerialNumber;
@property (nonatomic, retain) NSString *displayDeviceName;
@property (nonatomic, retain) NSString *displayDeviceSerialNumber;
@property (nonatomic, retain) NSString *documentationID;
@property (nonatomic) double eventDate;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasAcknowledgedDeviceName;
@property (nonatomic, readonly) bool hasAcknowledgedDeviceSerialNumber;
@property (nonatomic, readonly) bool hasDisplayDeviceName;
@property (nonatomic, readonly) bool hasDisplayDeviceSerialNumber;
@property (nonatomic, readonly) bool hasDocumentationID;
@property (nonatomic) bool hasEventDate;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasLoggingProcessName;
@property (nonatomic) bool hasPresentationLocation;
@property (nonatomic, readonly) bool hasPresentationReason;
@property (nonatomic, readonly) bool hasTermsText;
@property (nonatomic, retain) NSString *loggingProcessName;
@property (nonatomic) int presentationLocation;
@property (nonatomic, retain) NSString *presentationReason;
@property (nonatomic, retain) NSData *termsText;

- (void).cxx_destruct;
- (id)acknowledgedDeviceName;
- (id)acknowledgedDeviceSerialNumber;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayDeviceName;
- (id)displayDeviceSerialNumber;
- (id)documentationID;
- (double)eventDate;
- (int)eventType;
- (bool)hasAcknowledgedDeviceName;
- (bool)hasAcknowledgedDeviceSerialNumber;
- (bool)hasDisplayDeviceName;
- (bool)hasDisplayDeviceSerialNumber;
- (bool)hasDocumentationID;
- (bool)hasEventDate;
- (bool)hasEventType;
- (bool)hasLoggingProcessName;
- (bool)hasPresentationLocation;
- (bool)hasPresentationReason;
- (bool)hasTermsText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)loggingProcessName;
- (void)mergeFrom:(id)arg1;
- (int)presentationLocation;
- (id)presentationReason;
- (bool)readFrom:(id)arg1;
- (void)setAcknowledgedDeviceName:(id)arg1;
- (void)setAcknowledgedDeviceSerialNumber:(id)arg1;
- (void)setDisplayDeviceName:(id)arg1;
- (void)setDisplayDeviceSerialNumber:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasPresentationLocation:(bool)arg1;
- (void)setLoggingProcessName:(id)arg1;
- (void)setPresentationLocation:(int)arg1;
- (void)setPresentationReason:(id)arg1;
- (void)setTermsText:(id)arg1;
- (id)termsText;
- (void)writeTo:(id)arg1;

@end
