/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) unsigned long long presentationGesture;
@property (nonatomic) bool shouldEnableInternalModules;
@property (nonatomic) bool shouldEnablePrototypeFeatures;
@property (nonatomic) bool shouldEnableTigrisCarryUI;
@property (nonatomic) unsigned long long userInvocationCount;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (unsigned long long)_defaultPresentationGesture;
- (id)init;
- (void)setShouldEnableTigrisCarryUI:(bool)arg1;
- (bool)shouldEnableTigrisCarryUI;

@end
