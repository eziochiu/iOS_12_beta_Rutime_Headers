/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {
    int  _authMethod;
    int  _certified;
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int authMethod : 1; 
        unsigned int certified : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int transportType : 1; 
        unsigned int isAdd : 1; 
        unsigned int isAddedViaWAC : 1; 
        unsigned int isSecureWAC : 1; 
    }  _has;
    bool  _isAdd;
    bool  _isAddedViaWAC;
    bool  _isSecureWAC;
    unsigned long long  _timestamp;
    int  _transportType;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic) int authMethod;
@property (nonatomic) int certified;
@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasAuthMethod;
@property (nonatomic) bool hasCertified;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasIsAdd;
@property (nonatomic) bool hasIsAddedViaWAC;
@property (nonatomic) bool hasIsSecureWAC;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic) bool isAdd;
@property (nonatomic) bool isAddedViaWAC;
@property (nonatomic) bool isSecureWAC;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int transportType;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

- (void).cxx_destruct;
- (int)StringAsAuthMethod:(id)arg1;
- (int)StringAsCertified:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (int)authMethod;
- (id)authMethodAsString:(int)arg1;
- (int)certified;
- (id)certifiedAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (bool)hasAuthMethod;
- (bool)hasCertified;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasIsAdd;
- (bool)hasIsAddedViaWAC;
- (bool)hasIsSecureWAC;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasVendorDetails;
- (unsigned long long)hash;
- (bool)isAdd;
- (bool)isAddedViaWAC;
- (bool)isEqual:(id)arg1;
- (bool)isSecureWAC;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthMethod:(int)arg1;
- (void)setCertified:(int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAuthMethod:(bool)arg1;
- (void)setHasCertified:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIsAdd:(bool)arg1;
- (void)setHasIsAddedViaWAC:(bool)arg1;
- (void)setHasIsSecureWAC:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIsAdd:(bool)arg1;
- (void)setIsAddedViaWAC:(bool)arg1;
- (void)setIsSecureWAC:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(int)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned long long)timestamp;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
