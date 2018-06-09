/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMasterChange : CPLItemChange {
    NSString * _codec;
    NSDate * _creationDate;
    NSString * _filename;
    unsigned long long  _fullSizeJPEGSource;
    NSDate * _importDate;
    NSString * _importGroupIdentifier;
    short  _importedBy;
    NSString * _itemType;
    NSData * _mediaMetaData;
    NSString * _mediaMetaDataType;
    long long  _originalOrientation;
    NSString * _originatingFingerprint;
    NSDictionary * _resourcePerResourceType;
    NSArray * _resources;
    short  _videoFrameRate;
}

@property (nonatomic, copy) NSString *codec;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic) unsigned long long fullSizeJPEGSource;
@property (nonatomic, copy) NSDate *importDate;
@property (nonatomic, copy) NSString *importGroupIdentifier;
@property (nonatomic) short importedBy;
@property (nonatomic, readonly) bool isImage;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, retain) NSData *mediaMetaData;
@property (nonatomic, copy) NSString *mediaMetaDataType;
@property (nonatomic) long long originalOrientation;
@property (nonatomic, copy) NSString *originatingFingerprint;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic) short videoFrameRate;

- (void).cxx_destruct;
- (void)_copyDerivatives:(unsigned long long*)arg1 count:(int)arg2 ifMatchingResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)codec;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (id)creationDate;
- (unsigned long long)dataClassType;
- (long long)dequeueOrder;
- (id)filename;
- (unsigned long long)fullSizeJPEGSource;
- (id)importDate;
- (id)importGroupIdentifier;
- (short)importedBy;
- (id)init;
- (bool)isImage;
- (bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (bool)isVideo;
- (id)itemType;
- (id)mediaMetaData;
- (id)mediaMetaDataType;
- (id)name;
- (long long)originalOrientation;
- (id)originatingFingerprint;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)resourceForType:(unsigned long long)arg1;
- (id)resources;
- (void)setCodec:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFullSizeJPEGSource:(unsigned long long)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportGroupIdentifier:(id)arg1;
- (void)setImportedBy:(short)arg1;
- (void)setItemType:(id)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setMediaMetaDataType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalOrientation:(long long)arg1;
- (void)setOriginatingFingerprint:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setVideoFrameRate:(short)arg1;
- (bool)supportsDeletion;
- (bool)supportsResources;
- (bool)validateRecordForTracker:(id)arg1;
- (short)videoFrameRate;

@end
