/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipArchiveEntry : NSObject {
    QLZipArchive * _archive;
    NSData * _data;
    struct archive_entry { } * _entry;
    NSError * _error;
    NSURL * _url;
}

@property QLZipArchive *archive;
@property (retain) NSData *data;
@property struct archive_entry { }*entry;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)archive;
- (id)data;
- (struct archive_entry { }*)entry;
- (id)readDataWithError:(id*)arg1;
- (void)setArchive:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEntry:(struct archive_entry { }*)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
