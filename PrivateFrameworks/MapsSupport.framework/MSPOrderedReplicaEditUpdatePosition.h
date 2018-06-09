/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit {
    MSPPosition * _position;
    MSPVectorTimestamp * _positionTimestamp;
}

@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;

- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toPosition:(id)arg2 positionTimestamp:(id)arg3;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)position;
- (id)positionTimestamp;

@end
