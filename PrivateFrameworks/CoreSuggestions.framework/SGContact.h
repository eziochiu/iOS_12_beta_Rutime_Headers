/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGContact : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _emailAddresses;
    NSArray * _instantMessageAddresses;
    SGName * _name;
    NSArray * _phones;
    NSArray * _postalAddresses;
    SGRecordId * _recordId;
    unsigned long long  _significance;
    unsigned long long  _significanceOrigin;
    NSArray * _socialProfiles;
}

@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSArray *instantMessageAddresses;
@property (nonatomic, copy) SGName *name;
@property (nonatomic, copy) NSArray *phones;
@property (nonatomic, copy) NSArray *postalAddresses;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic) unsigned long long significance;
@property (nonatomic) unsigned long long significanceOrigin;
@property (nonatomic, copy) NSArray *socialProfiles;

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addresses;
- (id)cnContact;
- (bool)containsSuggestions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailForRecordId:(id)arg1;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNonTrivialInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7;
- (id)instantMessageAddresses;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContact:(id)arg1;
- (id)name;
- (id)phones;
- (id)postalAddresses;
- (id)recordId;
- (unsigned long long)richness;
- (void)setEmailAddresses:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setSignificance:(unsigned long long)arg1;
- (void)setSignificanceOrigin:(unsigned long long)arg1;
- (void)setSocialProfiles:(id)arg1;
- (unsigned long long)significance;
- (unsigned long long)significanceOrigin;
- (id)socialProfiles;

@end
