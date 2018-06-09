/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingIOChannelSubscription : NSObject {
    NSString * _driverGroupName;
    NSMutableDictionary * _subscribedChannels;
    struct __IOReportSubscriptionCF { } * _subscription;
}

@property (retain) NSString *driverGroupName;
@property (retain) NSMutableDictionary *subscribedChannels;
@property struct __IOReportSubscriptionCF { }*subscription;

- (void).cxx_destruct;
- (id)driverGroupName;
- (id)initWithDriverGroupName:(id)arg1;
- (void)setDriverGroupName:(id)arg1;
- (void)setSubscribedChannels:(id)arg1;
- (void)setSubscription:(struct __IOReportSubscriptionCF { }*)arg1;
- (id)subscribedChannels;
- (struct __IOReportSubscriptionCF { }*)subscription;

@end
