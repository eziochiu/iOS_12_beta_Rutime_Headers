/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPropertyListRepresentation : NSObject {
    NSDictionary * _attachments;
    NSDictionary * _propertyList;
}

@property (nonatomic, readonly, copy) NSDictionary *attachments;
@property (nonatomic, readonly, copy) NSDictionary *propertyList;

+ (id)propertyListWithContentsOfPackageURL:(id)arg1 dataProxy:(id)arg2;
+ (id)writePropertyList:(id)arg1 toURL:(id)arg2 dataProxy:(id)arg3 fileManager:(id)arg4;

- (void).cxx_destruct;
- (id)attachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3;
- (id)attachments;
- (id)initWithPropertyList:(id)arg1 attachments:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertyList;

@end
