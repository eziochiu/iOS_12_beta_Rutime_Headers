/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, NSCopying> {
    NSMutableDictionary * _payload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)optionsWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_sanitizeAndValidatePayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionary;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)url;

@end
