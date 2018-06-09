/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXGlobalConfiguration : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dynamicPropertyLock;
    NSURL * _mobileHome;
    NSURL * _rootPath;
    NSURL * _systemContainerPath;
}

@property (nonatomic, readonly) NSURL *frameworkURL;
@property (nonatomic, readonly) NSURL *mobileHome;
@property (nonatomic, readonly) NSURL *oldSupportDirectory;
@property (nonatomic, readonly) NSURL *rootPath;
@property (nonatomic, readonly) NSURL *systemContainerPath;
@property (nonatomic, readonly) NSURL *userVolumeURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_systemContainerURLWithError:(id*)arg1;
- (bool)createDirectories;
- (id)dataDirectoryAbortingOnError;
- (id)dataDirectoryWithError:(id*)arg1;
- (id)frameworkURL;
- (id)init;
- (id)mobileHome;
- (id)oldSupportDirectory;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryWithError:(id*)arg1;
- (id)rootPath;
- (id)systemContainerPath;
- (id)userVolumeURL;

@end
