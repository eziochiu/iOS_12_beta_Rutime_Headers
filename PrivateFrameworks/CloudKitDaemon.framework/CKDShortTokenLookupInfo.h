/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShortTokenLookupInfo : NSObject <NSCopying> {
    bool  _forceDSRefetch;
    NSString * _routingKey;
    NSData * _shortSharingTokenHashData;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic) bool forceDSRefetch;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortSharingTokenHashData;
@property (nonatomic) bool shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forceDSRefetch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)routingKey;
- (void)setForceDSRefetch:(bool)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shortSharingTokenHashData;
- (bool)shouldFetchRootRecord;

@end
