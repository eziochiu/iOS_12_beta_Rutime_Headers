/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timeLoadingSpinnerIsVisibleInSeconds : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    AWDMailMessage * _message;
    long long  _timeLoadingSpinnerIsVisibleInSeconds;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasTimeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDMailMessage *message;
@property (nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (bool)hasTimeLoadingSpinnerIsVisibleInSeconds;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeLoadingSpinnerIsVisibleInSeconds:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setTimeLoadingSpinnerIsVisibleInSeconds:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeLoadingSpinnerIsVisibleInSeconds;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
