/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIAppIconImageCache : NSObject {
    NSCache * _appIconImagesCache;
    NSObject<OS_dispatch_queue> * _appIconImagesCacheIsolationQueue;
}

@property (nonatomic, retain) NSCache *appIconImagesCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appIconImagesCacheIsolationQueue;

+ (id)sharedAppIconImageCache;

- (void).cxx_destruct;
- (id)appIconImagesCache;
- (id)appIconImagesCacheIsolationQueue;
- (id)cachedAppIconImageForKey:(id)arg1;
- (id)init;
- (void)setAppIconImagesCache:(id)arg1;
- (void)setCachedAppIconImage:(id)arg1 forKey:(id)arg2;

@end
