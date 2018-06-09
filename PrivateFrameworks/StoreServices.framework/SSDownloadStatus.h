/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadStatus : NSObject <NSCopying, SSXPCCoding> {
    SSDownloadPhase * _activePhase;
    bool  _contentRestricted;
    NSError * _error;
    bool  _failed;
    bool  _paused;
}

@property (nonatomic, readonly) SSDownloadPhase *activePhase;
@property (getter=isContentRestricted, nonatomic) bool contentRestricted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isFailed, nonatomic) bool failed;
@property (getter=isFailedTransient, nonatomic, readonly) bool failedTransient;
@property (readonly) unsigned long long hash;
@property (getter=isPausable, nonatomic) bool pausable;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) float percentComplete;
@property (readonly) Class superclass;

- (id)activePhase;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isContentRestricted;
- (bool)isFailed;
- (bool)isFailedTransient;
- (bool)isPausable;
- (bool)isPaused;
- (float)percentComplete;
- (void)setContentRestricted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setFailed:(bool)arg1;
- (void)setOperationProgress:(id)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setPausable:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPercentComplete:(float)arg1;

@end
