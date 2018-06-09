/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (nonatomic, copy) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForced, nonatomic) bool forced;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *softwareTypes;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setForced:(bool)arg1;
- (void)setSoftwareTypes:(id)arg1;

@end
