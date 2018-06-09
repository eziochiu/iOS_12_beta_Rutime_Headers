/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSString * _dataContentType;
    NSData * _dataPayload;
    NSURL * _destinationURL;
    NSString * _nextETag;
    int  _overwrite;
    NSString * _previousETag;
    NSDictionary * _responseHeaders;
    NSURL * _sourceURL;
    bool  _useFallback;
}

@property (nonatomic, retain) NSString *dataContentType;
@property (nonatomic, retain) NSData *dataPayload;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSString *nextETag;
@property (nonatomic) int overwrite;
@property (nonatomic, retain) NSString *previousETag;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic) bool useFallback;

- (void).cxx_destruct;
- (void)_completedMoveTask:(id)arg1;
- (void)_completedPutTask:(id)arg1;
- (id)dataContentType;
- (id)dataPayload;
- (id)description;
- (id)destinationURL;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (id)nextETag;
- (int)overwrite;
- (id)previousETag;
- (id)responseHeaders;
- (void)setDataContentType:(id)arg1;
- (void)setDataPayload:(id)arg1;
- (void)setOverwrite:(int)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setUseFallback:(bool)arg1;
- (id)sourceURL;
- (void)startTaskGroup;
- (bool)useFallback;

@end
