/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageNicknamePublished : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int hasAvatar : 1; 
        unsigned int linkQuality : 1; 
        unsigned int privateOperationalErrorCode : 1; 
        unsigned int privateSuccess : 1; 
        unsigned int publicOperationalErrorCode : 1; 
        unsigned int publicSuccess : 1; 
        unsigned int updated : 1; 
    }  _has;
    unsigned int  _hasAvatar;
    int  _linkQuality;
    unsigned int  _privateOperationalErrorCode;
    NSString * _privateOperationalErrorDomain;
    unsigned int  _privateSuccess;
    unsigned int  _publicOperationalErrorCode;
    NSString * _publicOperationalErrorDomain;
    unsigned int  _publicSuccess;
    unsigned long long  _timestamp;
    unsigned int  _updated;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int hasAvatar;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasHasAvatar;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasPrivateOperationalErrorCode;
@property (nonatomic, readonly) bool hasPrivateOperationalErrorDomain;
@property (nonatomic) bool hasPrivateSuccess;
@property (nonatomic) bool hasPublicOperationalErrorCode;
@property (nonatomic, readonly) bool hasPublicOperationalErrorDomain;
@property (nonatomic) bool hasPublicSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUpdated;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int privateOperationalErrorCode;
@property (nonatomic, retain) NSString *privateOperationalErrorDomain;
@property (nonatomic) unsigned int privateSuccess;
@property (nonatomic) unsigned int publicOperationalErrorCode;
@property (nonatomic, retain) NSString *publicOperationalErrorDomain;
@property (nonatomic) unsigned int publicSuccess;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int updated;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hasAvatar;
- (bool)hasConnectionType;
- (bool)hasHasAvatar;
- (bool)hasLinkQuality;
- (bool)hasPrivateOperationalErrorCode;
- (bool)hasPrivateOperationalErrorDomain;
- (bool)hasPrivateSuccess;
- (bool)hasPublicOperationalErrorCode;
- (bool)hasPublicOperationalErrorDomain;
- (bool)hasPublicSuccess;
- (bool)hasTimestamp;
- (bool)hasUpdated;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)privateOperationalErrorCode;
- (id)privateOperationalErrorDomain;
- (unsigned int)privateSuccess;
- (unsigned int)publicOperationalErrorCode;
- (id)publicOperationalErrorDomain;
- (unsigned int)publicSuccess;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setHasAvatar:(unsigned int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasHasAvatar:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasPrivateOperationalErrorCode:(bool)arg1;
- (void)setHasPrivateSuccess:(bool)arg1;
- (void)setHasPublicOperationalErrorCode:(bool)arg1;
- (void)setHasPublicSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUpdated:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setPrivateOperationalErrorCode:(unsigned int)arg1;
- (void)setPrivateOperationalErrorDomain:(id)arg1;
- (void)setPrivateSuccess:(unsigned int)arg1;
- (void)setPublicOperationalErrorCode:(unsigned int)arg1;
- (void)setPublicOperationalErrorDomain:(id)arg1;
- (void)setPublicSuccess:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUpdated:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)updated;
- (void)writeTo:(id)arg1;

@end
