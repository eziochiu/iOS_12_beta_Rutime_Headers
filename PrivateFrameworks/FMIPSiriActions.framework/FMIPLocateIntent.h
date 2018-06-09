/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
 */

@interface FMIPLocateIntent : INIntent <FMIPIdentifiable>

@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) INIdentifierString *deviceId;

+ (id)identityTag;
+ (id)locateIntentWithDeviceId:(id)arg1 deviceClass:(id)arg2 deviceDisplayName:(id)arg3;

@end
