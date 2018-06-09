/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFSystemInfo_ios : HMFSystemInfo {
    struct MGNotificationTokenStruct { } * _notificationToken;
}

@property (readonly) struct MGNotificationTokenStruct { }*notificationToken;

- (void)__initialize;
- (void)dealloc;
- (struct MGNotificationTokenStruct { }*)notificationToken;
- (void)startMonitoringSystemChanges;
- (void)updateName;

@end
