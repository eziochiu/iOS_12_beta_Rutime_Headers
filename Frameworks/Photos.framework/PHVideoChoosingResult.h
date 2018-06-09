/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoChoosingResult : NSObject {
    bool  _canStream;
    <PLResourceDataStore> * _dataStore;
    NSURL * _fileURLIfLocal;
    bool  _isLocallyAvailable;
    bool  _isMaximumQuality;
    bool  _isRemotelyAvailable;
    bool  _isSufficientQuality;
    PLInternalResource * _resource;
}

@property (nonatomic) bool canStream;
@property (nonatomic, retain) <PLResourceDataStore> *dataStore;
@property (nonatomic, retain) NSURL *fileURLIfLocal;
@property (nonatomic) bool isLocallyAvailable;
@property (nonatomic) bool isMaximumQuality;
@property (nonatomic) bool isRemotelyAvailable;
@property (nonatomic) bool isSufficientQuality;
@property (nonatomic, retain) PLInternalResource *resource;

+ (id)resultFromInternalResource:(id)arg1 asset:(id)arg2 desiredQuality:(unsigned int)arg3 isMaxQuality:(bool)arg4 managedObjectContext:(id)arg5;

- (void).cxx_destruct;
- (bool)canStream;
- (id)dataStore;
- (id)fileURLIfLocal;
- (bool)isLocallyAvailable;
- (bool)isMaximumQuality;
- (bool)isRemotelyAvailable;
- (bool)isSufficientQuality;
- (id)resource;
- (void)setCanStream:(bool)arg1;
- (void)setDataStore:(id)arg1;
- (void)setFileURLIfLocal:(id)arg1;
- (void)setIsLocallyAvailable:(bool)arg1;
- (void)setIsMaximumQuality:(bool)arg1;
- (void)setIsRemotelyAvailable:(bool)arg1;
- (void)setIsSufficientQuality:(bool)arg1;
- (void)setResource:(id)arg1;

@end
