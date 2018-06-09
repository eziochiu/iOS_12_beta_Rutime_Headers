/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCEVASGetData : PBCodable <NSCopying> {
    unsigned int  _filterType;
    unsigned int  _filterValue;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int filterType : 1; 
        unsigned int filterValue : 1; 
        unsigned int signupOnly : 1; 
        unsigned int swStatus : 1; 
        unsigned int terminalCapabilities : 1; 
        unsigned int version : 1; 
    }  _has;
    NSData * _merchantID;
    NSString * _merchantURL;
    unsigned int  _signupOnly;
    unsigned int  _swStatus;
    unsigned int  _terminalCapabilities;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
    unsigned int  _version;
}

@property (nonatomic) unsigned int filterType;
@property (nonatomic) unsigned int filterValue;
@property (nonatomic) bool hasFilterType;
@property (nonatomic) bool hasFilterValue;
@property (nonatomic, readonly) bool hasMerchantID;
@property (nonatomic, readonly) bool hasMerchantURL;
@property (nonatomic) bool hasSignupOnly;
@property (nonatomic) bool hasSwStatus;
@property (nonatomic) bool hasTerminalCapabilities;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *merchantID;
@property (nonatomic, retain) NSString *merchantURL;
@property (nonatomic) unsigned int signupOnly;
@property (nonatomic) unsigned int swStatus;
@property (nonatomic) unsigned int terminalCapabilities;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)filterType;
- (unsigned int)filterValue;
- (bool)hasFilterType;
- (bool)hasFilterValue;
- (bool)hasMerchantID;
- (bool)hasMerchantURL;
- (bool)hasSignupOnly;
- (bool)hasSwStatus;
- (bool)hasTerminalCapabilities;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantID;
- (id)merchantURL;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFilterType:(unsigned int)arg1;
- (void)setFilterValue:(unsigned int)arg1;
- (void)setHasFilterType:(bool)arg1;
- (void)setHasFilterValue:(bool)arg1;
- (void)setHasSignupOnly:(bool)arg1;
- (void)setHasSwStatus:(bool)arg1;
- (void)setHasTerminalCapabilities:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMerchantID:(id)arg1;
- (void)setMerchantURL:(id)arg1;
- (void)setSignupOnly:(unsigned int)arg1;
- (void)setSwStatus:(unsigned int)arg1;
- (void)setTerminalCapabilities:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)signupOnly;
- (unsigned int)swStatus;
- (unsigned int)terminalCapabilities;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
