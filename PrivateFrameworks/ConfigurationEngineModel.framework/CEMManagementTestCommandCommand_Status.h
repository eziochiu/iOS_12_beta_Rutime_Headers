/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMManagementTestCommandCommand_Status : CEMPayloadBase {
    NSString * _statusEcho;
}

@property (nonatomic, copy) NSString *statusEcho;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildWithEcho:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusEcho:(id)arg1;
- (id)statusEcho;

@end
