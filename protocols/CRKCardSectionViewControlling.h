/* made by EzioChiu.
 */

@protocol CRKCardSectionViewControlling <CRKEventResponding>

@required

- (<CRKCardSectionViewControllingDelegate> *)cardSectionViewControllingDelegate;
- (void)setCardSectionViewControllingDelegate:(id <CRKCardSectionViewControllingDelegate>)arg1;

@end
