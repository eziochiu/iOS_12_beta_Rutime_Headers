/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUILogObjectManager : NSObject {
    NSObject<OS_os_log> * _defaultLogObject;
}

@property (nonatomic, retain) NSObject<OS_os_log> *defaultLogObject;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)defaultLogObject;
- (id)init;
- (void)setDefaultLogObject:(id)arg1;

@end
