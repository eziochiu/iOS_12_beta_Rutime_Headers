/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDecoratedText : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *ducId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *regions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)decoratedText;
+ (id)decoratedTextWithDictionary:(id)arg1 context:(id)arg2;

- (id)ducId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)regions;
- (void)setDucId:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
