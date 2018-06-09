/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFURLSpoofingMitigator : NSObject {
    bool  _UIShouldReflectCommittedURLInsteadOfCurrentURL;
    NSDate * _dateOfStartOfLastProvisionalNavigation;
    unsigned long long  _recentlyInterruptedNavigationCount;
}

@property (nonatomic, readonly) bool UIShouldReflectCommittedURLInsteadOfCurrentURL;

+ (bool)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void).cxx_destruct;
- (bool)UIShouldReflectCommittedURLInsteadOfCurrentURL;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(bool)arg1;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)arg1;
- (void)didStartProvisionalNavigation;

@end
