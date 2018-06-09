/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {
    long long  _backgroundType;
    NSString * _emailAddress;
    NSString * _fullname;
    bool  _localFallback;
    NSNumber * _memberDSID;
    NSString * _memberHashedDSID;
    double  _monogramDiameter;
    NSString * _phoneNumber;
    unsigned long long  _requestedSize;
    double  _requiredHeight;
    double  _requiredWidth;
    bool  _useMonogramAsLastResort;
}

@property long long backgroundType;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullname;
@property (readonly) bool localFallback;
@property (readonly, copy) NSNumber *memberDSID;
@property (readonly, copy) NSString *memberHashedDSID;
@property double monogramDiameter;
@property long long monogramStyle;
@property (copy) NSString *phoneNumber;
@property (readonly) unsigned long long requestedSize;
@property double requiredHeight;
@property double requiredWidth;
@property bool useMonogramAsLastResort;

- (void).cxx_destruct;
- (long long)backgroundType;
- (id)emailAddress;
- (id)fullname;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(bool)arg3;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(bool)arg3 connectionProvider:(id)arg4;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(bool)arg3;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(bool)arg3 connectionProvider:(id)arg4;
- (bool)localFallback;
- (id)memberDSID;
- (id)memberHashedDSID;
- (double)monogramDiameter;
- (long long)monogramStyle;
- (id)phoneNumber;
- (id)requestOptions;
- (unsigned long long)requestedSize;
- (double)requiredHeight;
- (double)requiredWidth;
- (void)setBackgroundType:(long long)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFullname:(id)arg1;
- (void)setMonogramDiameter:(double)arg1;
- (void)setMonogramStyle:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRequiredHeight:(double)arg1;
- (void)setRequiredWidth:(double)arg1;
- (void)setUseMonogramAsLastResort:(bool)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;
- (bool)useMonogramAsLastResort;

@end
