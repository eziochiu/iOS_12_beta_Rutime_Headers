/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeResource : NSObject {
    RMAskForTimeClient * _askForTimeClient;
    id /* block */  _changeHandler;
    NSString * _requestedResourceIdentifier;
    NSString * _resourceDisplayName;
    long long  _usageType;
}

@property (nonatomic, retain) RMAskForTimeClient *askForTimeClient;
@property (nonatomic, copy) id /* block */ changeHandler;
@property (nonatomic, readonly, copy) NSString *requestedResourceIdentifier;
@property (nonatomic, readonly, copy) NSString *resourceDisplayName;
@property (nonatomic, readonly) long long usageType;

- (void).cxx_destruct;
- (id)askForTimeClient;
- (void)cancelOutstandingRequestsWithCompletion:(id /* block */)arg1;
- (id /* block */)changeHandler;
- (void)checkRequestForAdditionalTimeWithResponseHandler:(id /* block */)arg1;
- (id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(id /* block */)arg4;
- (void)requestAdditionalTime:(double)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestIsEqual:(id)arg1;
- (id)requestedResourceIdentifier;
- (id)resourceDisplayName;
- (void)setAskForTimeClient:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (long long)usageType;

@end
