/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemDoNotDisturbDeclaration_Status : CEMPayloadBase

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)build;

- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;

@end
