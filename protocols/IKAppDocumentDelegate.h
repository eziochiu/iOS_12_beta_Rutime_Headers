/* made by EzioChiu.
 */

@protocol IKAppDocumentDelegate <NSObject>

@required

- (void)documentDidUpdate:(IKAppDocument *)arg1;
- (void)documentNeedsUpdate:(IKAppDocument *)arg1;

@optional

- (bool)document:(IKAppDocument *)arg1 evaluateStyleMediaQuery:(IKStyleMediaQuery *)arg2;
- (void)document:(IKAppDocument *)arg1 runTestWithName:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)documentScrollToTop:(IKAppDocument *)arg1;
- (NSArray *)impressionableViewElementsForDocument:(IKAppDocument *)arg1;

@end
