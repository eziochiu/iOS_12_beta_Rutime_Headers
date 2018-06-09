/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBSBatteryStatusCommand : SADomainCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (void)batteryDeviceControllerWithCompletion:(id /* block */)arg1;
+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (bool)requiresResponse;

@end
