/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFavoritesReplicaSimpleRecord : NSObject <MSPFavoritesReplicaRecord> {
    NSData * _contents;
    MSPVectorTimestamp * _contentsTimestamp;
    MSPPosition * _position;
    MSPVectorTimestamp * _positionTimestamp;
}

@property (nonatomic, readonly, copy) NSData *contents;
@property (nonatomic, readonly, copy) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;
@property (readonly) Class superclass;

+ (id)recordWithContentsOfRecord:(id)arg1;
+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsTimestamp;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)position;
- (id)positionTimestamp;

@end
