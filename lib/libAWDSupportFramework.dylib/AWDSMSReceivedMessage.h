/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSMSReceivedMessage : PBCodable <NSCopying> {
    int  _ctError;
    int  _fzError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ctError : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
    }  _has;
    unsigned int  _hasAttachments;
    unsigned int  _isFromEmail;
    unsigned int  _isFromPhoneNumber;
    unsigned int  _isGroupMessage;
    unsigned long long  _timestamp;
}

@property (nonatomic) int ctError;
@property (nonatomic) int fzError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) unsigned int hasAttachments;
@property (nonatomic) bool hasCtError;
@property (nonatomic) bool hasFzError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasHasAttachments;
@property (nonatomic) bool hasIsFromEmail;
@property (nonatomic) bool hasIsFromPhoneNumber;
@property (nonatomic) bool hasIsGroupMessage;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isFromEmail;
@property (nonatomic) unsigned int isFromPhoneNumber;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)ctError;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fzError;
- (id)guid;
- (unsigned int)hasAttachments;
- (bool)hasCtError;
- (bool)hasFzError;
- (bool)hasGuid;
- (bool)hasHasAttachments;
- (bool)hasIsFromEmail;
- (bool)hasIsFromPhoneNumber;
- (bool)hasIsGroupMessage;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isFromEmail;
- (unsigned int)isFromPhoneNumber;
- (unsigned int)isGroupMessage;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCtError:(int)arg1;
- (void)setFzError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (void)setHasCtError:(bool)arg1;
- (void)setHasFzError:(bool)arg1;
- (void)setHasHasAttachments:(bool)arg1;
- (void)setHasIsFromEmail:(bool)arg1;
- (void)setHasIsFromPhoneNumber:(bool)arg1;
- (void)setHasIsGroupMessage:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
