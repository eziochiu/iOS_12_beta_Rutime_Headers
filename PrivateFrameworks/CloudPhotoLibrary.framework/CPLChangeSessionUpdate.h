/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding> {
    NSString * _libraryVersion;
    NSDate * _queuedDate;
}

@property (nonatomic, readonly, copy) NSString *libraryVersion;
@property (nonatomic, readonly) NSDate *queuedDate;
@property (nonatomic, readonly) NSString *statusDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)libraryVersion;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)queuedDate;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;

@end
