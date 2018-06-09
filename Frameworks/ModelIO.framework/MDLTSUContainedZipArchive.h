/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUContainedZipArchive : MDLTSUZipArchive {
    MDLTSUZipEntry * _entry;
    MDLTSUZipArchive * _zipArchive;
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (unsigned long long)archiveLength;
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3;
- (bool)isValid;
- (id)newArchiveReadChannel;
- (id)readChannelForEntry:(id)arg1 validateCRC:(bool)arg2;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(bool)arg2;

@end
