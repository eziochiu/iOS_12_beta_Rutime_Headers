/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFolder : ICCameraItem {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _filesLock;
    void * _folderProperties;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _foldersLock;
}

@property (readonly) NSArray *contents;

- (void)addFile:(id)arg1;
- (void)addFolder:(id)arg1;
- (id)contents;
- (void)dealloc;
- (void)deleteFile:(id)arg1;
- (void)deleteFolder:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)description;
- (id)files;
- (id)folders;
- (bool)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)lockFiles;
- (void)lockFolders;
- (id)metadata;
- (void)requestMetadata;
- (void)requestThumbnail;
- (struct CGImage { }*)thumbnail;
- (void)unlockFiles;
- (void)unlockFolders;
- (id)valueForUndefinedKey:(id)arg1;

@end
