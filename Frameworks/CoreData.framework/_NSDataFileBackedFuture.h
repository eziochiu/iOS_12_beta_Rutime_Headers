/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSDataFileBackedFuture : NSData <NSSecureCoding, _NSFileBackedFuture> {
    NSData * _bytes;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    NSURL * _originalFileURL;
    NSData * _realData;
    NSUUID * _uuid;
}

@property (readonly) NSUUID *UUID;
@property (readonly, retain) NSURL *_fileURLForSaving;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSURL *fileURL;
@property (retain) NSURL *originalFileURL;

+ (bool)supportsSecureCoding;

- (id)UUID;
- (unsigned long long)_bytesLengthForStore;
- (void*)_bytesPtrForStore;
- (void)_copyToInterimLocation;
- (id)_fileURLForSaving;
- (id)_interimLocationURL;
- (bool)_isCloudKitSupportOriginated;
- (void)_moveToPermanentLocation;
- (void)_setStoreMetadata:(id)arg1;
- (id)_storeMetadata;
- (id)_underlyingData;
- (const void*)bytes;
- (Class)classForArchiver;
- (Class)classForCoder;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)fileURLNoReally;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1 UUID:(id)arg2 originalURL:(id)arg3;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3;
- (id)initWithURL:(id)arg1 UUID:(id)arg2 size:(unsigned long long)arg3;
- (id)initWithURLForSaving:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)originalFileURL;
- (void)setOriginalFileURL:(id)arg1;

@end
