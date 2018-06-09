/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder> {
    NSMutableDictionary * _directory;
    NSObject<OS_dispatch_data> * _encodedData;
    unsigned long long  _encodedDataLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEncodedData:(id)arg1;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForLocator:(id)arg1;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;

@end
