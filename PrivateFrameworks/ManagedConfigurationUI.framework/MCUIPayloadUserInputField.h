/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIPayloadUserInputField : NSObject {
    NSMutableDictionary * _fieldDictionary;
    id  _response;
}

@property (nonatomic, readonly) long long capitalizationType;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, retain) NSString *fieldDescription;
@property (nonatomic, retain) NSString *finePrint;
@property (nonatomic, readonly) int flags;
@property (nonatomic, readonly) bool isDevicePasscodeField;
@property (nonatomic, readonly) bool isPassword;
@property (nonatomic, readonly) bool isRequired;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) NSNumber *minimumLength;
@property (nonatomic, readonly) NSString *mismatchDescription;
@property (nonatomic, readonly) bool needsRetype;
@property (nonatomic, readonly) NSString *placeholderValue;
@property (nonatomic, readonly) NSString *retypeDescription;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_uuid;
- (long long)capitalizationType;
- (id)defaultValue;
- (id)description;
- (id)fieldDescription;
- (id)finePrint;
- (int)flags;
- (id)initWithFieldDictionary:(id)arg1;
- (bool)isDevicePasscodeField;
- (bool)isPassword;
- (bool)isRequired;
- (long long)keyboardType;
- (id)minimumLength;
- (id)mismatchDescription;
- (bool)needsRetype;
- (id)placeholderValue;
- (id)responseDictionary;
- (id)retypeDescription;
- (void)setFieldDescription:(id)arg1;
- (void)setFinePrint:(id)arg1;
- (void)setUserResponse:(id)arg1;
- (id)title;
- (int)type;

@end
