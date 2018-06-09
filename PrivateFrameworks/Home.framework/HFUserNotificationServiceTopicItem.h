/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationServiceTopicItem : HFItem {
    HMHome * _home;
    HFUserNotificationServiceTopic * _topic;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)topic;

@end
