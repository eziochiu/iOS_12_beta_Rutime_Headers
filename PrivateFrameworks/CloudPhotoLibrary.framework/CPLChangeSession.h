/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeSession : NSObject <CPLAbstractObject> {
    CPLLibraryManager * _libraryManager;
    CPLPlatformObject * _platformObject;
    NSString * _sessionIdentifier;
    NSProgress * _sessionProgress;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLLibraryManager *libraryManager;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSProgress *sessionProgress;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;
+ (id)shortDescription;
+ (id)stateDescriptionForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)createSessionContext;
- (void)dealloc;
- (void)finalizeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithLibraryManager:(id)arg1;
- (id)libraryManager;
- (id)platformObject;
- (id)sessionIdentifier;
- (id)sessionProgress;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)tearDownWithCompletionHandler:(id /* block */)arg1;

@end
