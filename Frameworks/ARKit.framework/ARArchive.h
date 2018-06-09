/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARArchive : NSObject {
    NSMutableDictionary * _dataByPath;
}

@property (nonatomic, readonly, copy) NSArray *filePaths;

- (void).cxx_destruct;
- (bool)_loadArchiveFromURL:(id)arg1 error:(id*)arg2;
- (bool)_readDataForEntry:(struct archive_entry { }*)arg1 archive:(struct archive { }*)arg2;
- (void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3;
- (void)addData:(id)arg1 withPath:(id)arg2;
- (id)dataForResource:(id)arg1 withExtension:(id)arg2;
- (id)dataForResourceAtPath:(id)arg1;
- (id)filePaths;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
