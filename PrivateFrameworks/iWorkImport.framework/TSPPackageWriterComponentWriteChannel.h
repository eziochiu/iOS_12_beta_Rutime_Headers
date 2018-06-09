/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    TSUZipFileWriter * _archiveWriter;
    bool  _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithArchiveWriter:(id)arg1;
- (void)writeData:(id)arg1;

@end
