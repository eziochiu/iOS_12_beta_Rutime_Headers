/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    unsigned long long  _AVAssetDownloadToken;
    NSURL * _AVAssetURL;
    AVURLAsset * _AVURLAsset;
    NSURL * _URL;
    NSURLSessionTaskMetrics * __backgroundTaskMetrics;
    NSDictionary * __backgroundTaskTimingData;
    NSDictionary * __backgroundTrailers;
    bool  __doesSZExtractorConsumeExtractedData;
    <SZExtractor> * __extractor;
    bool  __hasSZExtractor;
    NSDictionary * _additionalProperties;
    NSData * _assetArtworkData;
    NSString * _assetTitle;
    NSString * _avAssetDownloadChildDownloadSessionIdentifier;
    long long  _basePriority;
    NSString * _bundleID;
    long long  _bytesPerSecondLimit;
    long long  _countOfBytesClientExpectsToReceive;
    long long  _countOfBytesClientExpectsToSend;
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    double  _creationTime;
    NSURLRequest * _currentRequest;
    NSURL * _destinationURL;
    bool  _disablesRetry;
    bool  _discretionary;
    long long  _discretionaryOverride;
    NSURL * _downloadFileURL;
    NSDate * _earliestBeginDate;
    NSError * _error;
    bool  _establishedConnection;
    bool  _expectingResumeCallback;
    NSURL * _fileURL;
    bool  _hasStarted;
    unsigned long long  _identifier;
    bool  _initializedWithAVAsset;
    double  _loadingPriority;
    unsigned long long  _lowThroughputTimerRetryCount;
    bool  _mayBeDemotedToDiscretionary;
    NSDictionary * _options;
    NSURLRequest * _originalRequest;
    NSString * _pathToDownloadTaskFile;
    unsigned int  _qos;
    NSDictionary * _resolvedMediaSelectionPlist;
    bool  _respondedToWillBeginDelayedRequestCallback;
    NSURLResponse * _response;
    bool  _resumedAndWaitingForEarliestBeginDate;
    unsigned long long  _retryCount;
    NSString * _sessionID;
    bool  _shouldCancelOnDisconnect;
    long long  _state;
    NSString * _storagePartitionIdentifier;
    unsigned long long  _suspendCount;
    NSString * _taskDescription;
    unsigned long long  _taskKind;
    NSURL * _temporaryDestinationURL;
    double  _timeoutIntervalForResource;
    NSString * _uniqueIdentifier;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *AVAssetURL;
@property (retain) AVURLAsset *AVURLAsset;
@property (copy) NSURL *URL;
@property (retain) NSURLSessionTaskMetrics *_backgroundTaskMetrics;
@property (copy) NSDictionary *_backgroundTaskTimingData;
@property (retain) NSDictionary *_backgroundTrailers;
@property (nonatomic) bool _doesSZExtractorConsumeExtractedData;
@property (nonatomic, retain) <SZExtractor> *_extractor;
@property (nonatomic) bool _hasSZExtractor;
@property (copy) NSDictionary *additionalProperties;
@property (copy) NSData *assetArtworkData;
@property (copy) NSString *assetTitle;
@property (copy) NSString *avAssetDownloadChildDownloadSessionIdentifier;
@property long long basePriority;
@property (copy) NSString *bundleID;
@property long long bytesPerSecondLimit;
@property long long countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property double creationTime;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSURL *destinationURL;
@property bool disablesRetry;
@property (getter=isDiscretionary) bool discretionary;
@property long long discretionaryOverride;
@property (copy) NSURL *downloadFileURL;
@property (copy) NSDate *earliestBeginDate;
@property (copy) NSError *error;
@property bool establishedConnection;
@property bool expectingResumeCallback;
@property (copy) NSURL *fileURL;
@property bool hasStarted;
@property unsigned long long identifier;
@property bool initializedWithAVAsset;
@property double loadingPriority;
@property unsigned long long lowThroughputTimerRetryCount;
@property bool mayBeDemotedToDiscretionary;
@property (copy) NSDictionary *options;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSString *pathToDownloadTaskFile;
@property unsigned int qos;
@property (copy) NSDictionary *resolvedMediaSelectionPlist;
@property bool respondedToWillBeginDelayedRequestCallback;
@property (copy) NSURLResponse *response;
@property bool resumedAndWaitingForEarliestBeginDate;
@property unsigned long long retryCount;
@property (copy) NSString *sessionID;
@property bool shouldCancelOnDisconnect;
@property long long state;
@property (copy) NSString *storagePartitionIdentifier;
@property unsigned long long suspendCount;
@property (copy) NSString *taskDescription;
@property unsigned long long taskKind;
@property (copy) NSURL *temporaryDestinationURL;
@property double timeoutIntervalForResource;
@property (copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (unsigned long long)AVAssetDownloadToken;
- (id)AVAssetURL;
- (id)AVURLAsset;
- (id)URL;
- (id)_backgroundTaskMetrics;
- (id)_backgroundTaskTimingData;
- (id)_backgroundTrailers;
- (bool)_doesSZExtractorConsumeExtractedData;
- (id)_extractor;
- (bool)_hasSZExtractor;
- (void)_logTaskUUIDMapping;
- (id)_loggableDescription;
- (id)additionalProperties;
- (id)assetArtworkData;
- (id)assetTitle;
- (id)avAssetDownloadChildDownloadSessionIdentifier;
- (long long)basePriority;
- (id)bundleID;
- (long long)bytesPerSecondLimit;
- (long long)countOfBytesClientExpectsToReceive;
- (long long)countOfBytesClientExpectsToSend;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (double)creationTime;
- (id)currentRequest;
- (void)dealloc;
- (id)destinationURL;
- (bool)disablesRetry;
- (long long)discretionaryOverride;
- (id)downloadFileURL;
- (id)earliestBeginDate;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (bool)establishedConnection;
- (bool)expectingResumeCallback;
- (id)fileURL;
- (bool)hasStarted;
- (unsigned long long)identifier;
- (id)initWithAVAggregateAssetDownloadChildDownloadSessionIdentifier:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 taskIdentifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 bundleID:(id)arg7 sessionID:(id)arg8;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 taskIdentifier:(unsigned long long)arg6 uniqueIdentifier:(id)arg7 bundleID:(id)arg8 sessionID:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithDownloadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithUploadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (bool)initializedWithAVAsset;
- (bool)isDiscretionary;
- (double)loadingPriority;
- (unsigned long long)lowThroughputTimerRetryCount;
- (bool)mayBeDemotedToDiscretionary;
- (id)options;
- (id)originalRequest;
- (id)pathToDownloadTaskFile;
- (unsigned int)qos;
- (id)resolvedMediaSelectionPlist;
- (bool)respondedToWillBeginDelayedRequestCallback;
- (id)response;
- (bool)resumedAndWaitingForEarliestBeginDate;
- (unsigned long long)retryCount;
- (id)sessionID;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setAVAssetURL:(id)arg1;
- (void)setAVURLAsset:(id)arg1;
- (void)setAdditionalProperties:(id)arg1;
- (void)setAssetArtworkData:(id)arg1;
- (void)setAssetTitle:(id)arg1;
- (void)setAvAssetDownloadChildDownloadSessionIdentifier:(id)arg1;
- (void)setBasePriority:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setCountOfBytesClientExpectsToReceive:(long long)arg1;
- (void)setCountOfBytesClientExpectsToSend:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCreationTime:(double)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDisablesRetry:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDiscretionaryOverride:(long long)arg1;
- (void)setDownloadFileURL:(id)arg1;
- (void)setEarliestBeginDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEstablishedConnection:(bool)arg1;
- (void)setExpectingResumeCallback:(bool)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setInitializedWithAVAsset:(bool)arg1;
- (void)setLoadingPriority:(double)arg1;
- (void)setLowThroughputTimerRetryCount:(unsigned long long)arg1;
- (void)setMayBeDemotedToDiscretionary:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPathToDownloadTaskFile:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setResolvedMediaSelectionPlist:(id)arg1;
- (void)setRespondedToWillBeginDelayedRequestCallback:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setResumedAndWaitingForEarliestBeginDate:(bool)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldCancelOnDisconnect:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStoragePartitionIdentifier:(id)arg1;
- (void)setSuspendCount:(unsigned long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskKind:(unsigned long long)arg1;
- (void)setTemporaryDestinationURL:(id)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)set_backgroundTaskMetrics:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_backgroundTrailers:(id)arg1;
- (void)set_doesSZExtractorConsumeExtractedData:(bool)arg1;
- (void)set_extractor:(id)arg1;
- (void)set_hasSZExtractor:(bool)arg1;
- (bool)shouldCancelOnDisconnect;
- (long long)state;
- (id)storagePartitionIdentifier;
- (unsigned long long)suspendCount;
- (id)taskDescription;
- (unsigned long long)taskKind;
- (id)temporaryDestinationURL;
- (double)timeoutIntervalForResource;
- (id)uniqueIdentifier;

@end
