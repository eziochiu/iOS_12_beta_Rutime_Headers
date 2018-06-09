/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIArchiveItem : NSObject {
    unsigned long long  _fileSize;
    bool  _fileSizeIsSet;
    NSString * _fileType;
    bool  _isAppleDoubleFile;
    NSString * _pathInArchive;
    NSString * _pathToAppleDoubleRealFileCounterpart;
}

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) bool fileSizeIsSet;
@property (nonatomic, retain) NSString *fileType;
@property (nonatomic) bool isAppleDoubleFile;
@property (nonatomic, retain) NSString *pathInArchive;
@property (nonatomic, retain) NSString *pathToAppleDoubleRealFileCounterpart;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)fileSize;
- (bool)fileSizeIsSet;
- (id)fileType;
- (bool)isAppleDoubleFile;
- (id)pathInArchive;
- (id)pathToAppleDoubleRealFileCounterpart;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileSizeIsSet:(bool)arg1;
- (void)setFileType:(id)arg1;
- (void)setIsAppleDoubleFile:(bool)arg1;
- (void)setPathInArchive:(id)arg1;
- (void)setPathToAppleDoubleRealFileCounterpart:(id)arg1;

@end
