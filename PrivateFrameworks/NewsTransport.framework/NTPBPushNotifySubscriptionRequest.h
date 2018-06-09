/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {
    NTPBDeviceInfo * _deviceInfo;
    NSMutableArray * _notificationEntitys;
    NSString * _notificationUserId;
    NSString * _userStorefrontId;
}

@property (nonatomic, retain) NTPBDeviceInfo *deviceInfo;
@property (nonatomic, readonly) bool hasDeviceInfo;
@property (nonatomic, readonly) bool hasNotificationUserId;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic, retain) NSMutableArray *notificationEntitys;
@property (nonatomic, retain) NSString *notificationUserId;
@property (nonatomic, retain) NSString *userStorefrontId;

+ (Class)notificationEntityType;

- (void).cxx_destruct;
- (void)addNotificationEntity:(id)arg1;
- (void)clearNotificationEntitys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (bool)hasDeviceInfo;
- (bool)hasNotificationUserId;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationEntityAtIndex:(unsigned long long)arg1;
- (id)notificationEntitys;
- (unsigned long long)notificationEntitysCount;
- (id)notificationUserId;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setNotificationEntitys:(id)arg1;
- (void)setNotificationUserId:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
