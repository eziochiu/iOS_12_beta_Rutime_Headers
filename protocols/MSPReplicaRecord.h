/* made by EzioChiu.
 */

@protocol MSPReplicaRecord <NSObject>

@required

- (NSData *)contents;
- (MSPVectorTimestamp *)contentsTimestamp;

@end
