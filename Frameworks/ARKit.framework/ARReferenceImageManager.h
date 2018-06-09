/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReferenceImageManager : NSObject {
    struct CV3DOQContext { } * _doqHandle;
    NSObject<OS_dispatch_queue> * _processDataQueue;
}

+ (id)sharedImageManager;
+ (id)sharedWeakImageManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)estimateQuality:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
