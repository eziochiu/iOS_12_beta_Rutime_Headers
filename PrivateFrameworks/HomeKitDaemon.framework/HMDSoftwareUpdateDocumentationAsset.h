/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSSecureCoding, NSURLSessionDownloadDelegate, SZExtractorDelegate> {
    NSURLSession * _URLSession;
    NSInputStream * _archivedFileStream;
    NSObject<OS_dispatch_queue> * _clientQueue;
    SZExtractor * _extrator;
    NSUUID * _identifier;
    HMSoftwareUpdateDocumentationMetadata * _metadata;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _shouldAutomaticallyCache;
    long long  _state;
}

@property (readonly, copy) NSURL *URL;
@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, retain) NSInputStream *archivedFileStream;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (nonatomic, retain) SZExtractor *extrator;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSString *shortDescription;
@property bool shouldAutomaticallyCache;
@property (readonly) long long state;
@property (readonly) Class superclass;

+ (id)assetDirectoryURL;
+ (id)assetWithURL:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)URLSession;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)archiveURL;
- (id)archivedFileStream;
- (id)bundleURL;
- (void)cancelDownload;
- (void)cancelUnarchive;
- (id)clientQueue;
- (id)documentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extrator;
- (void)finishDownload;
- (void)finishUnarchive;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)metadata;
- (id)metadataURL;
- (id)propertyDescription;
- (id)propertyQueue;
- (bool)purgeWithError:(id*)arg1;
- (bool)saveWithError:(id*)arg1;
- (void)setArchivedFileStream:(id)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)setExtrator:(id)arg1;
- (void)setShouldAutomaticallyCache:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setURLSession:(id)arg1;
- (id)shortDescription;
- (bool)shouldAutomaticallyCache;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (long long)state;

@end
