/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetRereferenceInfo : NSObject {
    NSData * _assetKey;
    NSURL * _contentBaseURL;
    NSString * _destinationFieldName;
    NSString * _downloadToken;
    unsigned long long  _downloadTokenExpiration;
    NSError * _error;
    NSString * _owner;
    NSData * _referenceSignature;
    NSString * _requestor;
}

@property (nonatomic, retain) NSData *assetKey;
@property (nonatomic, retain) NSURL *contentBaseURL;
@property (nonatomic, retain) NSString *destinationFieldName;
@property (nonatomic, retain) NSString *downloadToken;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)assetKey;
- (void)clearRecordFetchProperties;
- (id)contentBaseURL;
- (id)description;
- (id)destinationFieldName;
- (id)downloadToken;
- (unsigned long long)downloadTokenExpiration;
- (id)error;
- (id)owner;
- (id)referenceSignature;
- (id)requestor;
- (void)setAssetKey:(id)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDestinationFieldName:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadTokenExpiration:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (bool)validateAndSetRecordFetchPropertiesWithAsset:(id)arg1 assetReference:(id)arg2;

@end
