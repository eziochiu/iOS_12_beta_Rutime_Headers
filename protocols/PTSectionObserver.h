/* made by EzioChiu.
 */

@protocol PTSectionObserver <NSObject>

@required

- (void)section:(PTSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
- (void)sectionDidReload:(PTSection *)arg1;

@end
