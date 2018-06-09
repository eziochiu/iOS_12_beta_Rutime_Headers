/* made by EzioChiu.
 */

@protocol AVTCollapsibleHeaderControllerDelegate <NSObject>

@optional

- (void)collapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 didUpdateHeaderToHeight:(double)arg2;
- (void)collapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 willUpdateHeaderToHeight:(double)arg2;

@end
