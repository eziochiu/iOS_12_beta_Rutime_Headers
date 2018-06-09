/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase {
    NSData * _statusUnlockToken;
}

@property (nonatomic, copy) NSData *statusUnlockToken;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildWithUnlockToken:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusUnlockToken:(id)arg1;
- (id)statusUnlockToken;

@end
