/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMWeeklyReportUserNotificationContext : RMUserNotificationContext {
    NSString * _notificationBodyKey;
    NSData * _weeklyReportData;
}

@property (nonatomic, retain) NSString *notificationBodyKey;
@property (nonatomic, retain) NSData *weeklyReportData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedUserNotificationBodyKey;
- (id)localizedUserNotificationTitleKey;
- (id)notificationBodyKey;
- (void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2;
- (void)setNotificationBodyKey:(id)arg1;
- (void)setWeeklyReportData:(id)arg1;
- (id)userInfo;
- (id)weeklyReportData;

@end
