/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedOutOfBandStreamingZipTransfer : IXOpaqueDataPromise <NSSecureCoding, SZExtractor, SZExtractorDelegate> {
    SZExtractor * _extractor;
    <SZExtractorDelegate> * _extractorDelegate;
}

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (getter=isComplete, nonatomic) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doesConsumeExtractedData;
@property (nonatomic, readonly) NSURL *extractionPath;
@property (nonatomic, retain) SZExtractor *extractor;
@property (nonatomic) <SZExtractorDelegate> *extractorDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IXPromisedOutOfBandStreamingZipTransferSeed *seed;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBytesTransferred:(unsigned long long)arg1;
- (unsigned long long)archiveBytesConsumed;
- (bool)consumeExtractedDataIfNeeded;
- (bool)doesConsumeExtractedData;
- (void)encodeWithCoder:(id)arg1;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)extractionEnteredPassThroughMode;
- (id)extractionPath;
- (id)extractor;
- (id)extractorDelegate;
- (void)finishStreamWithCompletionBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 streamingZipOptions:(id)arg3 archiveSize:(unsigned long long)arg4 diskSpaceNeeded:(unsigned long long)arg5;
- (id)initWithSeed:(id)arg1;
- (void)prepareForExtraction:(id /* block */)arg1;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetWithCompletion:(id /* block */)arg1;
- (Class)seedClass;
- (void)setArchiveBytesConsumed:(unsigned long long)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)setExtractor:(id)arg1;
- (void)setExtractorDelegate:(id)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)suspendStreamWithCompletionBlock:(id /* block */)arg1;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(id /* block */)arg2;

@end