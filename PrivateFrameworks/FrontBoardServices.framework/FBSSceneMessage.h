/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneMessage : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying> {
    BSMutableKeyedSettings * _payload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSMutableKeyedSettings *payload;
@property (readonly) Class superclass;

+ (id)message;

- (void).cxx_destruct;
- (id)_initWithPayload:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (id)payload;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
