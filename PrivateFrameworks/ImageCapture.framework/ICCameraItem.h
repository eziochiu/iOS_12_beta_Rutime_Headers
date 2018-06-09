/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItem : NSObject {
    void * _itemProperties;
    NSString * _relativeFileSystemPath;
    NSData * _thumbnailData;
    id  _userObject;
}

@property (readonly) NSString *UTI;
@property (copy) id /* block */ completionBlock;
@property (readonly) NSDate *creationDate;
@property (readonly) ICCameraDevice *device;
@property (readonly) NSString *fileSystemPath;
@property (readonly) bool hasMetadata;
@property (readonly) bool hasThumbnail;
@property (getter=isLocked) bool locked;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSDate *modificationDate;
@property (readonly) NSString *name;
@property (readonly) unsigned long long objectID;
@property (readonly) unsigned long long ownerID;
@property (readonly) ICCameraFolder *parentFolder;
@property (readonly) unsigned long long parentID;
@property (readonly) NSString *relativeFileSystemPath;
@property (readonly) struct CGImage { }*thumbnail;
@property (readonly) NSData *thumbnailData;
@property (readonly) unsigned long long twinID;
@property (readonly) NSMutableDictionary *userData;
@property (retain) id userObject;

- (id)UTI;
- (void)appendToPath:(id)arg1;
- (long long)compareObjectID:(id)arg1;
- (id /* block */)completionBlock;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)fileSystemPath;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (bool)hasMetadata;
- (bool)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isLocked;
- (id)metadata;
- (id)modificationDate;
- (id)name;
- (unsigned long long)objectID;
- (unsigned long long)ownerID;
- (id)parentFolder;
- (unsigned long long)parentID;
- (unsigned int)ptpObjectHandle;
- (id)relativeFileSystemPath;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setOwnerID:(unsigned long long)arg1;
- (void)setParentFolder:(id)arg1;
- (void)setParentID:(unsigned long long)arg1;
- (void)setPtpObjectHandle:(unsigned int)arg1;
- (void)setTwinID:(unsigned long long)arg1;
- (void)setUTI:(id)arg1;
- (void)setUserObject:(id)arg1;
- (struct CGImage { }*)thumbnail;
- (id)thumbnailData;
- (unsigned long long)twinID;
- (unsigned long long)unsignedIntegerValue;
- (id)userData;
- (id)userObject;
- (id)valueForUndefinedKey:(id)arg1;

@end
