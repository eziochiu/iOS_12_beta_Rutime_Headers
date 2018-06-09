/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSASubmitter : NSObject {
    bool  _allowUnsignedBlobs;
    NSString * _connectionType;
    NSArray * _internalWhitelist;
    unsigned int  _jobCount;
    NSMutableArray * _jobs;
    long long  _responseCode;
    NSData * _responseData;
    NSDictionary * _responseHeaders;
    NSMutableDictionary * _results;
    unsigned int  _submissionCap;
    NSDictionary * _summary;
    NSMutableDictionary * _taskings;
    bool  _writeArchives;
}

@property bool allowUnsignedBlobs;
@property (copy) NSString *connectionType;
@property (copy) NSArray *internalWhitelist;
@property (readonly) NSDictionary *summary;
@property (readonly) NSDictionary *taskingResults;
@property bool writeArchives;

+ (id)extractAuthenticatedBlob:(id)arg1;

- (void).cxx_destruct;
- (void)abort;
- (bool)allowUnsignedBlobs;
- (id)applyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;
- (id)connectionType;
- (id)init;
- (id)internalWhitelist;
- (id)locateLog:(id)arg1 forRouting:(id)arg2 options:(id)arg3;
- (void)postContent:(id)arg1 withHeaders:(id)arg2;
- (void)prefaceSubmission:(id)arg1 withData:(id)arg2 usingArchive:(id)arg3 andHeaders:(id)arg4;
- (bool)processJob:(id)arg1 forRouting:(id)arg2 including:(id)arg3 usingConfig:(id)arg4;
- (bool)processSubmissionJobs:(id)arg1 usingConfig:(id)arg2;
- (void)setAllowUnsignedBlobs:(bool)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setInternalWhitelist:(id)arg1;
- (void)setWriteArchives:(bool)arg1;
- (id)summary;
- (id)taskingResults;
- (bool)writeArchives;

@end
