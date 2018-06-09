/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySelectionSettingItem : NSObject <HFHomeKitObject, NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    HMAccessorySelectionSetting * _setting;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property HMAccessorySelectionSetting *setting;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)localizedTitle;
- (void)setSetting:(id)arg1;
- (id)setting;
- (id)title;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)uniqueIdentifier;

@end
