/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryDecoder : NSObject <TSPDecoder> {
    <TSPMemoryDecoderDelegate> * _delegate;
    NSObject<OS_dispatch_data> * _metadataDispatchData;
    NSObject<OS_dispatch_data> * _rootObjectComponentDispatchData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEncodedData:(id)arg1 delegate:(id)arg2;
- (id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3;
- (id)metadataDispatchData;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)rootObjectComponentDispatchData;

@end
