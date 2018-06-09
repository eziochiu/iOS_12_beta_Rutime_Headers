/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationEntity : PBCodable <NSCopying> {
    struct { 
        unsigned int notificationType : 1; 
        unsigned int subscriberType : 1; 
    }  _has;
    int  _notificationType;
    int  _subscriberType;
    NSMutableArray * _tagIds;
}

@property (nonatomic) bool hasNotificationType;
@property (nonatomic) bool hasSubscriberType;
@property (nonatomic) int notificationType;
@property (nonatomic) int subscriberType;
@property (nonatomic, retain) NSMutableArray *tagIds;

+ (Class)tagIdType;

- (void).cxx_destruct;
- (void)addTagId:(id)arg1;
- (void)clearTagIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNotificationType;
- (bool)hasSubscriberType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)notificationType;
- (bool)readFrom:(id)arg1;
- (void)setHasNotificationType:(bool)arg1;
- (void)setHasSubscriberType:(bool)arg1;
- (void)setNotificationType:(int)arg1;
- (void)setSubscriberType:(int)arg1;
- (void)setTagIds:(id)arg1;
- (int)subscriberType;
- (id)tagIdAtIndex:(unsigned long long)arg1;
- (id)tagIds;
- (unsigned long long)tagIdsCount;
- (void)writeTo:(id)arg1;

@end
