/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDirectoryEnumerator : NSEnumerator <NSCopying> {
    struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; } * _DIR;
    bool  _enumerationFinished;
    int  _fileType;
    <PFFileFilter> * _filterDelegate;
    int  _options;
    NSString * _path;
    int  _recursionMode;
    bool  _recursive;
    NSMutableArray * _recursiveDirArray;
}

@property (nonatomic, readonly) int fileType;
@property (nonatomic, readonly) <PFFileFilter> *filterDelegate;
@property (nonatomic, readonly) int options;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)fileType;
- (id)filterDelegate;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3 recursive:(bool)arg4 mode:(int)arg5 options:(int)arg6;
- (id)initWithPath:(id)arg1 recursive:(bool)arg2;
- (id)nextObject;
- (int)options;
- (id)path;

@end
