/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMomentShareScopeChange : CPLScopeChange <NSCopying, NSSecureCoding> {
    CPLMomentShare * _momentShare;
}

@property (nonatomic, copy) CPLMomentShare *momentShare;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setupWithLibraryInfo:(id)arg1;
- (id)description;
- (id)momentShare;
- (void)setMomentShare:(id)arg1;

@end
