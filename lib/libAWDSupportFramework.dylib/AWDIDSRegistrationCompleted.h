/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {
    int  _circleStatus;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int circleStatus : 1; 
        unsigned int registrationError : 1; 
        unsigned int registrationType : 1; 
        unsigned int wasSuccessful : 1; 
    }  _has;
    int  _registrationError;
    int  _registrationType;
    NSString * _serviceIdentifier;
    unsigned long long  _timestamp;
    unsigned int  _wasSuccessful;
}

@property (nonatomic) int circleStatus;
@property (nonatomic) bool hasCircleStatus;
@property (nonatomic) bool hasRegistrationError;
@property (nonatomic) bool hasRegistrationType;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWasSuccessful;
@property (nonatomic) int registrationError;
@property (nonatomic) int registrationType;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int wasSuccessful;

- (int)circleStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCircleStatus;
- (bool)hasRegistrationError;
- (bool)hasRegistrationType;
- (bool)hasServiceIdentifier;
- (bool)hasTimestamp;
- (bool)hasWasSuccessful;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)registrationError;
- (int)registrationType;
- (id)serviceIdentifier;
- (void)setCircleStatus:(int)arg1;
- (void)setHasCircleStatus:(bool)arg1;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setHasRegistrationType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWasSuccessful:(bool)arg1;
- (void)setRegistrationError:(int)arg1;
- (void)setRegistrationType:(int)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWasSuccessful:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)wasSuccessful;
- (void)writeTo:(id)arg1;

@end
