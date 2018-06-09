/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference * _oslcr;
    char * _path;
}

@property (nonatomic, readonly) char *path;

- (void).cxx_destruct;
- (id)copyMappedChunkFile:(id*)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;
- (char *)path;

@end
