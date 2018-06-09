/* made by EzioChiu.
 */

@protocol CRKCardPresentationDelegate <NSObject>

@optional

- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardSectionViewProviderOne:(id <CRKIdentifiedCardSectionViewProviding>)arg2 providerTwo:(id <CRKIdentifiedCardSectionViewProviding>)arg3;
- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardViewControllerProviderOne:(id <CRKIdentifiedProviding>)arg2 providerTwo:(id <CRKIdentifiedProviding>)arg3;
- (void)cardPresentation:(id <CRKCardPresenting>)arg1 willTransitionFromCardViewController:(UIViewController<CRKCardViewControlling> *)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id <CRKAnimationCoordinating>)arg4;
- (<CRKCardViewControllerDelegate> *)cardViewControllerDelegate;
- (long long)semanticContentAttributeForCardPresentation:(id <CRKCardPresenting>)arg1;

@end
