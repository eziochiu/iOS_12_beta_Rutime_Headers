/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityDecorateLiveOperation : WLKNetworkRequestOperation {
    NSString * _channelID;
    NSDictionary * _scheduleDictionary;
    NSString * _serviceID;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSDictionary *scheduleDictionary;
@property (nonatomic, readonly, copy) NSString *serviceID;

- (void).cxx_destruct;
- (id)channelID;
- (void)didFinish;
- (id)initWithChannelID:(id)arg1 serviceID:(id)arg2;
- (id)responseProcessor;
- (id)scheduleDictionary;
- (id)serviceID;

@end
