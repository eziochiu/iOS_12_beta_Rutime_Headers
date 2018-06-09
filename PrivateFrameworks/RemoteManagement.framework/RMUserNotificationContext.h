/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUserNotificationContext : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSArray * _localizedUserNotificationBodyArguments;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *localizedUserNotificationBodyArguments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryIdentifier;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedUserNotificationBodyArguments;
- (id)localizedUserNotificationBodyKey;
- (id)localizedUserNotificationHeaderKey;
- (id)localizedUserNotificationSubTitleKey;
- (id)localizedUserNotificationTitleKey;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedUserNotificationBodyArguments:(id)arg1;
- (id)userInfo;

@end
