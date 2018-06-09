/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDocumentResourceDataStorageInfo> {
    NSDataAsset * _dataAsset;
    TSUOnce * _dataAssetOnceToken;
    TSPDocumentResourceInfo * _documentResourceInfo;
    <TSPDocumentResourceBundleProvider><TSUResourceRequest> * _resourceRequest;
}

@property (nonatomic, readonly) NSDataAsset *dataAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TSUResourceRequest> *resourceRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)dataAsset;
- (id)documentResourceInfo;
- (id)documentResourceLocator;
- (id)downloadProgress;
- (unsigned long long)encodedLength;
- (id)fallbackColor;
- (id)init;
- (id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2;
- (bool)isReadable;
- (unsigned long long)length;
- (bool)needsDownload;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (id)resourceRequest;

@end
