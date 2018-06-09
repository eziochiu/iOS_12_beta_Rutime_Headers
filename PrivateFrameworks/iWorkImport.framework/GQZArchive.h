/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZArchive : NSObject {
    NSMutableDictionary * mEntries;
    NSString * mFilename;
    <GQZArchiveInputStream> * mInput;
    bool  mIsEncrypted;
}

- (void)collapseCommonRootDirectory;
- (void)dealloc;
- (id)entryNames;
- (id)entryWithName:(id)arg1;
- (id)filename;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (bool)isEncrypted;
- (struct GQZEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readEndOfCentralDirectory;
- (void)readEntries;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct GQZEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromOffset:(long long)arg1;
- (struct GQZEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryWithEocdOffset:(long long)arg1;
- (const char *)searchForEndOfCentralDirectoryOffset:(long long*)arg1;

@end
