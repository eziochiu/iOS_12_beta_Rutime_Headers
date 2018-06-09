/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateOptions : NSObject {
    bool  _automaticallyDownloadFileBackedFutures;
    NSNumber * _ckAssetThresholdBytes;
    NSString * _containerIdentifier;
    CKContainerOptions * _containerOptions;
    bool  _initializeSchema;
    NSNumber * _operationMemoryThresholdBytes;
    bool  _useEncryptedStorage;
}

@property (nonatomic) bool automaticallyDownloadFileBackedFutures;
@property (nonatomic, retain) NSNumber *ckAssetThresholdBytes;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic) bool initializeSchema;
@property (nonatomic, retain) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) bool useEncryptedStorage;

- (bool)automaticallyDownloadFileBackedFutures;
- (id)ckAssetThresholdBytes;
- (id)containerIdentifier;
- (id)containerOptions;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)initWithContainerIdentifier:(id)arg1;
- (bool)initializeSchema;
- (id)operationMemoryThresholdBytes;
- (void)setAutomaticallyDownloadFileBackedFutures:(bool)arg1;
- (void)setCkAssetThresholdBytes:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerOptions:(id)arg1;
- (void)setInitializeSchema:(bool)arg1;
- (void)setOperationMemoryThresholdBytes:(id)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (bool)useEncryptedStorage;

@end
