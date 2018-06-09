/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCCachesDirectory : NSObject {
    NSURL * _cachesDirectoryURL;
}

@property (nonatomic, readonly) NSURL *cachesDirectoryURL;

+ (id)sharedCachesDirectory;

- (void).cxx_destruct;
- (id)cachesDirectoryURL;
- (id)init;

@end
