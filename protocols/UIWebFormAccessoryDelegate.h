/* made by EzioChiu.
 */

@protocol UIWebFormAccessoryDelegate

@required

- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryTab:(bool)arg1;

@end
