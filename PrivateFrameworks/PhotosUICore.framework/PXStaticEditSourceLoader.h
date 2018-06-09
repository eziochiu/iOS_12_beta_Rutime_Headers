/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader> {
    long long  _baseVersion;
    NSString * _contentIdentifier;
    PLPhotoEditModel * _editModel;
    PLEditSource * _editSource;
    NSError * _error;
    NSString * _livePhotoPairingIdentifier;
    NSProgress * _progress;
}

@property (nonatomic, readonly) long long baseVersion;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) NSNumber *loadDuration;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)baseVersion;
- (void)beginLoading;
- (id)contentIdentifier;
- (id)editModel;
- (id)editSource;
- (id)error;
- (id)initWithEditSource:(id)arg1 editModel:(id)arg2 baseVersion:(long long)arg3 contentIdentifier:(id)arg4;
- (id)livePhotoPairingIdentifier;
- (id)loadDuration;
- (id)progress;

@end
