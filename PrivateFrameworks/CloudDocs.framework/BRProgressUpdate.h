/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRProgressUpdate : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _downloadCompletedSize;
    unsigned long long  _downloadTotalSize;
    BRFileObjectID * _folderID;
    NSArray * _parentFileIDs;
    unsigned long long  _uploadCompletedSize;
    unsigned long long  _uploadTotalSize;
}

@property (nonatomic) unsigned long long downloadCompletedSize;
@property (nonatomic) unsigned long long downloadTotalSize;
@property (nonatomic, copy) BRFileObjectID *folderID;
@property (nonatomic, copy) NSArray *parentFileIDs;
@property (nonatomic) unsigned long long uploadCompletedSize;
@property (nonatomic) unsigned long long uploadTotalSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadCompletedSize;
- (unsigned long long)downloadTotalSize;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)parentFileIDs;
- (void)setDownloadCompletedSize:(unsigned long long)arg1;
- (void)setDownloadTotalSize:(unsigned long long)arg1;
- (void)setFolderID:(id)arg1;
- (void)setParentFileIDs:(id)arg1;
- (void)setUploadCompletedSize:(unsigned long long)arg1;
- (void)setUploadTotalSize:(unsigned long long)arg1;
- (unsigned long long)uploadCompletedSize;
- (unsigned long long)uploadTotalSize;

@end
