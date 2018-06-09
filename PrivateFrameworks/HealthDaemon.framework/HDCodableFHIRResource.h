/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFHIRResource : PBCodable <NSCopying> {
    NSString * _accountIdentifier;
    long long  _extractionHints;
    NSString * _fhirVersion;
    NSString * _gatewayExternalID;
    struct { 
        unsigned int extractionHints : 1; 
        unsigned int originVersionMajor : 1; 
        unsigned int originVersionMinor : 1; 
        unsigned int originVersionPatch : 1; 
        unsigned int receivedDate : 1; 
    }  _has;
    NSString * _originVersionBuild;
    long long  _originVersionMajor;
    long long  _originVersionMinor;
    long long  _originVersionPatch;
    NSData * _rawContent;
    double  _receivedDate;
    NSString * _receivedDateTimeZoneName;
    NSString * _resourceID;
    NSString * _resourceType;
    NSString * _sourceURL;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) long long extractionHints;
@property (nonatomic, retain) NSString *fhirVersion;
@property (nonatomic, retain) NSString *gatewayExternalID;
@property (nonatomic, readonly) bool hasAccountIdentifier;
@property (nonatomic) bool hasExtractionHints;
@property (nonatomic, readonly) bool hasFhirVersion;
@property (nonatomic, readonly) bool hasGatewayExternalID;
@property (nonatomic, readonly) bool hasOriginVersionBuild;
@property (nonatomic) bool hasOriginVersionMajor;
@property (nonatomic) bool hasOriginVersionMinor;
@property (nonatomic) bool hasOriginVersionPatch;
@property (nonatomic, readonly) bool hasRawContent;
@property (nonatomic) bool hasReceivedDate;
@property (nonatomic, readonly) bool hasReceivedDateTimeZoneName;
@property (nonatomic, readonly) bool hasResourceID;
@property (nonatomic, readonly) bool hasResourceType;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic, retain) NSString *originVersionBuild;
@property (nonatomic) long long originVersionMajor;
@property (nonatomic) long long originVersionMinor;
@property (nonatomic) long long originVersionPatch;
@property (nonatomic, retain) NSData *rawContent;
@property (nonatomic) double receivedDate;
@property (nonatomic, retain) NSString *receivedDateTimeZoneName;
@property (nonatomic, retain) NSString *resourceID;
@property (nonatomic, retain) NSString *resourceType;
@property (nonatomic, retain) NSString *sourceURL;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)extractionHints;
- (id)fhirVersion;
- (id)gatewayExternalID;
- (bool)hasAccountIdentifier;
- (bool)hasExtractionHints;
- (bool)hasFhirVersion;
- (bool)hasGatewayExternalID;
- (bool)hasOriginVersionBuild;
- (bool)hasOriginVersionMajor;
- (bool)hasOriginVersionMinor;
- (bool)hasOriginVersionPatch;
- (bool)hasRawContent;
- (bool)hasReceivedDate;
- (bool)hasReceivedDateTimeZoneName;
- (bool)hasResourceID;
- (bool)hasResourceType;
- (bool)hasSourceURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originVersionBuild;
- (long long)originVersionMajor;
- (long long)originVersionMinor;
- (long long)originVersionPatch;
- (id)rawContent;
- (bool)readFrom:(id)arg1;
- (double)receivedDate;
- (id)receivedDateTimeZoneName;
- (id)resourceID;
- (id)resourceType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setExtractionHints:(long long)arg1;
- (void)setFhirVersion:(id)arg1;
- (void)setGatewayExternalID:(id)arg1;
- (void)setHasExtractionHints:(bool)arg1;
- (void)setHasOriginVersionMajor:(bool)arg1;
- (void)setHasOriginVersionMinor:(bool)arg1;
- (void)setHasOriginVersionPatch:(bool)arg1;
- (void)setHasReceivedDate:(bool)arg1;
- (void)setOriginVersionBuild:(id)arg1;
- (void)setOriginVersionMajor:(long long)arg1;
- (void)setOriginVersionMinor:(long long)arg1;
- (void)setOriginVersionPatch:(long long)arg1;
- (void)setRawContent:(id)arg1;
- (void)setReceivedDate:(double)arg1;
- (void)setReceivedDateTimeZoneName:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setResourceType:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)writeTo:(id)arg1;

@end