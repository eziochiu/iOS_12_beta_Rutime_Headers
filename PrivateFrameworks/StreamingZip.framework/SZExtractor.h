/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface SZExtractor : NSObject <NSCopying, SZExtractor> {
    NSError * _error;
    NSString * _extractionPath;
    bool  _hasHadPostSetupMethodsCalled;
    StreamingUnzipper * _inProcessUnzipper;
    SZExtractorInternalDelegate * _internalExtractorDelegate;
    bool  _isLocalExtractor;
    unsigned long long  _lastResumptionOffset;
    bool  _needsPreparation;
    NSDictionary * _options;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _unzipServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SZExtractorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doesConsumeExtractedData;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *extractionPath;
@property (nonatomic) <SZExtractorDelegate> *extractorDelegate;
@property (nonatomic) bool hasHadPostSetupMethodsCalled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) StreamingUnzipper *inProcessUnzipper;
@property (nonatomic, readonly) SZExtractorInternalDelegate *internalExtractorDelegate;
@property (nonatomic, readonly) bool isLocalExtractor;
@property (nonatomic) unsigned long long lastResumptionOffset;
@property (nonatomic) bool needsPreparation;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *unzipServiceConnection;

// Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip

+ (void)enableDebugLogging;
+ (id)knownSZExtractorImplementations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (void)_prepareForLocalExtraction:(id /* block */)arg1;
- (void)_prepareForRemoteExtraction:(id /* block */)arg1;
- (void)_setUpWithPath:(id)arg1 options:(id)arg2;
- (bool)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long*)arg1;
- (bool)consumeExtractedDataIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)doesConsumeExtractedData;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)extractionPath;
- (id)extractorDelegate;
- (void)finishStreamWithCompletionBlock:(id /* block */)arg1;
- (bool)hasHadPostSetupMethodsCalled;
- (unsigned long long)hash;
- (id)inProcessUnzipper;
- (id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2;
- (id)internalExtractorDelegate;
- (bool)isEqual:(id)arg1;
- (bool)isLocalExtractor;
- (unsigned long long)lastResumptionOffset;
- (bool)needsPreparation;
- (id)options;
- (void)prepareForExtraction:(id /* block */)arg1;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)serialQueue;
- (void)setActiveExtractorDelegateMethods:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExtractionPath:(id)arg1;
- (void)setExtractorDelegate:(id)arg1;
- (void)setHasHadPostSetupMethodsCalled:(bool)arg1;
- (void)setLastResumptionOffset:(unsigned long long)arg1;
- (void)setNeedsPreparation:(bool)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)suspendStreamWithCompletionBlock:(id /* block */)arg1;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)unzipServiceConnection;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)optionsForArchiveURL:(id)arg1 digest:(id)arg2;

@end
