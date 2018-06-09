/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageItem : NSObject {
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSURL * _fileURL;
    NSNumber * _generationID;
    unsigned long long  _itemID;
    NSString * _itemTypeHint;
    long long  _offset;
    long long  _packageIndex;
    int  _sectionIndex;
    NSData * _signature;
    long long  _size;
    NSData * _wrappedAssetKey;
}

@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic, retain) NSString *itemTypeHint;
@property (nonatomic) long long offset;
@property (nonatomic) long long packageIndex;
@property (nonatomic) int sectionIndex;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSData *wrappedAssetKey;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)deviceID;
- (id)fileID;
- (id)fileURL;
- (id)generationID;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1;
- (unsigned long long)itemID;
- (id)itemTypeHint;
- (long long)offset;
- (long long)packageIndex;
- (int)sectionIndex;
- (void)setDeviceID:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setItemTypeHint:(id)arg1;
- (void)setOffset:(long long)arg1;
- (void)setPackageIndex:(long long)arg1;
- (void)setSectionIndex:(int)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setWrappedAssetKey:(id)arg1;
- (id)signature;
- (long long)size;
- (id)wrappedAssetKey;

@end
