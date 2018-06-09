/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDContact : NSObject <NSCopying, NSSecureCoding> {
    NSString * _customIdentifier;
    NSString * _displayName;
    unsigned long long  _displayType;
    NSString * _identifier;
    NSString * _personId;
    unsigned long long  _personIdType;
    _CDContactStatistics * _statistics;
    unsigned long long  _type;
}

@property (retain) NSString *customIdentifier;
@property (retain) NSString *displayName;
@property unsigned long long displayType;
@property (readonly) NSString *handle;
@property (retain) NSString *identifier;
@property (retain) NSString *identifierType;
@property (retain) NSString *personId;
@property unsigned long long personIdType;
@property (retain) _CDContactStatistics *statistics;
@property unsigned long long type;

+ (id)_CDValueForContactProperty:(id)arg1;
+ (id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactPropertiesForContacts:(id)arg1;
+ (id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned long long)arg4;
+ (id)contactWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (unsigned long long)convertDisplayType:(long long)arg1;
+ (unsigned long long)convertHandleType:(long long)arg1;
+ (id)normalizedStringKey:(id)arg1;
+ (id)predicateForContact:(id)arg1;
+ (id)predicateForContactWithDisplayName:(id)arg1;
+ (id)predicateForContactWithIdentifier:(id)arg1;
+ (id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned long long)arg2;
+ (id)predicateForContactWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)typeAsCNContactPropertyKey:(unsigned long long)arg1;
+ (unsigned long long)typeFromString:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)contactProperty;
- (id)contactPropertyWithMechanismHint:(long long)arg1;
- (id)contactPropertyWithOptionalMechanismHint:(long long*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)displayName;
- (unsigned long long)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(id)arg1;
- (id)initWithINPerson:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)mayContainPrefix:(id)arg1;
- (bool)mayRepresentSamePersonAs:(id)arg1;
- (void)mergeWithContact:(id)arg1;
- (id)personId;
- (unsigned long long)personIdType;
- (void)setCustomIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayType:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierType:(id)arg1;
- (void)setPersonId:(id)arg1;
- (void)setPersonIdType:(unsigned long long)arg1;
- (void)setStatistics:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)statistics;
- (unsigned long long)type;

@end
