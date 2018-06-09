/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider {
    HMUser * _user;
}

@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;
- (id)initWithHome:(id)arg1 user:(id)arg2;
- (id)invalidationReasons;
- (id)user;

@end
