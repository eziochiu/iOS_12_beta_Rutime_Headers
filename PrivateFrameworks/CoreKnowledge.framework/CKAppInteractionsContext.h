/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {
    void _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    void numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

@property (nonatomic, copy) NSDictionary *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
@property (nonatomic, copy) NSDictionary *numberOfDiscardedDonationsByIntentTypeAndBundleId;
@property (nonatomic, readonly) NSDictionary *outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)incrementNumberOfOutOfAppLaunchBoundaryDonationsForBundleId:(id)arg1 intent:(id)arg2;
- (id)init;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)numberOfDiscardedDonationsByIntentTypeAndBundleId;
- (id)outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
- (void)setNumberOfDiscardedDonationsByIntentTypeAndBundleId:(id)arg1;
- (void)set_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId:(id)arg1;
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;

@end
