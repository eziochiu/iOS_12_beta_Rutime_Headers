/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSavedPassword : NSObject {
    bool  __domainEligibleForPasswordReuseWarning;
    NSSet * _associatedDomains;
    NSDate * _earliestModifiedDateForSites;
    NSString * _highLevelDomain;
    NSString * _password;
    NSMutableDictionary * _siteToProtectionSpaces;
    NSMutableArray * _sites;
    NSString * _user;
    bool  _userIsNeverSaveMarker;
}

@property (getter=_isDomainEligibleForPasswordReuseWarning, nonatomic) bool _domainEligibleForPasswordReuseWarning;
@property (nonatomic, readonly) NSSet *associatedDomains;
@property (nonatomic, readonly) NSDate *earliestModifiedDateForSites;
@property (nonatomic, readonly) NSString *highLevelDomain;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSArray *protectionSpaces;
@property (nonatomic, readonly) bool qualifiesForPasswordAuditing;
@property (nonatomic, readonly) NSArray *sites;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) bool userIsNeverSaveMarker;
@property (nonatomic, readonly) NSString *userVisibleHighLevelDomain;
@property (nonatomic, readonly) NSArray *userVisibleSites;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer { }*)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(id /* block */)arg5;
+ (bool)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer { }*)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4;

- (void).cxx_destruct;
- (void)_addModificationDate:(id)arg1;
- (void)_addProtectionSpace:(id)arg1 forSite:(id)arg2;
- (void)_adoptSitesFromSavedPassword:(id)arg1;
- (bool)_containsProtectionSpace:(id)arg1;
- (void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2;
- (void)_deleteCredentials;
- (void)_deleteCredentialsForSite:(id)arg1;
- (id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3 associatedDomains:(id)arg4;
- (bool)_isDomainEligibleForPasswordReuseWarning;
- (bool)_matchesSearchPattern:(id)arg1 matchAgainstUser:(bool)arg2;
- (void)_setUser:(id)arg1 password:(id)arg2;
- (void)addObject:(id)arg1;
- (id)associatedDomains;
- (long long)compare:(id)arg1;
- (id)description;
- (id)earliestModifiedDateForSites;
- (bool)hasDuplicatedPasswordWithSavedPassword:(id)arg1;
- (unsigned long long)hash;
- (id)highLevelDomain;
- (bool)isDuplicateWithoutUserNameOfPassword:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesDomain:(id)arg1;
- (bool)matchesServiceNameHintString:(id)arg1;
- (bool)matchesUserTypedSearchPattern:(id)arg1;
- (id)password;
- (id)protectionSpaces;
- (bool)qualifiesForPasswordAuditing;
- (void)set_domainEligibleForPasswordReuseWarning:(bool)arg1;
- (id)sites;
- (id)user;
- (bool)userIsNeverSaveMarker;
- (id)userVisibleHighLevelDomain;
- (id)userVisibleSites;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (void)webui_getTitle:(id*)arg1 detail:(id*)arg2 forTableViewCell:(id)arg3 withSearchPattern:(id)arg4 warningImage:(id)arg5 leftToRight:(bool)arg6;

@end
