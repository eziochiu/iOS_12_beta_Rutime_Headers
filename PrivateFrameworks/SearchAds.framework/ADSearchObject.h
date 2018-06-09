/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADSearchObject : NSObject {
    NSString * _deviceRequestID;
    NSError * _error;
    NSString * _routingInfoData;
    NSString * _sponsoredSearchRequestData;
    NSString * _userTargetingIdentifier;
}

@property (nonatomic, retain) NSString *deviceRequestID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *routingInfoData;
@property (nonatomic, retain) NSString *sponsoredSearchRequestData;
@property (nonatomic, retain) NSString *userTargetingIdentifier;

- (void).cxx_destruct;
- (id)deviceRequestID;
- (id)error;
- (id)init;
- (id)routingInfoData;
- (void)setDeviceRequestID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRoutingInfoData:(id)arg1;
- (void)setSponsoredSearchRequestData:(id)arg1;
- (void)setUserTargetingIdentifier:(id)arg1;
- (id)sponsoredSearchRequestData;
- (id)userTargetingIdentifier;

@end
