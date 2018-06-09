/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInternal : NSObject {
    NSString * anchorChapterType;
    NSArray * availableCanonicalizedChapterLanguages;
    NSArray * availableChapterLanguages;
    NSArray * availableChapterLocales;
    NSArray * chapterGroupInfo;
    long long  loadChapterInfoOnce;
    <AVLoggingIdentifier> * loggingIdentifier;
    AVWeakReference * weakReference;
}

@end
