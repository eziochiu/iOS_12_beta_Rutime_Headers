/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElement : NSObject <NSCoding, NSCopying, REIndentedDescription> {
    REElementAction * _action;
    NSString * _bundleIdentifier;
    REContent * _content;
    REContent * _idealizedContent;
    NSString * _identifier;
    unsigned long long  _privacyBehavior;
    NSArray * _relevanceProviders;
}

@property (nonatomic, readonly) REElementAction *action;
@property (nonatomic, readonly) REContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REContent *idealizedContent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (readonly) Class superclass;

+ (id)_supportedDictionaryEncodingKeys;

- (void).cxx_destruct;
- (void)_updateIdentifier:(id)arg1;
- (id)action;
- (id)bundleIdentifier;
- (id)content;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idealizedContent;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isNoContentElement;
- (unsigned long long)privacyBehavior;
- (id)relevanceProviders;
- (void)setBundleIdentifier:(id)arg1;
- (id)shallowCopy;

@end
