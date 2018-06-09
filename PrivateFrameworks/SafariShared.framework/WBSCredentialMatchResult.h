/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCredentialMatchResult : NSObject {
    NSArray * _associatedDomainMatches;
    NSArray * _exactMatches;
    NSArray * _potentialMatches;
}

@property (nonatomic, readonly, copy) NSArray *associatedDomainMatches;
@property (nonatomic, readonly, copy) NSArray *exactMatches;
@property (nonatomic, readonly, copy) NSArray *potentialMatches;

- (void).cxx_destruct;
- (id)associatedDomainMatches;
- (id)exactMatches;
- (id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3;
- (id)potentialMatches;

@end
