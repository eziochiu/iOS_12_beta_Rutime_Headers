/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {
    CPLChangeBatch * _batch;
    bool  _batchCanLowerQuota;
    NSString * _clientCacheIdentifier;
    bool  _full;
    NSMutableSet * _mutableUntrustableScopedIndentifiers;
    NSMutableDictionary * _mutableUploadIdentifiers;
    unsigned long long  _resourceSize;
    bool  _resourceSizeIsCalculated;
    NSSet * _untrustableScopedIdentifiers;
    NSDictionary * _uploadIdentifiers;
}

@property (nonatomic, readonly) CPLChangeBatch *batch;
@property (nonatomic, readonly) bool batchCanLowerQuota;
@property (nonatomic, copy) NSString *clientCacheIdentifier;
@property (getter=isFull, nonatomic) bool full;
@property (nonatomic, readonly) unsigned long long resourceSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addChange:(id)arg1;
- (id)batch;
- (bool)batchCanLowerQuota;
- (id)clientCacheIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)forceScopeIndexOnAllRecordsTo:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFull;
- (unsigned long long)resourceSize;
- (void)setClientCacheIdentifier:(id)arg1;
- (void)setFull:(bool)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (id)uploadIdentifiers;

@end
