/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionMatchingMerger : NSObject {
    NSArray * _intentNonUIExtensions;
    NSArray * _intentUIExtensions;
    NSObject<OS_dispatch_queue> * _lock;
    NSArray * _mapExtensions;
}

- (void).cxx_destruct;
- (void)clearExtensions;
- (id)init;
- (id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2;

@end
