/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSHTTPArchive : NSObject {
    NSData * _JSONData;
    NSData * _backingJSONData;
    bool  _compressed;
}

@property (nonatomic, readonly) NSData *JSONData;
@property (nonatomic, retain) NSData *backingJSONData;
@property (getter=isCompressed, nonatomic) bool compressed;

+ (id)_createJSONObjectForEntries:(id)arg1;
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_generateCommentsStringForMetrics:(id)arg1;
+ (id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (id)_generateHeadersArrayForHTTPHeaders:(id)arg1;
+ (id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;
+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)directory;
+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;

- (void).cxx_destruct;
- (id)JSONData;
- (id)_initWithJSONObject:(id)arg1;
- (id)backingJSONData;
- (id)initWithURLTaskInfo:(id)arg1;
- (bool)isCompressed;
- (void)setBackingJSONData:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (bool)writeToDiskWithError:(id*)arg1 compressed:(bool)arg2;

@end
