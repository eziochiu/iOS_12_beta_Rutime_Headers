/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *addressLabel;
@property (nonatomic, copy) NSURL *contactId;
@property (nonatomic, copy) NSString *contactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *forwardGeoProtobuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)structuredDictationAddressResult;
+ (id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)addressLabel;
- (id)contactId;
- (id)contactName;
- (id)encodedClassName;
- (id)forwardGeoProtobuf;
- (id)groupIdentifier;
- (void)setAddressLabel:(id)arg1;
- (void)setContactId:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setForwardGeoProtobuf:(id)arg1;

@end
