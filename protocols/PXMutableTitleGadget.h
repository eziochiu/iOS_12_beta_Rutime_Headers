/* made by EzioChiu.
 */

@protocol PXMutableTitleGadget <NSObject>

@required

- (unsigned long long)accessoryButtonType;
- (void)setAccessoryButtonType:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
