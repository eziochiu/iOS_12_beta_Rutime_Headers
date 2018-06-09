/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySetupPayload : NSObject {
    HMSetupAccessoryBrowsingRequest * _accessoryBrowsingRequest;
    HMSetupAccessoryPayload * _internalSetupPayload;
    NSString * _suggestedRoomName;
}

@property (retain) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest;
@property (retain) HMSetupAccessoryPayload *internalSetupPayload;
@property (copy) NSString *suggestedRoomName;

- (void).cxx_destruct;
- (bool)_parseURLForBrowsingRequest:(id)arg1;
- (id)accessoryBrowsingRequest;
- (id)initWithURL:(id)arg1;
- (id)internalSetupPayload;
- (void)setAccessoryBrowsingRequest:(id)arg1;
- (void)setInternalSetupPayload:(id)arg1;
- (void)setSuggestedRoomName:(id)arg1;
- (id)suggestedRoomName;

@end
