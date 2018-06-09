/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int loadingError : 1; 
        unsigned int mimeError : 1; 
    }  _has;
    int  _loadingError;
    AWDMailMessage * _message;
    int  _mimeError;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLoadingError;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasMimeError;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int loadingError;
@property (nonatomic, retain) AWDMailMessage *message;
@property (nonatomic) int mimeError;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsLoadingError:(id)arg1;
- (int)StringAsMimeError:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLoadingError;
- (bool)hasMessage;
- (bool)hasMimeError;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)loadingError;
- (id)loadingErrorAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (int)mimeError;
- (id)mimeErrorAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLoadingError:(bool)arg1;
- (void)setHasMimeError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLoadingError:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setMimeError:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
