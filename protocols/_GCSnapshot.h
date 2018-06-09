/* made by EzioChiu.
 */

@protocol _GCSnapshot <NSObject>

@required

- (id)initWithController:(GCController *)arg1 snapshotData:(NSData *)arg2;
- (id)initWithSnapshotData:(NSData *)arg1;
- (void)setSnapshotData:(NSData *)arg1;
- (NSData *)snapshotData;

@end
