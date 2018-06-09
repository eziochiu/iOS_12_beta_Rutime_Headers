/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFCredential : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    NSDictionary * _customAttributes;
    NSString * _description;
    NSString * _label;
    NSDate * _modificationDate;
    NSString * _persistentIdentifier;
    _SFServiceIdentifier * _primaryServiceIdentifier;
    NSArray * _supplementaryServiceIdentifiers;
}

@property (setter=_setCreationDate:, nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDictionary *customAttributes;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedLabel;
@property (setter=_setModificationDate:, nonatomic, copy) NSDate *modificationDate;
@property (setter=_setPersistentIdentifier:, nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, retain) _SFServiceIdentifier *primaryServiceIdentifier;
@property (nonatomic, retain) NSArray *supplementaryServiceIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPrimaryServiceIdentifier:(id)arg1 supplementaryServiceIdentiifers:(id)arg2;
- (void)_setCreationDate:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (void)_setPersistentIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)customAttributes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)modificationDate;
- (id)persistentIdentifier;
- (id)primaryServiceIdentifier;
- (void)setCustomAttributes:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;
- (void)setPrimaryServiceIdentifier:(id)arg1;
- (void)setSupplementaryServiceIdentifiers:(id)arg1;
- (id)supplementaryServiceIdentifiers;

@end
