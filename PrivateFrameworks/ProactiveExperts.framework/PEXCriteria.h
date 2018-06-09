/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned int  _fields;
    NSString * _label;
    NSString * _localeIdentifier;
    NSArray * _people;
    NSArray * _recipients;
    unsigned char  _semanticTag;
    NSArray * _subFields;
    unsigned char  _subtype;
    unsigned char  _time;
    unsigned char  _type;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned int fields;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic) unsigned char semanticTag;
@property (nonatomic, retain) NSArray *subFields;
@property (nonatomic) unsigned char subtype;
@property (nonatomic) unsigned char time;
@property (nonatomic) unsigned char type;

+ (unsigned int)_fieldsFromStrings:(id)arg1;
+ (id)_labelFromLMFieldString:(id)arg1 qualifiers:(id)arg2;
+ (id)_peopleNamesFromLMQualifiers:(id)arg1;
+ (unsigned char)_semanticTagFromString:(id)arg1;
+ (id)_subfieldsFromString:(id)arg1;
+ (unsigned char)_subtypeFromString:(id)arg1;
+ (unsigned char)_timeFromString:(id)arg1;
+ (unsigned char)_typeFromString:(id)arg1;
+ (id)criteriaFromDECQueryCriteria:(id)arg1;
+ (id)criteriaFromLMTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)criteriaWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 label:(id)arg6 people:(id)arg7 localeIdentifier:(id)arg8 bundleIdentifier:(id)arg9 recipients:(id)arg10;
+ (id)criteriaWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fields;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCriteria:(id)arg1;
- (id)label;
- (id)localeIdentifier;
- (id)people;
- (id)recipients;
- (unsigned char)semanticTag;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFields:(unsigned int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSemanticTag:(unsigned char)arg1;
- (void)setSubFields:(id)arg1;
- (void)setSubtype:(unsigned char)arg1;
- (void)setTime:(unsigned char)arg1;
- (void)setType:(unsigned char)arg1;
- (id)subFields;
- (unsigned char)subtype;
- (unsigned char)time;
- (unsigned char)type;

@end
