/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageCloudKitAttachmentDownloadFailed : PBCodable <NSCopying> {
    NSString * _attachmentGuid;
    unsigned int  _attachmentSize;
    unsigned int  _connectionType;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int errorCode : 1; 
        unsigned int linkQuality : 1; 
    }  _has;
    int  _linkQuality;
    NSString * _messageGuid;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *attachmentGuid;
@property (nonatomic) unsigned int attachmentSize;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, readonly) bool hasAttachmentGuid;
@property (nonatomic) bool hasAttachmentSize;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic, readonly) bool hasMessageGuid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic, retain) NSString *messageGuid;
@property (nonatomic) unsigned long long timestamp;

- (id)attachmentGuid;
- (unsigned int)attachmentSize;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasAttachmentGuid;
- (bool)hasAttachmentSize;
- (bool)hasConnectionType;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasLinkQuality;
- (bool)hasMessageGuid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (id)messageGuid;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentGuid:(id)arg1;
- (void)setAttachmentSize:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasAttachmentSize:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setMessageGuid:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
