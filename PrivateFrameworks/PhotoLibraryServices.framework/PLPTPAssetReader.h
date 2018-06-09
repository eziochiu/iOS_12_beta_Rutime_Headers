/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPAssetReader : NSObject {
    NSString * _path;
    id  _userInfo;
}

@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)description;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
