/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_browse_descriptor> * _internalDescriptor;
}

@property (nonatomic, retain) NWInterface *interface;
@property (nonatomic, retain) NSObject<OS_nw_browse_descriptor> *internalDescriptor;
@property (nonatomic, readonly, copy) NSString *privateDescription;

+ (Class)copyClassForDescriptorType:(int)arg1;
+ (unsigned int)descriptorType;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (id)descriptorWithProtocolBufferData:(id)arg1;
+ (bool)supportsBrowseCallback;

- (void).cxx_destruct;
- (void)browseWithCompletionHandler:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)encodedData;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)interface;
- (id)internalDescriptor;
- (id)privateDescription;
- (void)setInterface:(id)arg1;
- (void)setInternalDescriptor:(id)arg1;

@end
