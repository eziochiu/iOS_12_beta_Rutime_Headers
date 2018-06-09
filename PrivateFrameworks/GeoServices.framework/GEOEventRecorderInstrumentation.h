/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEventRecorderInstrumentation : NSObject {
    NSString * _filepath;
    NSString * _geoFilepath;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSString * _movieFilepath;
    NSDate * _startDate;
}

+ (id)defaultInstrumentation;
+ (void)endInstrumentation;
+ (id)initializeDefaultInstrumentation;

- (void).cxx_destruct;
- (void)_captureScreenVideo:(id)arg1;
- (void)_setupLogging;
- (void)captureEventRecorderScreenVideo;
- (void)captureUIEvent:(id)arg1;
- (void)captureUserActionLogMessageEvent:(id)arg1;
- (id)getRecordedFilePaths;
- (id)init;
- (void)initializeFilepaths;
- (void)writeString:(id)arg1 ToFilepath:(id)arg2;

@end
