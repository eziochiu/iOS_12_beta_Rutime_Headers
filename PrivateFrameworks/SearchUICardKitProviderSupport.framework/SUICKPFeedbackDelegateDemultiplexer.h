/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate> {
    <SearchUIFeedbackDelegate> * _defaultDelegate;
    NSMutableDictionary * _feedbackDelegatesByCardSectionIdentifiers;
    NSMutableDictionary * _feedbackDelegatesByCardSectionViewIds;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SearchUIFeedbackDelegate> *defaultDelegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *feedbackDelegatesByCardSectionIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *feedbackDelegatesByCardSectionViewIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_delegateForFeedback:(id)arg1;
- (id)_delegateForView:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(bool)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (id)defaultDelegate;
- (void)didEngageCardSection:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (id)feedbackDelegatesByCardSectionIdentifiers;
- (id)feedbackDelegatesByCardSectionViewIds;
- (id)init;
- (void)presentViewController:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (void)setDefaultDelegate:(id)arg1;
- (bool)shouldHandleCardSectionEngagement:(id)arg1;

@end
