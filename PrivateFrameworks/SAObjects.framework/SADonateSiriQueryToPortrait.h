/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *originalQuery;
@property (nonatomic, copy) NSString *qid;

+ (id)donateSiriQueryToPortrait;
+ (id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalQuery;
- (id)qid;
- (bool)requiresResponse;
- (void)setOriginalQuery:(id)arg1;
- (void)setQid:(id)arg1;

@end
