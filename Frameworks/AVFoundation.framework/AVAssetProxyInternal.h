/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetProxyInternal : NSObject {
    AVAssetInspectorLoader * loader;
    long long  makeTracksArrayOnce;
    NSArray * tracks;
}

@end
