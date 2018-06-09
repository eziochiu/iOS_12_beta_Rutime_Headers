/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFamilyInfoLookupResult : NSObject {
    NSArray * _familyMembers;
}

@property (nonatomic, readonly) NSArray *familyMembers;

+ (id)_familyMembersFromServerResponse:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)familyMembers;
- (id)initWithServerResponse:(id)arg1;

@end
