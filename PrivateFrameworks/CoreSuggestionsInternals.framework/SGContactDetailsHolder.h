/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactDetailsHolder : NSObject {
    NSArray * _emailAddresses;
    NSArray * _instantMessageAddresses;
    NSArray * _phoneNumbers;
    NSArray * _postalAddresses;
    NSArray * _socialProfiles;
}

@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSArray *instantMessageAddresses;
@property (nonatomic, retain) NSArray *phoneNumbers;
@property (nonatomic, retain) NSArray *postalAddresses;
@property (nonatomic, retain) NSArray *socialProfiles;

- (void).cxx_destruct;
- (id)emailAddresses;
- (id)instantMessageAddresses;
- (id)phoneNumbers;
- (id)postalAddresses;
- (void)setEmailAddresses:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (id)socialProfiles;

@end
