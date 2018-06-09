/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPReplicaEdit : NSObject <NSCopying> {
    NSUUID * _identifierOfAffectedRecord;
}

@property (nonatomic, readonly) NSUUID *identifierOfAffectedRecord;

- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifierOfAffectedRecord;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
