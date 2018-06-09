/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBDevicePushTokenUpdateRequest : PBRequest <NSCopying> {
    NTPBDeviceInfo * _deviceInfoToAdd;
    NTPBDeviceInfo * _deviceInfoToRemove;
    NSString * _notificationUserId;
    NSString * _userStorefrontId;
}

@property (nonatomic, retain) NTPBDeviceInfo *deviceInfoToAdd;
@property (nonatomic, retain) NTPBDeviceInfo *deviceInfoToRemove;
@property (nonatomic, readonly) bool hasDeviceInfoToAdd;
@property (nonatomic, readonly) bool hasDeviceInfoToRemove;
@property (nonatomic, readonly) bool hasNotificationUserId;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic, retain) NSString *notificationUserId;
@property (nonatomic, retain) NSString *userStorefrontId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfoToAdd;
- (id)deviceInfoToRemove;
- (id)dictionaryRepresentation;
- (bool)hasDeviceInfoToAdd;
- (bool)hasDeviceInfoToRemove;
- (bool)hasNotificationUserId;
- (bool)hasUserStorefrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationUserId;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfoToAdd:(id)arg1;
- (void)setDeviceInfoToRemove:(id)arg1;
- (void)setNotificationUserId:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end
