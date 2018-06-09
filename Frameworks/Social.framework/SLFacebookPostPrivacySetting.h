/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _name;
    NSDictionary * _parameters;
    int  _type;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSDictionary *parameters;
@property int type;

+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parametersJSONStringRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)parameters;
- (id)parametersFormValueString;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
