/* made by EzioChiu.
 */

@protocol MSPOrderedReplicaRecord <MSPReplicaRecord>

@required

- (MSPPosition *)position;
- (MSPVectorTimestamp *)positionTimestamp;

@end
