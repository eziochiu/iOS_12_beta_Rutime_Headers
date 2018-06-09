/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding> {
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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsTimestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)position;
- (id)positionTimestamp;

@end
