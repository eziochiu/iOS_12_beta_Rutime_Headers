/* made by EzioChiu.
 */

@protocol TSPComponentWriteChannel <NSObject>

@required

- (void)close;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1;

@end
