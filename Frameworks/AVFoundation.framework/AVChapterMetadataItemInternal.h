/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVChapterMetadataItemInternal : NSObject {
    NSString * chapterDataType;
    long long  chapterGroupIndex;
    long long  chapterIndex;
    NSString * chapterType;
    NSMutableArray * completions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  duration;
    NSString * extendedLanguageTag;
    struct OpaqueFigAsset { } * figAsset;
    NSString * languageCode;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  time;
    <NSObject><NSCopying> * value;
    int  valueErrorCode;
    long long  valueStatus;
    AVWeakReference * weakReference;
}

@end
