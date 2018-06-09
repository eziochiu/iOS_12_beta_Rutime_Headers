/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {
    int  _badgeCount;
    NSString * _category;
    NSString * _dialog;
    struct { 
        unsigned int badgeCount : 1; 
        unsigned int source : 1; 
        unsigned int isRead : 1; 
    }  _has;
    bool  _isRead;
    NSData * _payload;
    NSString * _sound;
    int  _source;
    NSString * _uuid;
}

@property (nonatomic) int badgeCount;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *dialog;
@property (nonatomic) bool hasBadgeCount;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasDialog;
@property (nonatomic) bool hasIsRead;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasSound;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool isRead;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSString *sound;
@property (nonatomic) int source;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (int)badgeCount;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialog;
- (id)dictionaryRepresentation;
- (bool)hasBadgeCount;
- (bool)hasCategory;
- (bool)hasDialog;
- (bool)hasIsRead;
- (bool)hasPayload;
- (bool)hasSound;
- (bool)hasSource;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRead;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setBadgeCount:(int)arg1;
- (void)setCategory:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setHasBadgeCount:(bool)arg1;
- (void)setHasIsRead:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)sound;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
