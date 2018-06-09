/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPData : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _didCull;
    struct array<unsigned char, 20> { 
        unsigned char __elems_[20]; 
    }  _digest;
    NSString * _filename;
    long long  _identifier;
    bool  _isDeallocating;
    TSPDataManager * _manager;
    <TSPDataStorage> * _storage;
}

@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool isApplicationData;
@property (nonatomic, readonly) bool isExternalData;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) bool needsDownload;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, retain) <TSPDataStorage> *storage;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uniqueName;

+ (void)addCullingListener:(id)arg1;
+ (id)cullingListeners;
+ (id)cullingListenersQueue;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(bool)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(bool)arg2 useFileCoordination:(bool)arg3 context:(id)arg4;
+ (id)null;
+ (id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromURL:(id)arg1 context:(id)arg2;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2;
+ (void)removeCullingListener:(id)arg1;
+ (id)requiredAVAssetOptions;
+ (bool)updateDigest:(struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1 withProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg2;

- (void).cxx_destruct;
- (id)AVAsset;
- (id)AVAssetWithOptions:(id)arg1;
- (id)NSData;
- (void)addDownloadObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)bookmarkData;
- (id)context;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (const struct array<unsigned char, 20> { unsigned char x1[20]; }*)digest;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (id)filename;
- (unsigned long long)hash;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 digest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
- (bool)isApplicationData;
- (bool)isEqual:(id)arg1;
- (bool)isExternalData;
- (bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
- (bool)isReadable;
- (bool)isStorageInPackage:(id)arg1;
- (bool)needsDownload;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImage { }*)newCGImage;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performInputStreamReadWithAccessor:(id /* block */)arg1;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)type;
- (id)uniqueName;
- (void)willCull;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end