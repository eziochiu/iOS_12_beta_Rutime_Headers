/* made by EzioChiu.
 */

@protocol PXInboxModelTitleProvider <NSObject>

@required

- (NSAttributedString *)subtitleForModel:(id <PXInboxModel>)arg1 withTraitCollection:(UITraitCollection *)arg2;
- (NSAttributedString *)titleForModel:(id <PXInboxModel>)arg1 withTraitCollection:(UITraitCollection *)arg2;

@end
