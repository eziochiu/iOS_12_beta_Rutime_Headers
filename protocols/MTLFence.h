/* made by EzioChiu.
 */

@protocol MTLFence <NSObject>

@required

- (<MTLDevice> *)device;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
