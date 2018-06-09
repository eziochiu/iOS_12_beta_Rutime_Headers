/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeSessionContext : NSObject <NSSecureCoding> {
    unsigned long long  _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long  _estimatedInitialSizeForLocalLibrary;
    CPLResetTracker * _resetTracker;
}

@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic, retain) CPLResetTracker *resetTracker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedInitialAssetCountForLocalLibrary;
- (unsigned long long)estimatedInitialSizeForLocalLibrary;
- (id)initWithCoder:(id)arg1;
- (id)resetTracker;
- (void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1;
- (void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1;
- (void)setResetTracker:(id)arg1;

@end
