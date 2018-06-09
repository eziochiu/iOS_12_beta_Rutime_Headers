/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase {
    NSString * _eventmessageEcho;
}

@property (nonatomic, copy) NSString *eventmessageEcho;

+ (id)allowedEventMessageKeys;
+ (id)allowedReasons;
+ (id)buildWithEcho:(id)arg1;

- (void).cxx_destruct;
- (id)eventmessageEcho;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setEventmessageEcho:(id)arg1;

@end
