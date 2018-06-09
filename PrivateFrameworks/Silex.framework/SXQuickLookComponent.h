/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookComponent : SXComponent <SXQuickLookComponent>

@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXComponentAnchor> *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXFormattedText *caption;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileExtension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

+ (id)typeString;

- (id)captionWithValue:(id)arg1 withType:(int)arg2;

@end
