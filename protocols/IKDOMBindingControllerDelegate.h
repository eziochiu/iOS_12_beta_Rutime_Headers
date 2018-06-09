/* made by EzioChiu.
 */

@protocol IKDOMBindingControllerDelegate <NSObject>

@optional

- (NSSet *)additionalKeysToResolveForDOMBindingController:(IKDOMBindingController *)arg1;
- (bool)domBindingController:(IKDOMBindingController *)arg1 applyValue:(id)arg2 forKey:(NSString *)arg3;
- (void)domBindingController:(IKDOMBindingController *)arg1 didLoadBinding:(IKDataBinding *)arg2;
- (void)domBindingController:(IKDOMBindingController *)arg1 didResolveKeys:(NSSet *)arg2;
- (bool)domBindingController:(IKDOMBindingController *)arg1 doKeysAffectChildren:(NSSet *)arg2;
- (bool)domBindingController:(IKDOMBindingController *)arg1 doKeysAffectSubtree:(NSSet *)arg2;
- (bool)shouldResolveDataForDOMBindingController:(IKDOMBindingController *)arg1;

@end
