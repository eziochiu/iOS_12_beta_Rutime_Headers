/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEArchive : NSObject {
    struct archive { } * _archive;
    bool  _hasClosedArchive;
    NSURL * _sourceDir;
    NSURL * _tarGzUrl;
}

@property (retain) NSURL *sourceDir;
@property (retain) NSURL *tarGzUrl;

- (void).cxx_destruct;
- (bool)addFile:(id)arg1 withPathName:(id)arg2;
- (struct archive { }*)archiverForUrl:(id)arg1;
- (void)closeArchive;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)setSourceDir:(id)arg1;
- (void)setTarGzUrl:(id)arg1;
- (id)sourceDir;
- (id)tarGzUrl;

@end
