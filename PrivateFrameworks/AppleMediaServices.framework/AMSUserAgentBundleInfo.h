/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserAgentBundleInfo : NSObject {
    NSString * _clientName;
    NSString * _clientVersion;
    NSString * _identifier;
    NSDictionary * _infoPlist;
}

@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *infoPlist;

+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2;
+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2 clientVersion:(id)arg3;
+ (id)infoForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_clientNameFromIdentifier:(id)arg1 infoPlist:(id)arg2 preferredClientName:(id)arg3;
- (id)_clientVersionFromIdentifier:(id)arg1 clientName:(id)arg2 infoPlist:(id)arg3 preferredVersion:(id)arg4;
- (id)_infoPlistFromIdentifier:(id)arg1;
- (id)clientName;
- (id)clientVersion;
- (id)identifier;
- (id)infoPlist;
- (id)initWithIdentifier:(id)arg1 preferredClientName:(id)arg2 preferredClientVersion:(id)arg3;
- (void)setIdentifier:(id)arg1;

@end