/* made by EzioChiu.
 */

@protocol TSPEncoder <NSObject>

@required

- (<TSPComponentWriteChannel> *)newMetadataComponentWriteChannel;
- (<TSPComponentWriteChannel> *)newRootObjectComponentWriteChannel;

@end
