/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICArchiveWriter : NSObject {
    struct archive { } * _archive;
    NSString * _basePath;
    NSURL * _destinationURL;
    bool  _usesCompression;
}

@property (nonatomic, retain) NSString *basePath;
@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic) bool usesCompression;

- (void).cxx_destruct;
- (id)basePath;
- (void)dealloc;
- (id)destinationURL;
- (bool)finish:(id*)arg1;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;
- (bool)open:(id*)arg1;
- (void)setBasePath:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setUsesCompression:(bool)arg1;
- (bool)usesCompression;
- (bool)writeURL:(id)arg1 isDirectory:(bool)arg2 error:(id*)arg3;
- (bool)writeURLs:(id)arg1 error:(id*)arg2;

@end
